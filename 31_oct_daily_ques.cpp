



                                                                                //Move all zeroes to end of array

class Solution{
public:
	void pushZerosToEnd(int arr[], int n) {
	    int i = 0;
    int j = 0;

   
    while (i < n) {
        if (arr[i] != 0) {
           
            swap(arr[i], arr[j]);
            j++;
        }
        i++;
    }
	}
};
