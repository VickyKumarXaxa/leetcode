// Write a function to find the longest common prefix string amongst an array of strings.

// If there is no common prefix, return an empty string "".


class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string curr = strs[0];
        for(int i = 1; i < strs.size(); i++){
            if(strs[i].length() == 0){
                return "";
            }
            for(int j = 0; j < min(curr.length(), strs[i].length()); j++){
                if(curr[j] != strs[i][j]){
                    if(j == 0){
                        return "";
                    }
                    curr = strs[i].substr(0, j);
                    break;
                }
                if(j == strs[i].length() -1){
                    curr = strs[i];
                    break;
                }
            }
        }
        return curr;
    }
};
