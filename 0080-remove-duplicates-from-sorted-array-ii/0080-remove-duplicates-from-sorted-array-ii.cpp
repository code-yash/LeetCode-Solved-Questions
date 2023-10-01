class Solution {
public:
    int removeDuplicates(vector<int>& nums) {

        // unordered_map<int, int> mp;

        // int index = 0;

        // for(int i=0; i<nums.size(); i++){
        //     if(mp[nums[i]] < 2){
        //         mp[nums[i]]++;
        //         nums[index++] = nums[i];
        //     }
        // }

        // return index;



        //------------O(1) Space complexity Solution-----------
        
        if(nums.size() < 2){
            return nums.size();
        }

        int index = 2;
        for(int i=2; i<nums.size(); i++){
            if(nums[index-2] != nums[i])
                nums[index++] = nums[i];
        }
        return index;
    }
};