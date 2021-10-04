    int lengthOfLIS(vector<int>& nums) {
        
        int n = nums.size();
        
        int lis[n];
        lis[0] = 1;
        
        for(int i=1;i<n;i++){
            lis[i] = 1;
            for(int j=0;j<i;j++){
                if(nums[i]>nums[j]){
                    lis[i] = max(1+lis[j],lis[i]);
                }
            }
        }
        
        return *max_element(lis,lis+n);
        
    }
