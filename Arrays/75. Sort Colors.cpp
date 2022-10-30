class Solution {
public:
    void sortColors(vector<int>& nums) {
        int co=0,c=0;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==0)
            {
                co++;
            }
            else if(nums[i]==1)c++;
        }
        for(int i=0;i<nums.size();i++)
        {
            if(i<co)
            {
                nums[i]=0;
            }
            else if(i<co+c)nums[i]=1;
            else nums[i]=2;
        }
    }
};