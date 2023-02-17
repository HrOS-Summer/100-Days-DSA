#include <iostream>
#include <vector>

using namespace std;
//For unsorted array

int frequency(vector<int> &v, int size, int key) {
    int ans = 0;
    for(int i = 0; i<size; i++) {
        if(v[i] == key)
            ans++;
    }
    return ans;
}

int main()
{
    vector <int> v = {1, 2, 3, 2, 8, 11, 2, 9};
    int freq = frequency(v, 8, 2);
    cout<<freq;
    return 0;
}
