class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        int size1 = nums1.size();
        int size2 = nums2.size();
        vector<int> nums3;
        vector<int>::iterator k1 = nums1.begin();
        vector<int>::iterator k2 = nums2.begin();
        if(size1 == 0 || size2 == 0)
        {
            return nums3;
        }
        sort(nums1.begin(), nums1.end());
        sort(nums2.begin(), nums2.end());
        while(k1 != nums1.end() && k2 != nums2.end())
        {
            if(*k1 == *k2)
            {
                nums3.push_back(*k1);
                k1++;
                k2++;
            }
            else if(*k1 < *k2)
            {
                k1++;
            }
            else
            {
                k2++;
            }
        }
        return nums3;
    }
};