class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        
        int index = 0;
        unordered_set<int> st;

        for(int i=0; i<nums.size(); i++){
            if(st.find(nums[i]) == st.end()){
                st.insert(nums[i]);
                nums[index++] = nums[i];
            }
        }

        return index;
        
    }
};