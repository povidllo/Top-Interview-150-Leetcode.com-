#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if(nums.size() <= 2)
            return nums.size();
        int ans = 0;
        int dupl = -100000, iter = 0;
        while(iter != nums.size())
        {
            if(iter != nums.size()-1)
            {
                if(nums[iter] == nums[iter+1])
                {
                    if(nums[iter] == dupl)
                    {
                        nums[iter] = 100000;
                        nums[iter+1] = 100000;
                        iter+= 2;
                    }
                    else
                    {
                        dupl = nums[iter];
                        iter+= 2;
                        ans+=2;
                    }
                }
                else if(nums[iter] != nums[iter+1] && nums[iter] == dupl)
                {
                    nums[iter] = 100000;
                    iter++;
                    // ans++;
                }
                else
                {
                    iter++;
                    ans++;
                }
            }
            else if(nums[iter] == dupl)
            {
                nums[iter] = 100000;
                iter++;
            }
            else
            {
                iter++;
                ans++;
            }
        }
        sort(nums.begin(), nums.end());
        return ans;
    }
};

int main()
{
    Solution solution;
    vector<int> a = {1,1,1,2,2,3};
    cout<<solution.removeDuplicates(a)<<endl;
}