#include <iostream>

using namespace std;

int binarySearch(int array[], int size, int target) {
    int lb = 0;
    int ub = size - 1;
    int mid = lb + (ub - lb)/2;
    
    while (ub >= lb) {
        if (array[mid] == target){
            return mid;
        }
        else if(target > array[mid])
            lb = mid + 1;
        else
            ub = mid - 1;
        mid = lb + (ub - lb)/2;
    }
    return -1;
}

int main()
{
    int arr[7] = {1, 23, 34, 45, 67, 78, 98};
    int index = binarySearch(arr, 7, 67);
    cout<<"Index of "<<arr[index] <<" in the array is "<<index;

    return 0;
}