//
//  main.cpp
//  Sorting - Bubble Sort
//
//  Created by Stewart Dulaney on 12/9/17.
//  Copyright © 2017 Stewart Dulaney. All rights reserved.
//

#include <iostream>
#include <vector>

using namespace std;

int bubbleSort(vector<int>& data) {
    int numberOfSwaps = 0;
    
    for(int i = 0; i < data.size(); i++) {
        for(int j = 0; j < data.size() - 1; j++) {
            if(data[j] > data[j+1]) {
                swap(data[j], data[j+1]);
                numberOfSwaps++;
            }
        }
        if(numberOfSwaps == 0) {
            break;
        }
    }
    return numberOfSwaps;
}


int main(){
    int n;
    cin >> n;
    vector<int> a(n);
    for(int a_i = 0;a_i < n;a_i++){
        cin >> a[a_i];
    }
    cout << "Array is sorted in " << bubbleSort(a) << " swaps." << endl;
    cout << "First Element: " << a[0] << endl;
    cout << "Last Element: " << a[a.size() - 1] << endl;
    return 0;
}
