class Solution {
  public:

    void func(int idx,int sum,vector<int> &nums,vector<int> &ans)
    {
        if(idx == nums.size() )
        {
            ans.push_back(sum);
            return;
        }
        func(idx+1,sum,nums,ans);

        func(idx+1,sum+nums[idx],nums,ans);

    }
    vector<int> subsetSums(vector<int>& nums) {
        vector<int> ans;
        func(0,0,nums,ans);
        return ans;

        
    }
};
