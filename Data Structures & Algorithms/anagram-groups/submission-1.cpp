class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> bucket;

        for(const auto& s: strs){
            // string key = s;
            // sort(key.begin(),key.end());
            // bucket[key].push_back(s);
            vector<int> count(26,0);
            for(char c: s){
                count[c-'a']++;
            }
            string key = to_string(count[0]);
            for(int i=0; i<26; i++){
                key += ',' + to_string(count[i]);
            }
            bucket[key].push_back(s);
        }
        vector<vector<string>> result;
        for(const auto& val: bucket){
            result.push_back(val.second);
        }
        return result;
    }
    
};
