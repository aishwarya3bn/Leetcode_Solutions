class Solution {
public:
    string toLowerCase(string s) {

        for(int i = 0; i < s.size(); i++) {

            s[i] = tolower((unsigned char)s[i]);
        }

        return s;
    }
};