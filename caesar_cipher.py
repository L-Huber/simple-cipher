#Gibt einen verschlüsselten Text aus, sowie eine Schlüssel zum Entschlüsseln des Textes

    #Variabeln:
    #    input_string (str): Text, der verschlüsselt werden soll
    #    shift_key (int): Anzahl an Buchstaben, die der Text verschoben werden soll

    #Output:
    #    Verschlüsselter Text als String
    #    Zahl, um den Text wieder zu entschlüsseln
def main():
    input_string = "Dieser Satz wird nun verschluesselt"
    shift_key =  3
    caesar_cipher(input_string,shift_key)
def caesar_cipher(input_string,shift_key):
    print("Verschlüsselter Input:")
    print(shifting(input_string,shift_key))
    print("Zum Entschlüsseln folgenden shift_key verwenden:")
    print(shift_key*(-1))

def shifting(input_string,shift_key):
    shifted_string=""
    for char in input_string:
        char_shifted = chr(ord(char) + shift_key)
        shifted_string = shifted_string+char_shifted
    return shifted_string

if __name__ == "__main__":
    main()