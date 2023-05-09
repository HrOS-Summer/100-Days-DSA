//Move zeros to end
#include <iostream>
using namespace std;

//Time complexity for below code is O(n*n)
void moveZeroOns(int array[], int size) {
    for (int i = 0; i < size; i++) {
        if (array[i] == 0) {                     //If array[i] == 0 then
            for (int j = i + 1; j < size; j++)  //Look towards rigth of array[0] for a non-zero element if found then swap
                swap(array[i], array[j]);
        }
    }
}

//Time complexity for below code O(n)
void moveZeroOn(int arr[], int n) {
    int count = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] != 0) {
            swap(arr[i], arr[count]);
            count++;
        }
    }
}

void print(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        cout << arr[i] <<" ";
    }     
    cout<<endl;   
}

int main() {
    int arr[] = { 1, 2, 0, 9, 7, 0, 0, 0, 8, 0 };
    int n = sizeof(arr)/sizeof(arr[0]);
    moveZeroOn(arr, n);
    print(arr, n);

    return 0;
}