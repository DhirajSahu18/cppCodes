#include <iostream>
using namespace std;

class Solution {
public:
    // Partition function for quick sort
    int partition(int arr[], int low, int high) {
        int pivot = arr[high];  // Choosing the last element as the pivot
        int i = low - 1;         // Index of smaller element

        for (int j = low; j < high; j++) {
            // If current element is smaller than or equal to pivot
            if (arr[j] < pivot) {
                i++;
                std::swap(arr[i], arr[j]);
            }
        }
        std::swap(arr[i + 1], arr[high]);
        return i + 1;  // Returning the pivot index
    }

    // Function to perform quick sort
    void quickSort(int arr[], int low, int high) {
        if (low < high) {
            // Partition the array and get the pivot index
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
