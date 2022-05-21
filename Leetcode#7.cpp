// Given a signed 32-bit integer x, return x with its digits reversed.
// If reversing x causes the value to go outside the signed 32-bit integer range [-231, 231 - 1],
// then return 0.

#include <iostream>
using namespace std;

int reverse(int x)
{
    int answer = 0;
    while (x > 0)
    {
        int digit = x % 10;
        if ((answer > INT32_MAX / 10) || (answer < INT32_MIN / 10))
        {
            return 0;
        }
        answer = (answer * 10) + digit;
        x /= 10;
    }
    return answer;
}

int main()
{
    int number;
    cin >> number;
    cout << reverse(number);
    return 0;
}