class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        
        unordered_map<int, int> count;
        int countpairs = 0;

        for(int i=0; i<nums.size(); i++){
            count[nums[i]]++;
        }

        for(auto i = count.begin(); i != count.end(); i++)
        {
            int c = i->second;
            if(c>1)
            countpairs += (c * (c-1)) / 2;
        }

        return countpairs;
        
    }
};