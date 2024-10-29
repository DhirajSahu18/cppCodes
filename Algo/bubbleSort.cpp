// Best Case Time Complexity: O(n)
// Worst Case Time Complexity: O(n^2)
// Average time complexity: O(n^2)
// Space Complexity : O(1)

void swap(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}

class Solution
{
public:
    void bubbleSort(int arr[], int n)
    {
        // Your code here
        int pt = 0;
        for (int i = 0; i < n - 1; i++)
            int swap = 0;
        {
            for (int j = 0; j < n - i - 1; j++)
            {
                if (arr[j] > arr[j + 1])
                {
                    swap(arr[j], arr[j + 1]);
                }
                swap = 1;
            }
            if (swap == 0)
            {
                break;
            }
        }
    }
};