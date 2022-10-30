class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        vector<int> v(nums.size(),0);
        for(int i=0;i<nums.size();i++)
        {
            v[nums[i]]++;
            if(v[nums[i]]>1)
            {
                //cout<<v[nums[i]]<<" ";
                return nums[i];
            }
        }
        return v[0];
    }
};