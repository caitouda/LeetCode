class Solution {
public:
    string countAndSay(int n) {
        if (n == 1) 
            return "1";
        string kid = countAndSay(n - 1), ret = "";
        int left = 0, right = 0;
        while (left < kid.size()) {
            while (kid[left] == kid[right]) 
            right++;
            ret += to_string(right - left) + to_string(kid[left] - '0');
            left = right;
        }
        return ret;
    }
};