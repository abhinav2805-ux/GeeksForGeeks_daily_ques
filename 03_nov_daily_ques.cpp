



                                                                //Pythagorean Triplet

//User function template for C++
class Solution {
public:
    // Function to check if a Pythagorean triplet exists or not
    bool checkTriplet(int arr[], int n) {
        for (int i = 0; i < n; i++) {
            arr[i] = arr[i] * arr[i]; // Square each element in the array
        }

        sort(arr, arr + n); // Sort the squared array

        for (int i = n - 1; i >= 2; i--) {
            int left = 0; // Pointer for the first element
            int right = i - 1; // Pointer for the second element

            while (left < right) {
                if (arr[left] + arr[right] == arr[i]) {
                    return true; // Found a Pythagorean triplet
                } else if (arr[left] + arr[right] < arr[i]) {
                    left++;
                } else {
                    right--;
                }
            }
        }

        return false; // No Pythagorean triplet found
    }
};
