class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        vector<vector<int>> v;
        map<vector<int>,int> m;
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size();i++)
        {
            
            for(int j=nums.size()-1;j>=0;j--)
            {
                int k=i+1;
                int l=j-1;
                while(k<l)
                {
                    vector<int> v1;
                    int cou=nums[i]+nums[j];
                    while(k<l && cou+nums[k]+nums[l]<target)
                    {
                        k++;
                    }
                    while(k<l && cou+nums[k]+nums[l]>target)
                    {
                        l--;
                    }
                    if(k<l && cou+nums[k]+nums[l]==target)
                    {
                        v1.push_back(nums[i]);
                        v1.push_back(nums[k]);
                        v1.push_back(nums[l]);
                        v1.push_back(nums[j]);
                        m[v1]++;
                        if(nums[l]!=nums[l-1])
                        {
                            l--;
                        }
                        else
                        {
                            k++;
                        }
                    }
                }
            }
        }
        for(auto x: m)
        {
            v.push_back(x.first);
        }
        return v;
        
    }
};