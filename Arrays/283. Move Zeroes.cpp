class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int i=0;
        for(int j=0;j<nums.size();j++)
        {
            if(nums[i]!=0)
            {
                i=j;
            }
            else{
                swap(nums[i],nums[j]);
                while(i<j && nums[i]!=0)
                {
                    i++;
                }
            }
        }
        
    }
};