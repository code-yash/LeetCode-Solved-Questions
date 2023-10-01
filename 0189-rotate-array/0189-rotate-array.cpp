class Solution {
public:
    void rotate(vector<int>& nums, int k) {

        if(k >= nums.size())
            k = k % nums.size();

        queue<int> q;
        int n = nums.size();
        for(int i=n-k; i<n; i++){
            q.push(nums[i]);
        }

        for(int i = n-k-1; i>=0; i--){
            nums[i+k] = nums[i];
        }

        for(int i=0; i<k; i++){
            nums[i] = q.front();
            q.pop();
        }
        
    }
};