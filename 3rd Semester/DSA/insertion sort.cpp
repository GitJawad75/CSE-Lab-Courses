#include <iostream>
using namespace std;

void printArray(int array[], int size) {
  for (int i = 0; i < size; i++) {
    cout << array[i] << " ";
  }
  cout << endl;
}

void insertionSort(int array[], int size) {
  for (int i = 1; i < size; i++) {
    int key = array[i];
    int j = i - 1;

    while (j >= 0 && key < array[j]) {
      array[j + 1] = array[j];
      --j;
    }
    array[j + 1] = key;
  }
}

int main() {
    cout<<"Insertion Sort"<<endl;

  int size;

  cout << "Enter the number of elements: ";
  cin >> size;

  int* data = new int[size];

  cout << "Enter " << size << " elements: ";
  for (int k = 0; k < size; k++) {
    cin >> data[k];
  }

  insertionSort(data, size);

  cout << "Sorted array in ascending order:\n";
  printArray(data, size);

  return 0;
}
