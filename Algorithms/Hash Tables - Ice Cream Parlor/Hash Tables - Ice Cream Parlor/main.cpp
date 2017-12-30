//
//  main.cpp
//  Hash Tables - Ice Cream Parlor
//
//  Created by Stewart Dulaney on 12/30/17.
//  Copyright © 2017 Stewart Dulaney. All rights reserved.
//

#include <iostream>     // std::cout, std::cin
#include <vector>       // std::vector
#include <algorithm>    // std::sort, std::max, std::min
using namespace std;

int indexOf(vector<int> arr, int value, int excludeThis) {
    int n = sizeof(arr) / sizeof(arr[0]);
    for(int i = 0; i < n; i++) {
        if(arr[i] == value && i != excludeThis) {
            return i;
        }
    }
    return -1;
}

int* getIndicesFromValues(vector<int> arr, int value1, int value2) {
    
}

void solve(vector <int> arr, int money) {
    // Complete this function
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
