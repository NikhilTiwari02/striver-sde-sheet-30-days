class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        vector<int>col(matrix.size(),0);
        vector<int>row(matrix[0].size(),0);
         for(int i=0;i<matrix.size();i++)
         {
             for(int j=0;j<matrix[0].size();j++)
             {
                 if(matrix[i][j]==0)
                 {  col[i]=1;
                    row[j]=1;
                  }                    
             }
         }
        for(int i=0;i<matrix.size();i++)
        {
            for(int j=0;j<matrix[0].size();j++)
            {
               if(col[i] || row[j])
                   matrix[i][j]=0;
            }
        }
    }
};
