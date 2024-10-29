// Best case time complexity: O(n) 
// Worst case time complexity: O(n^2)
// Average time complexity: O(n^2)

// Space complexity: O(1)

class Solution{
    public:
    void insertionSort(int arr[], int n)
    {
        //code here
        for(int i=0;i<n;i++){
            int j=i;
            while(j>0 && arr[j]<arr[j-1]){
                int temp = arr[j];
                arr[j] = arr[j-1];
                arr[j-1] = temp;
                
                j--;
            }
        }
    }
};