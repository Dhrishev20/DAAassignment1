#include <iostream>
using namespace std;

int binarySearchIterative(int arr[], int n, int target) {
    int low = 0, high = n - 1;
    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (arr[mid] == target) return mid;
        if (arr[mid] < target) low = mid + 1;
        else high = mid - 1;
    }
    return -1;
}

int binarySearchRecursive(int arr[], int low, int high, int target) {
    if (low > high) return -1;
    int mid = low + (high - low) / 2;
    if (arr[mid] == target) return mid;
    if (arr[mid] < target) return binarySearchRecursive(arr, mid + 1, high, target);
    return binarySearchRecursive(arr, low, mid - 1, target);
}

int main() {
    int arr[] = {2, 5, 8, 12, 16, 23, 38, 56, 72, 91};
    int n = sizeof(arr) / sizeof(arr[0]);
    int target = 23;
    cout << "Array";
    for(int i = 0; i < n; i++) cout << arr[i] << " ";
    cout << "Searching for" << target << endl;
    cout << "Iterative Index" << binarySearchIterative(arr, n, target) << endl;
    cout << "Recursive Index" << binarySearchRecursive(arr, 0, n - 1, target) << endl;

    return 0;
}