class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int, int> mp;

        for(int i=0; i<nums.size(); i++){
            mp[nums[i]]++;
        }

        int n = nums.size();
        for(auto i=mp.begin(); i != mp.end(); i++){
            if(i->second > floor(n/2))
                return i->first;
        }

        return -1;
        
    }
};