



                                                            //Sum of upper and lower triangles

class Solution
{   
public:
    // Function to return sum of the lower triangle of a matrix.
    int lower(vector<vector<int> > matrix, int n) 
    { 
        int i, j; 
        int sum = 0;
        for (i = 0; i < n; i++) 
        { 
            for (j = 0; j < n; j++) 
            { 
                if (i >= j) 
                { 
                    sum += matrix[i][j];
                } 
            } 
        } 
        return sum;
    } 
  
    // Function to return sum of the upper triangle of a matrix.
    int upper(vector<vector<int> > matrix, int n) 
    { 
        int sum = 0;
        int i, j; 
        for (i = 0; i < n; i++) 
        { 
            for (j = 0; j < n; j++) 
            { 
                if (i <= j) 
                { 
                    sum += matrix[i][j];
                } 
            } 
        } 
        return sum;
    }
    
    vector<int> sumTriangles(const vector<vector<int> >& matrix, int n)
    {
        vector<int> ans;
        int a = upper(matrix, n);
        int b = lower(matrix, n);
        ans.push_back(a);
        ans.push_back(b);
        return ans;
    }
};
