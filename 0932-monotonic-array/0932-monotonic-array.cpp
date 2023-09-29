class Solution {
public:
    bool isMonotonic(vector<int>& nums) {

        if(nums.size() <= 2)
            return true;

        int n = nums.size();
        int c;
        if(nums[0] > nums[n-1])
            c = 1;
        else
            c = -1;

        


        switch(c){
            case 1:
                for(int i=0; i<n-1; i++){
                    if(nums[i] < nums[i+1])
                        return false;
                }
                break;
            case -1:
                for(int i=0; i<n-1; i++){
                    if(nums[i] > nums[i+1])
                        return false;
                }
        }
        return true;
        
    }
};