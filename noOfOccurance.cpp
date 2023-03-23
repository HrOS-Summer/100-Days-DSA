#include<iostream>
#include<vector>
using namespace std;

//For sorted array

int first_occurance(vector <int> &v, int size, int key) {
    int s = 0; int e = size - 1;
    int mid = s + (e-s)/2;
    int ans = -1;
    
    while (s<=e) {
        if(v[mid] == key) {
            ans = mid;
            e = mid - 1;
        }
        
        else if(key < v[mid])
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
        if(v[mid] == key) {
            ans = mid;
            s = mid + 1;
        }
        
        else if(key < v[mid])
            e = mid-1;
        else
            s = mid+1;
            
        mid = s+(e-s)/2;
    }
    return ans;
}

int noOfOccurance(vector<int> &v, int size, int key) {
	return (last_occurance(v, size, key) - first_occurance(v, size, key)) + 1;
}

int main() {
	vector<int> arr = {10, 10, 12, 15, 16, 16, 16, 16, 20, 56};
	int total = noOfOccurance(arr, 10, 16);
	cout<<"16 occured "<<total<<" times";
}