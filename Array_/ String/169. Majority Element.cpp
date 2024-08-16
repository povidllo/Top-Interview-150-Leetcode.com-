#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <map>

using namespace std;

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n = nums.size();
        map<int, int> p;
        vector<int>values;
        for(auto a:nums)
        {
            auto elem = p.find(a);
            if(elem == p.end())
                p.emplace(a, 1);
            else
                elem->second++;
            values.push_back(a);
        }
        for(auto a:values)
        {
            auto elem = p.find(a);
            if(elem->second > n/2)
            {
                return a;
            }
        }
        return 0;
    }
};

int main()
{
    Solution solution;
    vector<int> a = {2,2,1,1,1,2,2};
    cout<<solution.majorityElement(a);
}