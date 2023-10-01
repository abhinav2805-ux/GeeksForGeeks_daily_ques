




//                                                                   <----------------    Boolean Matrix   ---------------->










class Solution
{   
    public:
    //Function to modify the matrix such that if a matrix cell matrix[i][j]
    //is 1 then all the cells in its ith row and jth column will become 1.
    void booleanMatrix(vector<vector<int> > &matrix)
    {
          vector<int> row;
        vector<int> col;
        int m = matrix.size();
        int n = matrix[0].size();
        for(int i =0;i<m;i++){
            for(int j =0;j<n;j++){
                if(matrix[i][j]==1){
                    row.push_back(i);
                    col.push_back(j);
                }
            }
        }
        // for row to be zero
        for(int i =0;i<row.size();i++){
            for(int j =0;j<n;j++){
                matrix[row[i]][j] = 1;
            }
        }

for(int i =0;i<m;i++){
            for(int j =0;j<col.size();j++){
                matrix[i][col[j]] = 1;
            }
        }

    }
};
