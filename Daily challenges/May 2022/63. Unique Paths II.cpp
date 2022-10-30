class Solution {
public:
    int uniquePathsWithObstacles(vector<vector<int>>& aa) {
        vector<vector<int>> v(aa.size(),vector<int> (aa[0].size(), 0));
        for(int i=0;i<aa.size();i++)
        {
            for(int j=0;j<aa[i].size();j++)
            {
                if(!aa[i][j])
                {
                    if(i==0 && j==0)
                    {
                        v[i][j]=1;
                    }
                    else if(i==0)
                    {
                        v[i][j]=v[i][j-1];
                    }
                    else if(j==0)
                    {
                        v[i][j]=v[i-1][j];
                    }
                    else 
                    {
                        v[i][j]=v[i-1][j]+v[i][j-1];
                    }
                }
            }
        }
        return v[aa.size()-1][aa[0].size()-1];
    }
};