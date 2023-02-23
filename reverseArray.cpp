#include <iostream>
using namespace std;
int swap(int &x, int &y) {
    int temp = x;
    x = y;
    y = temp;
}

void reverseArray(int arr[], int size) {
    int s = 0;
    int e = size-1;
    while (s < e) {
        swap(arr[s], arr[e]);
        s++;
        e--;
    }
}
void print(int arr[], int size) {
    cout<<"[";
    for(int i = 0; i<size-1; i++){
        cout<<arr[i]<<", ";
    }
    cout<<arr[size-1]<<"]";
    cout<<endl;
}

int main() {
    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    cout<<"Array before reversing: ";
    print(arr, 10);

    reverseArray(arr, 10);

    cout<<"Array after reversing: ";
    print(arr, 10);
    return 0;
}