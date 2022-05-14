class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int max=INT_MIN;
        int ans=0;
        for(int i=0;i<nums.size();i++){
            
            ans = nums[i]+ans;
            
            if(max<ans){
                max = ans;
            }
            if(ans<0){
                ans =0;
            }
            
        };
        return max;
    }
};
