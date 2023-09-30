class Solution {
public:

    bool bruteForce(vector<int> & nums){
        // ----------------Using Brute Force -------------------

        int n = nums.size();
        for(int i=0; i<n-2; i++){
            for(int j=i+1; j<n-1; j++){
                for(int k = j+1; k<n; k++){
                    if(nums[i] < nums[k] && nums[k] < nums[j])
                        return true;
                    }
                }
            }
            return false;
    }

    bool using2loops(vector<int> &nums){
        int min = nums[0];
        int n = nums.size();

        for(int j=1; j< n-1; j++){
            if(nums[j] < min){
                min = nums[j];
                continue;
            }
            for(int k = j+1; k<n; k++){
                if(min < nums[k] && nums[k] < nums[j])
                        return true;
            }
        }

        return false;
    }

    bool usingStack(vector<int> &nums){
       

       stack<int> st;
        int mini=INT_MIN, n=nums.size();
        for(int i=n-1;i>-1;i--)
        {
            if(nums[i]<mini) return true;
            while(!st.empty() && st.top()<nums[i])
            {
                mini=st.top();
                st.pop();
            }
            st.push(nums[i]);
        }
        return false;
    }

    bool find132pattern(vector<int>& nums) {
        // return bruteForce(nums);

        // return using2loops(nums);

        return usingStack(nums);


    }


   
};