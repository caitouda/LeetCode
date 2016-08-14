class Solution {
public:
    vector<int> countBits(int num) {
        // if the ith number is even, the bit count is the same as i/2; otherwise the bit count is one more than i/2.
        vector<int> res(num + 1, 0);
        for(int i=1; i<= num; i++){
            if (i % 2 == 1) res[i] = res[i / 2] + 1;
                else res[i] = res[i / 2];
        }
        return res;
    }
};