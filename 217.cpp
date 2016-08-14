class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        map<int, int> m;
        for(auto &n: nums)
        {
            m[n]++;
        }
        bool result = false;
        for(auto &i: m)
        {
            if(i.second > 1)
            {
                result = true;
            }
        }
        return result;
    }
};