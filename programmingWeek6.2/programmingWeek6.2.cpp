#include <iostream>
#include <string>
using namespace std;

string charToMorse(char  letter) {
    switch(letter)
    {
    case 'a': case 'A':
        return ".-"; break;
    case 'b': case 'B':
        return "-..."; break;
    case 'c': case 'C':
        return "-.-."; break;
    case 'd': case 'D':
        return "-.."; break;
    case 'e': case 'E':
        return "."; break;
    case 'f': case 'F':
        return "..-."; break;
    case 'g': case 'G':
        return "--."; break;
    case 'h': case 'H':
        return "...."; break;
    case 'i': case 'I':
        return ".."; break;
    case 'j': case 'J':
        return ".---"; break;
    case 'k': case 'K':
        return "-.-"; break;
    case 'l': case 'L':
        return ".-.."; break;
    case 'm': case 'M':
        return "--"; break;
    case 'n': case 'N':
        return "-."; break;
    case 'o': case 'O':
        return "---"; break;
    case 'p': case 'P':
        return ".--."; break;
    case 'q': case 'Q':
        return "--.-"; break;
    case 'r': case 'R':
        return ".-."; break;
    case 's': case 'S':
        return "..."; break;
    case 't': case 'T':
        return "-"; break;
    case 'u': case 'U':
        return "..-"; break;
    case 'v': case 'V':
        return "...-"; break;
    case 'w': case 'W':
        return ".--"; break;
    case 'x': case 'X':
        return "-..-"; break;
    case 'y': case 'Y':
        return "-.--"; break;
    case 'z': case 'Z':
        return "--.."; break;
    case ' ':
        return " "; break;
    case '.':
        return"."; break;
    case',':
        return","; break;
    }
}

int main()
{
    char key;
    bool loop = true;
    while (loop)
    {
        bool toMorse = true;
        string input;
        string output = "";
        int node = 0;
        string sub;
        cout << "Enter a message for change to Morse code : " << endl;
        getline(cin, input);
        if (input[1] == '.' || input[1] == '-')
        {
            toMorse = false;
        }
        else
        {
            toMorse = true;
        }
        if (toMorse)
        {
            for (int i = 0; i < input.length(); i++)
            {
                if (i != 0)
                {
                    output += " ";
                }
                output = output + charToMorse(input[i]);
            }
        }
        else {
            for (int i = 0; i <= input.length(); i++)
            {
                if (input[i] == ' ')
                {
                    sub = input.substr(node, i - node);
                    node = i + 1;
                }
                if (i == input.length() - 1)
                {
                    sub = input.substr(node, i + 1 - node);
                    node = i + 1;
                }
            }
        }
        cout << output << endl;
        cout << "Press r to restart or any key to exit" << endl;
        cin >> key;
        if (key != 'r')
        {
            loop = false;
        }
        cin.clear();
        cin.ignore();
        cout << endl << endl;
    }

}