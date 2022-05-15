#include <iostream>
using namespace std;

void checkCharacter(char ch)
{
    if (ch >= 'A' && ch <= 'Z')
    {
        cout << ch << " is Uppercase" << endl;
    }
    else if (ch >= 'a' && ch <= 'z')
    {
        cout << ch << " is Lowercase" << endl;
    }
    else if (ch >= '0' && ch <= '9')
    {
        cout << ch << " is Numeric" << endl;
    }
    else
    {
        cout << "You have entered a special character" << endl;
    }
}

int main()
{
    char ch;
    cin >> ch;
    checkCharacter(ch);
    return 0;
}