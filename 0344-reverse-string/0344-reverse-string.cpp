class Solution {
public:
    void reverseString(vector<char>& s) {
    int n = s.size();
    /*vector<char> ans;

    for(int i = n - 1 ; i >= 0 ;i--){
        ans.push_back(s[i]);

    }

    s = ans;*/
    // here we use on more vector which takes o(n) auxilary space and also if we have 10000 element then we have to store all of that which was nit effiecient 
    // it works with assigning property where next one works with compare property

    int  left = 0;
    int right = n - 1;

    while(left < right){
        swap(s[left],s[right]);

        right--;

        left++;
    }
    }
};