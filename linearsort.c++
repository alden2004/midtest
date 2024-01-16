#include <iostream>
#include <vector>

void selectionSort(std::vector<int>& arr) {
    int n = arr.size();
    for (int i = 0; i < n - 1; ++i) {
        int min_index = i;
        for (int j = i + 1; j < n; ++j) {
            if (arr[j] < arr[min_index]) {
                min_index = j;
            }
        }
        // Swap arr[i] and arr[min_index]
        int temp = arr[i];
        arr[i] = arr[min_index];
        arr[min_index] = temp;
    }
}

int main() {
    std::vector<int> array = {5, 2, 9, 1, 5, 6};
    
    std::cout << "Original array: ";
    for (int num : array) {
        std::cout << num << " ";
    }
    
    selectionSort(array);

    std::cout << "\nSorted array: ";
    for (int num : array) {
        std::cout << num << " ";
    }

    return 0;
}
