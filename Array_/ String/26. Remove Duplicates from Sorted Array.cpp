#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int ans = 1;
        int dupl = 0, iter = 1, pos = 0;
        for(iter; iter < nums.size(); iter++)
        {
            if(nums[iter] == nums[iter-1])
            {
                dupl = iter - 1;
                nums[iter] = 1000;
                continue;
            }
            if(nums[iter] == nums[dupl])
            {
                nums[iter] = 1000;
                continue;
            }
            ans++;
        }
        int flag = 1;
        for(iter = 1; iter < nums.size(); iter++)
        {
            
            while((nums[pos] != 1000) && flag == 1)
            {
                if(pos >= iter)
                    break;
                pos++;
                if(nums[pos] == 1000)
                {
                    flag = 0;
                }
            }
            if(nums[iter] != 1000 && nums[pos] == 1000)
            {
                nums[pos] = nums[iter];
                nums[iter] = 1000;
                flag = 1;
            }
        }
        return ans;
    }
};

int main()
{
    Solution solution;
    vector<int> a = {1,2,4,5,6};
    solution.removeDuplicates(a);
}