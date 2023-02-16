//Finding first and last index of an element in a sorted array

#include <iostream>
#include <vector>
using namespace std;

int first_occurance(vector <int> &v, int size, int key) {
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

int last_occurance(vector <int> &v, int size, int key) {
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

pair<int, int>firstAndLastPosition (vector<int> &arr, int size, int key) {
    pair<int, int> p;
    p.first = first_occurance(arr, size, key);
    p.second = last_occurance(arr, size, key);

    return p;
}

int main()
{
    vector = {1,2,2,2,3,3,3,3,4,5};
    int index = first_occurance(arr, 10, 3);
    int lindex = last_occurance(arr, 10, 3);
    cout<<p.first<<endl;
    cout<<p.second;

    return 0;
}
