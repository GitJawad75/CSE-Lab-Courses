#include<iostream>
using namespace std;

int main() {
    cout << "Binary Search" << endl;

    int j;
    cout << "Enter number of elements: ";
    cin >> j;

    int arr[j];
    cout << "Enter " << j << " sorted elements: ";
    for(int i = 0; i < j; i++) {
        cin >> arr[i];
    }

    int target, mid, flag = 0;
    cout << "Enter the element to search: ";
    cin >> target;

    int low = 0;
    int high = j - 1;

    while(low <= high) {
        mid = (low + high) / 2;

        if(arr[mid] == target) {
            flag = 1;
            break;
        }
        else if(arr[mid] < target) {
            low = mid + 1;
        }
        else {
            high = mid - 1;
        }
    }

    if(flag == 0) {
        cout << "Target element not found." << endl;
    }
    else {
        cout << "Target element found." << endl;
    }
    return 0;
}
