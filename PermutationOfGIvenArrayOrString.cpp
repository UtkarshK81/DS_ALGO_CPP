/*Given an array nums of distinct integers, return all the possible permutations*/
#include <iostream>
#include <vector>
using namespace std;
void solve(vector<int> nums, vector<vector<int>> &ans, int index)
{
    // BASE CASE
    if (index >= nums.size())
    {
        ans.push_back(nums);
        return;
    }
    for (int j = index; j < nums.size(); j++)
    {
        swap(nums[index], nums[j]);
        solve(nums, ans, index + 1);

        swap(nums[index], nums[j]);
    }
}
vector<vector<int>> permute(vector<int> &nums)
{
    vector<vector<int>> ans;
    int index = 0;
    solve(nums, ans, index);
    return ans;
}
int main()
{

    vector<int> nums = {2, 34, 21, 22, 0};
    vector<vector<int>> vec = permute(nums);
    for (int i = 0; i < vec.size(); i++)
    {
        for (int j = 0; j < vec[i].size(); j++)
            cout << vec[i][j] << " ";
        cout << endl;
    }
    return 0;
}