#include <iostream>
using namespace std;

int main() {
    cout<<"Selection Sort"<<endl;

    int num;

    cout << "Enter the number of elements: ";
    cin >> num;

    int arr[num];

    cout << "Enter " << num << " elements: ";
    for (int i = 0; i < num; i++) {
        cin >> arr[i];
    }

    for (int i = 0; i < num - 1; i++) {
        int maxIndex = i;

        for (int j = i + 1; j < num; j++) {
            if (arr[j] > arr[maxIndex]) {
                maxIndex = j;
            }
        }

        if (maxIndex != i) {
            int temp = arr[i];
            arr[i] = arr[maxIndex];
            arr[maxIndex] = temp;
        }
    }

    cout << "Sorted array in descending order: ";
    for (int i = 0; i < num; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
