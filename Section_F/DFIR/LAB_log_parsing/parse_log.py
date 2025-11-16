import re
from datetime import datetime
from collections import Counter

LOG_PATH = "./auth_sample.log"

# Regular expressions
FAILED_LOGIN = r"Failed password"
SUCCESSFUL_LOGIN = r"session opened for user"
SUDO_EVENT = r"sudo:"

def parse_log(log_file):
    failed = []
    successful = []
    sudo_commands = []

    with open(log_file, "r") as f:
        for line in f:
            # Extract timestamp
            try:
                timestamp_str = line.split(" ")[0]
                timestamp = datetime.fromisoformat(timestamp_str.replace("Z", "+00:00"))
            except:
                timestamp = None

            if re.search(FAILED_LOGIN, line):
                failed.append((timestamp, line.strip()))

            if re.search(SUCCESSFUL_LOGIN, line):
                successful.append((timestamp, line.strip()))

            if re.search(SUDO_EVENT, line):
                sudo_commands.append(line.strip())

    return failed, successful, sudo_commands

def detect_bruteforce(failed_attempts):
    timestamps = [ts for ts, _ in failed_attempts if ts]
    if len(timestamps) < 5:
        return False

    timestamps.sort()
    for i in range(len(timestamps) - 4):
        # check 5 failures in 2 minutes
        if (timestamps[i+4] - timestamps[i]).seconds < 120:
            return True
    return False

# MAIN
failed, successful, sudo_cmds = parse_log(LOG_PATH)

print("\n===== FAILED LOGIN ATTEMPTS =====")
for ts, line in failed:
    print(ts, line)

print("\n===== SUCCESSFUL LOGIN SESSIONS =====")
for ts, line in successful:
    print(ts, line)

print("\n===== SUDO COMMANDS USED =====")
for line in sudo_cmds:
    print(line)

print("\n===== BRUTE FORCE DETECTION =====")
if detect_bruteforce(failed):
    print("⚠️ Possible brute-force attack detected!")
else:
    print("No brute-force pattern found.")