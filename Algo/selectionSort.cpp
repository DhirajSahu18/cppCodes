// Time Complexity: O(n^2)
// Space Complexity: O(1)

class Solution
{
public:
    int select(int arr[], int i, int n)
    {
        // code here such that selectionSort() sorts arr[]
        int min = i;

        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[min])
            {
                min = j;
            }
        }

        return min;
    }

    void selectionSort(int arr[], int n)
    {
        // code here
        for (int i = 0; i < n; i++)
        {
            int min = select(arr, i, n);

            if (min != i)
            {
                int temp = arr[i];
                arr[i] = arr[min];
                arr[min] = temp;
            }
        }
    }
};