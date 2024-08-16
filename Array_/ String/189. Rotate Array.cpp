#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <map>

using namespace std;

class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int curPos = 0;
        // int* prevNum = nullptr;
        int n = nums.size();
        vector<int> ans(n);
        for(int i = 0; i < n; i++)
        {
            curPos = (i+k)%n;
            ans[curPos] = nums[i];
            // if(prevNum == &nums[0])
            // {
            //     curPos = (curPos++)%n;
            // }
            // curPos = (curPos + k) % n;
            // swap(nums[curPos], nums[0]);
            // prevNum = &nums[0];
        }
        ans.swap(nums);
    }
// private:
//     void swap(int& a, int& b)
//     {
//         int temp = a;
//         a = b;
//         b = temp;
//     }
};

int main()
{
    Solution solution;
    vector<int> a = {-1, -100, 3, 99};
    solution.rotate(a, 2);
}