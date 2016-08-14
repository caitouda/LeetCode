class Solution {
public:
    string reverseString(string s) {
        string rs(s.rbegin(), s.rend());
        return rs;
    }
};