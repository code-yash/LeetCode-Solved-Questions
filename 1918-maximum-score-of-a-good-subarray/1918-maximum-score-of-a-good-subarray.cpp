class Solution {
public:
    int maximumScore(vector<int>& nums, int k) {

        int i = k;
        int j = k;
        int minValue = nums[k];
        int result = nums[k];
        int n = nums.size();

        while( i>0 || j<n-1 ){
            int left = i<=0? 0:nums[i-1];
            int right = j>n-1? 0: nums[j+1];

            //if left is included
            if(right>left){
                minValue = min(minValue, right);
                j++;
            }
            else{
                minValue = min(minValue, left);
                i--;
            }

            result = max(result, minValue * (j-i+1));
        }
        return result;
        
    }
};