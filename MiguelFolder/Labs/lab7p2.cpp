#include <bits/stdc++.h>
using namespace std;
vector<int> runningSum(vector<int> &nums)
{
    vector<int> res(nums.size());
    if (nums.size() == 0)
        return res;
    res[0] = nums[0];
    for (int i = 1; i < nums.size(); i++)
    {
        res[i] = res[i - 1] + nums[i];
    }
    return res;
}
int main()
{
    int NUM_VALS;
    int i;
    cout << "Enter number of elements you want to enter: ";
    cin >> NUM_VALS;
    vector<int> nums(NUM_VALS);
    cout << "Enter values: ";
    for (i = 0; i < NUM_VALS; ++i)
    {
        cin >> nums[i];
    }
    vector<int> res = runningSum(nums);
    cout << "The running sum is: ";

    for (int i = 0; i < res.size(); i++)
        cout
            << res[i] << " ";

    // cout << "The running sum is: " << res.back() << endl;
    return 0;
}