class Solution {
public:
    string removeDuplicateLetters(string s) {
        vector<int> freq(26,0);
        vector<bool> visited(26, 0);
        string ans;

        for(auto i: s)
            freq[i-'a']++;

        for(auto i: s){
            freq[i - 'a']--;
            if(!visited[i-'a'])
            {
                while(ans.size() && ans.back() > i && freq[ans.back() - 'a'] > 0){
                    visited[ans.back() - 'a'] = 0;
                    ans.pop_back();
                }
                
                ans.push_back(i);
                visited[i - 'a'] = 1;
            }
        } 
        return ans;
    }
};