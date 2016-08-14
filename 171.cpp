class Solution {
public:
    int titleToNumber(string s) {
        int length = s.length();
        int sum = 0;
        for(int i = length - 1; i >= 0; i--)
        {
            sum += (s[i] - 64) * pow(26, length - 1 - i);
        }
        return sum;
    }
};