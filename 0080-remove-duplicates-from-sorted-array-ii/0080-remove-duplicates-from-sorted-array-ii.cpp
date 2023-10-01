class Solution {
public:
    int removeDuplicates(vector<int>& nums) {

        unordered_map<int, int> mp;

        int index = 0;

        for(int i=0; i<nums.size(); i++){
            if(mp[nums[i]] < 2){
                mp[nums[i]]++;
                nums[index++] = nums[i];
            }
        }

        return index;
    }
};