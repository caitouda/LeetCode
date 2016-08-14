class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int size = nums.size();
        int temp[size];
        int j=0;
        for(int i = 0; i < size; i++)
        {
            if(nums[i] != 0)
            {
                temp[j] = nums[i];
                j++;
            } 
        }
        for(; j < size; j++)
        {
            temp[j] = 0;
        }
        for(int i = 0; i < size; i++)
        {
            nums[i] = temp[i];
        }
    }
};