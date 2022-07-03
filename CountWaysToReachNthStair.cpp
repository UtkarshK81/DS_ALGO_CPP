#include <iostream>
using namespace std;

int countDistinctWaysToClimb(int nStairs)   //Recursive Solution
{
    if (nStairs < 0)
    {
        return 0;
    }
    if (nStairs == 0)
    {
        return 1;
    }
    return countDistinctWaysToClimb(nStairs - 1) + countDistinctWaysToClimb(nStairs - 2);
}

int main()
{
    int nStairs;
    cin >> nStairs;

    cout << countDistinctWaysToClimb(nStairs);
    return 0;
}