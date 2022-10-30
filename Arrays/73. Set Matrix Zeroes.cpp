class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        map<int,int> x,y;
        for(int i=0;i<matrix.size();i++)
        {
            for(int j=0;j<matrix[0].size();j++)
            {
                if(matrix[i][j]==0)
                {
                    x[i]++;
                    y[j]++;
                }
            }
        }
        for(auto m: x)
        {
            if(m.second>0)
            {
                for(int i=0;i<matrix[0].size();i++)
                {
                    matrix[m.first][i]=0;
                }
            }
        }
        for(auto m: y)
        {
            if(m.second>0)
            {
                for(int i=0;i<matrix.size();i++)
                {
                    matrix[i][m.first]=0;
                }
            }
        }
    }
};