//
//  main.cpp
//  Hash Tables - Ice Cream Parlor
//
//  Created by Stewart Dulaney on 12/30/17.
//  Copyright © 2017 Stewart Dulaney. All rights reserved.
//

#include <iostream>     // std::cout, std::cin
#include <vector>       // std::vector
#include <algorithm>    // std::sort, std::max, std::min, std::lower_bound
using namespace std;

int indexOf(vector<int> arr, int value, int excludeThis) {
    for(int i = 0; i < arr.size(); i++) {
        if(arr[i] == value && i != excludeThis) {
            return i;
        }
    }
    return -1;
}

int* getIndicesFromValues(vector<int> arr, int value1, int value2) {
    int index1 = indexOf(arr, value1, -1);
    int index2 = indexOf(arr, value2, index1);
    int* indices = new int[2];
    *(indices) = min(index1, index2);
    *(indices + 1) = max(index1, index2);
    return indices;
}

void solve(vector <int> arr, int money) {
    vector<int> sortedArr = arr;
    int n = sortedArr.size();
    sort(sortedArr.begin(), sortedArr.begin() + n);
    for(int i = 0; i < n; i++) {
        int complement = money - sortedArr[i];
        vector<int>::iterator lower = lower_bound(sortedArr.begin() + 1, sortedArr.end(), complement);
        if(*lower == complement) {
            int* indices = getIndicesFromValues(arr, sortedArr[i], complement);
            cout << *indices << " " << *(indices + 1) << endl;
            break;
        }
    }
}

int main() {
    int t;
    cin >> t;
    for(int a0 = 0; a0 < t; a0++){
        int money;
        cin >> money;
        int n;
        cin >> n;
        vector<int> arr(n);
        for(int arr_i = 0; arr_i < n; arr_i++){
            cin >> arr[arr_i];
        }
        solve(arr, money);
    }
    return 0;
}
