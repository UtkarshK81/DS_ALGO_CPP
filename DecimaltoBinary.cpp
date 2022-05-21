#include <iostream>
#include <math.h>
using namespace std;

void covertDecimalToBinary(unsigned int n)
{
    int ans=0;
    int i = 0;
    while (n != 0)
    {
        int bit = n & 1;
        ans = (bit * pow(10, i)) + ans;
        n = n >> 1;
        i++;
    }
    cout << ans;
}

int main()
{
    unsigned int n;
    cin >> n;
    covertDecimalToBinary(n);
    return 0;
}