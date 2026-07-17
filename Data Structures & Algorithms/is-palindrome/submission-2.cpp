class Solution {
public:

 // method 2: 

    bool isPalindrome(string s){
        string str;
        for(int i=0; i <s.size(); i++){
            if(isAlphaNum(s[i])){
                str += tolower(s[i]);
            }
        }
            int l=0, r = str.size()-1;
        while(l < r){
            if(str[l] != str[r]) return false;
        l++;
        r--;
        }

        return true;
    }


   bool isAlphaNum(char ch) {
    return (ch >= 'a' && ch <= 'z') ||
           (ch >= 'A' && ch <= 'Z') ||
           (ch >= '0' && ch <= '9');
}


     // brute force
    // bool isPalindrome(string s) {
    //             string str="";
    //         for(int i=0; i <s.size(); i++){
    //             if(isAlphaNum(s[i])){
    //                 str += s[i];
    //             }
    //         }


    //     int l =0, r = str.size()-1;
    //     while(l < r){
    //         if(tolower(str[l++])!= tolower(str[r--])) return false;
    //     }

    //     return true;
    // }
};
