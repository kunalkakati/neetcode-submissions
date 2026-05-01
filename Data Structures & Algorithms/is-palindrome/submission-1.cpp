class Solution {
public:
    bool isPalindrome(string s) {
        // Removing white space
        s.erase(remove_if(s.begin(),s.end(), ::isspace), s.end());
        // Removing Symbols, e.g. ?/
        s.erase(remove_if(s.begin(),s.end(), ::ispunct), s.end());
        // Converting whole string to lower case
        transform(s.begin(),s.end(), s.begin(), [](unsigned char c){return tolower(c);});
        // two pointer method to check pelindrome string
        int left = 0;
        int right = s.length() - 1; 
        while(left < right){
            if(s[left] != s[right]){
                return false;
            }
            left++;
            right--;
        }
        return true;
    }
};
