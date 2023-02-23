#include<iostream>
using namespace std;

bool pairSum(int arr[], int size, int target) {
    for(int i = 0; i < size-1; i++) {
        for(int j = 1; j<size; j++){
            if(arr[i] + arr[j] == target)
                return 1;
        }
    }
    return 0;
}

int main(){
    int arr[5] = {-2, -1, 0, 1, 2};
    int size = sizeof(arr)/sizeof(arr[0]);
    bool ispairSum = pairSum(arr, size, 5);
    if(ispairSum == true) {
        cout<<"Yes";
    }
    else
        cout<<"No";
    return 0;
}