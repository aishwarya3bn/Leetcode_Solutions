class Solution {
public:
    bool detectCapitalUse(string word) {
        bool allupper = true;
        bool alllower = true;
        bool firstupperrestlower = true;
        for(int i = 0;i < word.size();i++){

            if(!isupper((unsigned char)word[i])){
                allupper = false;
            }
            if(!islower((unsigned int)word[i])){
                alllower = false;
            }
            if(i > 0 && !islower((unsigned char)word[i])){
                firstupperrestlower = false;
            }
        }
        return allupper||alllower||firstupperrestlower;
    }
};