def generate_key_pair(super_increasing_knapsack, m, n):
    general_knapsack = [(si * m) % n for si in super_increasing_knapsack]
    private_key = super_increasing_knapsack
    public_key = general_knapsack
    return private_key, public_key,pow(m, -1, n), n
    
def generate_digital_signature(public_key, message, n):
    message = ord(message)
    binary_message = [int(bit) for bit in format(message, '08b')]
    encrypted_message = sum([binary_message[i] * public_key[i] for i in range(len(public_key))])
    return encrypted_message
    
def verify_digital_signature(private_key, digital_signature, m_inverse, n):
    c_prime = (digital_signature * m_inverse) % n
    decrypted_message = []
    for num in reversed(private_key):
        if num <= c_prime:
            decrypted_message.insert(0, '1')
            c_prime -= num
        else:
            decrypted_message.insert(0, '0')
    return chr(int(''.join(decrypted_message), 2))

super_increasing_knapsack = [2, 7, 11, 21, 42, 89, 180, 354]
m = 588
n = 881
private_key, public_key, m_inverse, n = generate_key_pair(super_increasing_knapsack, m, n)
print("Private Key:", private_key)
print("Public Key:", public_key)

message = 'a'
digital_signature = generate_digital_signature(public_key, message,n)
print("Digital Signature:", digital_signature)

verified_message = verify_digital_signature(private_key, digital_signature, m_inverse, n)
print("Verified Message:", verified_message)
