class Solution {
public:
    int hammingWeight(uint32_t n) {
        int ret = 0;
        uint32_t tmp1 = n;
        uint32_t tmp2 = n;
        for(int i = 0; i < 32; i++)
        {
            // get the last bit val
            tmp2 = tmp1 >> 1;   
            tmp2 = tmp2 << 1;   
            if(tmp2 != tmp1) // the last bit is '1'   
                ret++;         
            // cast the last bit
            tmp1 = tmp1 >> 1;   
            tmp2 = tmp2 >> 1;   
        }
        return ret;
    }
};