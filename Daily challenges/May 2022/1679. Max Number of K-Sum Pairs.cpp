class Solution {
public:
    int maxOperations(vector<int>& nums, int k) {
        map<int,int> m;
        int co=0;
        for(int i=0;i<nums.size();i++)
        {
            m[nums[i]]++;
        }
        for(auto x: m)
        {
            if(k==2*x.first)
            {
                int tem=x.second/2;
                co+=tem;
                m[x.first]-=tem*2;
            }
            else if(m[k-x.first]>0)
            {
                cout<<m[k-x.first]<<" "<<x.second<<"\n";
                int tem= min(m[k-x.first],x.second);
                co+=tem;
                m[k-x.first]-=tem;
                m[x.first]-=tem;
            }
        }
        return co;
    }
};