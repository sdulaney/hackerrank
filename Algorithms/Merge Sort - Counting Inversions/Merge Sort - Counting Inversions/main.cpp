//
//  main.cpp
//  Merge Sort - Counting Inversions
//
//  Created by Stewart Dulaney on 12/19/17.
//  Copyright © 2017 Stewart Dulaney. All rights reserved.
//

#include <iostream>
#include <vector>

using namespace std;

long countInversions(int arr) {
    // Complete this function
}

int main() {
    int t;
    cin >> t;
    for(int a0 = 0; a0 < t; a0++){
        int n;
        cin >> n;
        vector<int> arr(n);
        for(int arr_i = 0; arr_i < n; arr_i++){
            cin >> arr[arr_i];
        }
        long result = countInversions(arr);
        cout << result << endl;
    }
    return 0;
}
