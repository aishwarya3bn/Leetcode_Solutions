class Solution {
public:
    bool detectCapitalUse(string word) {
        
        int count = 0 ;
        for(int i = 0 ; i < word.size();i++){

            if(isupper((unsigned char)word[i])){
                count++;
            }
        }
        if(count == 0 ){
                return true;
            }
        if(count == word.size()){
                return true;
            }
        if(count == 1 && isupper((unsigned char)word[0])){
                return true;
            }
        
    return false;

    }
};