class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> bucket;

        for(const auto& s: strs){
            string key = s;
            sort(key.begin(),key.end());
            bucket[key].push_back(s);
        }
        vector<vector<string>> result;
        for(const auto& val: bucket){
            result.push_back(val.second);
        }
        return result;
    }
    
};
