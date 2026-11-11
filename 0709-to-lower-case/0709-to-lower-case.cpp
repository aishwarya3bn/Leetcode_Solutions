class Solution {
public:
    string toLowerCase(string s) {

        for(int i = 0; i < s.size(); i++) {

/* signed char: Can interpret byte values above 127 as negative, which can cause problems with functions like tolower().
- unsigned char: Ensures byte values are interpreted as 0–255, avoiding invalid negative arguments to tolower().*/

            s[i] = tolower((unsigned char)s[i]);
        }

        return s;
    }
};