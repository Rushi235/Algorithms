class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<vector<int>> v;
        if(nums.size()>2){
        for(int i=0;i<nums.size()-2;i++)
        {
            if(i==0 || (i>0 && nums[i]!=nums[i-1]))
            {
                int lo=i+1,hi=nums.size()-1;
                while(lo<hi)
                {
                    if(nums[i]+nums[lo]+nums[hi]==0)
                    {
                        vector<int> v1;
                        v1.push_back(nums[i]);
                        v1.push_back(nums[lo]);
                        v1.push_back(nums[hi]);
                        v.push_back(v1);
                        while(lo<hi && nums[lo]==nums[lo+1])lo++;
                        while(lo<hi && nums[hi]==nums[hi-1])hi--;
                        lo++;
                        hi--;
                        
                    }
                    else if(nums[i]+nums[lo]+nums[hi]<0)
                    {
                        while(lo<hi && nums[lo]==nums[lo+1])lo++;
                        lo++;
                    }
                    else
                    {
                        while(lo<hi && nums[hi]==nums[hi-1])hi--;
                        hi--;
                    }
                }
                
            }
        }}
        return v;
        
    }
};