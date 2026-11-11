class Solution {
public:
    int strStr(string haystack, string needle) {

        int n = haystack.size();
        int m = needle.size();

        for (int i = 0; i <= n - m; i++) {

            if (haystack[i] == needle[0]) {

                if (haystack.substr(i, m) == needle) {

                    return i;
                }
            }
        }

        return -1;
    }
};

/*Approach 1 (Character-by-character): Time – O(n × m), Space – O(1).

Approach 2 (Using substr()): Time – O(n × m), Space – O(m).*/