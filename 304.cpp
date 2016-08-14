class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        map<int, bool> map_res;
        for(int val: nums1)
        {
            map_res[val] = true;
        }
        vector<int> res;
        for(int val: nums2)
        {
            if(map_res[val] == true)
            {
                map_res[val] = false;
                res.push_back(val);
            }
        }
        return res;
    }
};