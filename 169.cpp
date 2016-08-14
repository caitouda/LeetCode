class Solution {
public:
    int majorityElement(vector<int>& nums) {
        map<int, int> m;
        for(auto &n: nums)
        {
            m[n]++;
        }
        int size = nums.size();
        int result = 0;
        for(auto &i: m)
        {
            if(i.second > size / 2)
            {
                result = i.first;
            }
        }
        return result;
    }
};