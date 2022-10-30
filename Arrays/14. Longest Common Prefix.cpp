class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string aa=strs[0];
        
        for(int i=1;i<strs.size();i++)
        {
            string bb="";
            for(int j=0;j<strs[i].size() && j<aa.size();j++)
            {
               if(aa[j]==strs[i][j])
               {
                   bb+=strs[i][j];
               }
                else{
                    aa=bb;
                    break;
                }
            }
            if(strs[i].size()<aa.size())
            {
                aa=strs[i];
            }
        }
        return aa;
    }
};