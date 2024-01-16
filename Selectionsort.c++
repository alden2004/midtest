#include <iostream>
using namespace std;

// function to swap the position of two elements
void swap(int *a, int *b) {
  int temp = *a;
  *a = *b;
  *b = temp;
}

// function to print an array
void printArray(int array[], int size) {
  for (int i = 0; i < size; i++) {
    cout << array[i] << " ";
  }
  cout << endl;
}

void selectionSort(int array[], int size, bool ascending = true) {
  for (int step = 0; step < size - 1; step++) {
    int indexToCompare = step;
    for (int i = step + 1; i < size; i++) {

      // Change the comparison condition based on the sorting order
      if ((ascending && array[i] < array[indexToCompare]) ||
          (!ascending && array[i] > array[indexToCompare]))
        indexToCompare = i;
    }

    // put the element at the correct position
    swap(&array[indexToCompare], &array[step]);
  }
}

// driver code
int main() {
  int data[] = {20, 12, 10, 15, 2};
  int size = sizeof(data) / sizeof(data[0]);

  // Sorting in ascending order
  selectionSort(data, size, true);
  cout << "Sorted array in Ascending Order:\n";
  printArray(data, size);

  // Sorting in descending order
  selectionSort(data, size, false);
  cout << "Sorted array in Descending Order:\n";
  printArray(data, size);
}
