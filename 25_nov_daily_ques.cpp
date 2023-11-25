



                                                                      //Shuffle integers

class Solution{
	
	
	
	public:
	void shuffleArray(int arr[],int n)
	{
	    
	    vector<int>a;
	    vector<int>b;
	    for(int i = 0;i<n/2;i++) a.push_back(arr[i]);
	    for(int i = n/2;i<n;i++) b.push_back(arr[i]);
	    int i = 0;
	    int j = 0;
	    while(i<n){
	        arr[i] = a[j];
	        i++;
	        
	       arr[i] = b[j];
	       i++;
	       
	       j++;
	    }
	}
		 

};
