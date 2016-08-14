class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
        string s(32, '0');
        int i = 0;
        while(n) {
            s[i++] = '0' + n % 2;
            n /= 2;
        }
        return stoul(s, 0, 2);
    }
};