#include<iostream>
#include<vector>
using namespace std;

int binarySearch(vector <int> &v, int size, int key) {
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