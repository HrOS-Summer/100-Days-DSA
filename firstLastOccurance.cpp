//Finding first and last index of an element in a sorted array

#include <iostream>
using namespace std;

int first_occurance(int arr[], int size, int key) {
    int s = 0; int e = size - 1;
    int mid = s + (e-s)/2;
    int ans = -1;
    
    while (s<=e) {
        if(arr[mid] == key) {
            ans = mid;
            e = mid - 1;
        }
        
        else if(key < arr[mid])
            e = mid-1;
        else
            s = mid+1;
            
        mid = s+(e-s)/2;
    }
    return ans;
}

int last_occurance(int arr[], int size, int key) {
    int s = 0; int e = size - 1;
    int mid = s + (e-s)/2;
    int ans = -1;
    
    while (s<=e) {
        if(arr[mid] == key) {
            ans = mid;
            s = mid + 1;
        }
        
        else if(key < arr[mid])
            e = mid-1;
        else
            s = mid+1;
            
        mid = s+(e-s)/2;
    }
    return ans;
}

int main()
{
    int arr[10] = {1,2,2,2,3,3,3,3,4,5};
    int index = first_occurance(arr, 10, 3);
    int lindex = last_occurance(arr, 10, 3);
    cout<<index<<endl;
    cout<<lindex;

    return 0;
}
