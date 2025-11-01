class Solution{	
	public:
		int arraySum(vector<int>& nums){
            return Sum(0,nums);
		}

        int Sum(int i,vector<int>& nums)
        {
            if(i>= nums.size()) return 0;
            return nums[i] + Sum(i+1,nums);
            
        }
};
