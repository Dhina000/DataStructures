class Solution {
public:

    void func(int idx,vector<int> &nums,vector<int> &subset,vector<vector<int>> &ans)
    {
        if(idx == nums.size())
        {
            ans.push_back(subset);
            return;
        }

        subset.push_back(nums[idx]);
        func(idx+1,nums,subset,ans);
        subset.pop_back();

        for(int j=idx+1;j<nums.size();j++)
        {
            if(nums[j] != nums[idx])
            {
                func(j,nums,subset,ans);
                return;

            }
        }
        func(nums.size(),nums,subset,ans);


    }
    vector<vector<int> > subsetsWithDup(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> subset;
        sort(nums.begin(),nums.end());
        func(0,nums,subset,ans);
        return ans;
    }
};
