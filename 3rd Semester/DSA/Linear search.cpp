#include<iostream>
using namespace std;

int main()
{
    cout << "Linear Search" << endl;

    int arr[5];
    int j=5;
    int item, loca = -1;

    cout << "Enter 5 elements for the array: ";

    for(int i = 0; i < j; i++) {
        cin >> arr[i];
    }

    cout << "Enter the item to search: ";
    cin >> item;

    for(int i = 0; i < j; i++) {
        if(arr[i] == item) {
            loca = i;
            break;
        }
    }

    if(loca != -1) {
        cout << "Found" << endl;
        cout << "Index of the searching item: " << loca << endl;
        cout << "Position of the searching item: " << loca + 1 << endl;
    }
    else {
        cout << "Not Found" << endl;
    }
    return 0;
}
