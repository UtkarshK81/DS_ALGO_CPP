#include <iostream>
using namespace std;

bool checkPalindrome(string a)
{
    int s = 0;
    int e = a.length() - 1;

    while (s <= e)
    {
        if (a[s] != a[e])
        {
            return 0;
        }
        else
        {
            s++;
            e--;
        }
    }
    return 1;
}
int main()
{
    string s;
    cin >> s;
    if (checkPalindrome(s))
    {
        cout << s << " is a palindrome";
    }
    else
    {
        cout << s << " is not a palindrome";
    }
    return 0;
}