class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int ans = 0;
        int iter = 0, ptr = 0;
        for(iter; iter < nums.size(); iter++)
        {
            if(nums[iter] == val)
            {
                if(nums[ptr] != val)
                    ptr = iter;
                continue;
            }
            else if(ptr != iter && nums[ptr] == val)
            {
                nums[ptr] = nums[iter];
                ptr++;
                nums[iter] = val;
            }
            ans++;
        }
        return ans;
    }
};