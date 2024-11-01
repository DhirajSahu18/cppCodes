// Brute Force Approach

class Solution {
  public:
   void qS(vector<int> &arr, int low , int high){
       if(low>=high) return;
       int left=low, right = high;
       
       int pivot=arr[left];
       while(left<right){
           while(arr[left]<pivot){
               left++;
           }
           
           while(arr[right]>=pivot){
               right--;
           }
           
           if(left<right){
               std::swap(arr[left] , arr[right]);
           }
       }
       
       std::swap(arr[left] , pivot);
       
       qS(arr , low , right-1 );
       qS(arr , right +1 , high);
       
   }
  public:
    int largest(vector<int> &arr) {
        int low = 0;
        int high = arr.size() -1 ;
        qS(arr , low , high);
        return arr[high];
    }
    
  
};


// Optimal Approach

class Solution {
  public:
    int largest(vector<int> &arr) {
        int largest = -1;
        for(int i=0;i<arr.size();i++){
            if(arr[i]>largest){
                largest = arr[i];
            }
        }
        return largest;
    }
    
  
};