# Lab–2: Network Traffic Analysis (Wireshark)

## 1. Objective
Analyze packet capture to detect suspicious communication patterns such as port scans, DNS abuse, and protocol anomalies.

---

## 2. Tools Used
- Wireshark
- tcpdump (WSL)

---

## 3. Packet Capture Summary
- Total packets: 150
- Top protocols: TCP, DNS, HTTPS

---

## 4. Findings

### 🔍 4.1 Port Scan / SYN Pattern
Observed multiple SYN packets from:
- Source: 10.114.243.115
- Destination: 10.114.243.170 (Port 53)
**Conclusion:** Normal DNS parallel request behavior. Not malicious.

---

### 🔍 4.2 DNS Analysis
Queried domains:
- main.vscode-cdn.net → Normal (Microsoft CDN)
- httpbin.org → Normal (API testing)
- fonts.googleapis.com → Normal (Google Fonts)

**Conclusion:** No suspicious DNS patterns.

---

### 🔍 4.3 Conversations Summary
Top talkers:
- 10.114.243.115 ↔ 10.114.243.170 (DNS)
- 10.114.243.115 ↔ 13.107.246.58 (HTTPS)

**Conclusion:** Normal system and browser activity.

---

### 🔍 4.4 Threat Verdict
No malware, no C2 signals, no port scanning, no exfiltration.

---

## 5. Skills Demonstrated
- Wireshark filtering
- Packet-level forensic analysis
- DNS and TCP behavior understanding
- Writing DFIR-grade findings

---

## 6. Screenshots
(.png files)