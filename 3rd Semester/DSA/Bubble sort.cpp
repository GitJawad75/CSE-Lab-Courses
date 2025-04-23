#include <iostream>
using namespace std;

int main() {
    cout<<"Bubble Sort"<<endl;

    int num;

    cout << "Enter the number of elements: ";
    cin >> num;

    int arr[num];

    // Input array elements
    cout << "Enter " << num << " elements: ";
    for (int j = 0; j < num; j++) {
        cin >> arr[j];
    }


    for (int j = 0; j < num - 1; j++) {

        for (int k = 0; k < num - j - 1; k++) {
            if (arr[k] < arr[k + 1]) {

                int temp = arr[k];
                arr[k] = arr[k + 1];
                arr[k + 1] = temp;
            }
        }
    }

    cout << "Sorted array in descending order: ";
    for (int j = 0; j < num; j++) {
        cout << arr[j] << " ";
    }
    cout << endl;

    return 0;
}

