class Solution {
public:
    bool isPalindrome(string s) {
        s.erase(remove_if(s.begin(),s.end(), ::isspace), s.end());
        s.erase(remove_if(s.begin(),s.end(), ::ispunct), s.end());
        transform(s.begin(),s.end(), s.begin(), [](unsigned char c){return tolower(c);});
        int left = 0;
        int right = s.length() - 1; 
        // cout<<s<<endl;
        while(left < right){
            if(s[left] != s[right]){
                return false;
            }
            left++;
            right--;
        }
        cout<<s<<endl;
        return true;
    }
};
