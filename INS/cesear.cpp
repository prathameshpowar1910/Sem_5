#include <iostream>
using namespace std;

string result1 = "";

string removeSpaces(string text) {
    string result;
    for (char c : text) {
        if (c != ' ')
            result += c;
    }
    return result;
}

string encrypt(string text, int s)
{
    result1 = ""; 
    for (int i = 0; i < text.length(); i++) {
        if (isupper(text[i]))
            result1 += char(int(text[i] + s - 65) % 26 + 65);
        else
            result1 += char(int(text[i] + s - 97) % 26 + 97);
    }

    return result1;
}

string decrypt(string text, int s)
{
    string result2 = "";
    for (int i = 0; i < text.length(); i++) {
        if (isupper(text[i]))
            result2 += char(int(text[i] + (26 - s) - 65) % 26 + 65);
        else
            result2 += char(int(text[i] + (26 - s) - 97) % 26 + 97);
    }

    return result2;
}

int main()
{
    char opt2 = 'y';

    while (opt2 == 'y') {
        string text;
        int s;
        int opt1;

        cout << "\n\n\nEnter \n1 to Encrypt \n2 to Decrypt : ";
        cin >> opt1;

        if (opt1 == 1) {
            cout << "\n\nEnter the plain text : ";
            cin.ignore(); r
            getline(cin, text);

            cout << "\nEnter the Shift Key : ";
            cin >> s;

            text = removeSpaces(text);
            cout << "\nCipher: " << encrypt(text, s);
        } else if (opt1 == 2) {
            cout << "\n\nEnter the plain text : ";
            cin.ignore(); 
            getline(cin, text);

            cout << "\nEnter the Shift Key : ";
            cin >> s;

            text = removeSpaces(text);
            cout << "\nDecrypted text : " << decrypt(text, s);
        }

        cout << "\n\nDo you wish to continue : (y/n) ; ";
        cin >> opt2;
    }
    return 0;
}
