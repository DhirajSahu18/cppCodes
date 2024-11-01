#include <iostream>
using namespace std;

class Solution {
public:
    // Partition function using the first element as the pivot
    int partition(int arr[], int low, int high) {
        int pivot = arr[low];  // Choosing the first element as the pivot
        int i = low + 1;
        int j = high;

        while (i <= j) {
            // Find an element larger than the pivot from the left side
            while (i <= j && arr[i] <= pivot) {
                i++;
            }
            // Find an element smaller than the pivot from the right side
            while (i <= j && arr[j] > pivot) {
                j--;
            }
            // Swap elements at i and j if they are out of place
            if (i < j) {
                std::swap(arr[i], arr[j]);
            }
        }
        // Place pivot in its correct position
        std::swap(arr[low], arr[j]);
        return j;  // Return the index of the pivot
    }

    // QuickSort function
    void quickSort(int arr[], int low, int high) {
        if (low < high) {
            // Partition the array around the first element pivot
            int pi = partition(arr, low, high);

            // Recursively sort elements before and after partition
            quickSort(arr, low, pi - 1);
            quickSort(arr, pi + 1, high);
        }
    }
};

int main() {
    Solution sol;
    int arr[] = {10, 7, 8, 9, 1, 5};
    int n = sizeof(arr) / sizeof(arr[0]);

    sol.quickSort(arr, 0, n - 1);

    std::cout << "Sorted array: ";
    for (int i = 0; i < n; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}
