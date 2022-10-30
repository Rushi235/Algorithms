class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int co=nums[0];
        for(int i=1;i<nums.size();i++)
        {
            co=co^nums[i];
        }
        for(int i=0;i<=nums.size();i++)
        {
            co=co^i;
        }
        return co;
    }
};