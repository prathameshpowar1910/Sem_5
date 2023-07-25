#include <iostream>
#include <string>
using namespace std;

string encrypt(string key, string mat) {
    int rows = (mat.length() + 2) / 3; // Add 2 to ensure enough space for filler characters
    int cols = 3;

    // Add filler characters if needed
    while (mat.length() < rows * cols) {
        mat += ' ';
    }

    string result = "";
    for (int i = 0; i < cols; i++) {
        int selCol = key[i] - '0' - 1;
        for (int j = 0; j < rows; j++) {
            int index = j * cols + selCol;
            result += mat[index];
        }
    }

    return result;
}

void decrypt(string key, string cipher) {
    int rows = 4;
    int cols = 3;

    int k = 0;
    string mat(rows * cols, ' '); // Initialize matrix with spaces

    for (int i = 0; i < cols; i++) {
        int selCol = key[i] - '0' - 1;
        for (int j = 0; j < rows; j++) {
            int index = j * cols + selCol;
            if (index < mat.length()) {
                mat[index] = cipher[k];
                k++;
            }
        }
    }

    cout << "\nPlain Text: ";
    for (int i = 0; i < mat.length(); i++) {
        if (mat[i] != ' ') {
            cout << mat[i];
        }
    }
}

int main() {
    string message = "HELLOWORLD";
    string key = "231";
    string mat = "";

    cout << "Message: " << message << endl;
    cout << "Key: " << key << endl;

    for (char ch : message) {
        mat += ch;
    }

    cout << "Matrix: \n";
    for (int i = 0; i < mat.length(); i++) {
        cout << mat[i] << '\t';
        if ((i + 1) % 3 == 0) {
            cout << endl;
        }
    }

    cout << "Cipher: ";
    string cipher = encrypt(key, mat);
    cout << cipher;

    decrypt(key, cipher);

    return 0;
}
