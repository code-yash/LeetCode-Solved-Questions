class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        unordered_map<int, int> freq;
        vector<int> ans;

        for(int i: nums){
            freq[i]++;
        }

        for(auto i= freq.begin(); i!= freq.end(); i++)
            if(i->second > floor(nums.size()/3))
                ans.push_back(i->first);
            
        return ans;
        
    }
};