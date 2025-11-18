def encode_msg():
    s = input("Enter the message: \n")
    n = int(input("Enter the key you want to shift: \n"))
    s_encoded = ""
    for c in s:
        if c.isalpha():
            base = ord('A') if c.isupper() else ord('a')
            new_c = chr((ord(c) - base + n) % 26 + base)
            s_encoded += new_c
        else:
            s_encoded += c    
    print(f"The Encoded message is: \n{s_encoded}")

def decode_msg():
    s = input("Enter the encoded message: \n")
    n = int(input("Enter the key used in shifting: \n"))
    s_decoded = ""
    for c in s:
        if c.isalpha():
            base = ord('A') if c.isupper() else ord('a')
            new_c = chr((ord(c) - base - n) % 26 + base)
            s_decoded += new_c
        else:
            s_decoded += c  
    print(f"The Decoded message is: \n{s_decoded}")

def menu():            
    while(True):
        print("Enter a value: \n")
        choice = int(input("1.Encode a message\n2.Decode a message\n0.Exit\n"))
        match(choice):
            case 1: encode_msg()    
            case 2: decode_msg()
            case 0:
               print("Exiting...")
               break
            case _:
               print("Invalid Input!")
menu()