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

long merge(vector<int> &arr, vector<int> &temp, int leftStart, int rightEnd) {
    int leftEnd = (rightEnd + leftStart) / 2;
    int rightStart = leftEnd + 1;
    long count = 0;
    int left = leftStart;
    int right = rightStart;
    int index = 0;
    while(left <= leftEnd && right <= rightEnd) {
        if(arr[left] <= arr[right]) {
            temp[index] = arr[left];
            left++;
        }
        else {
            temp[index] = arr[right];
            right++;
            count += leftEnd - left + 1;
        }
        index++;
    }
    while(left <= leftEnd) {
        temp[index] = arr[left];
        left++;
        index++;
    }
    while(right <= rightEnd) {
        temp[index] = arr[right];
        right++;
        index++;
    }
    index = 0;
    for(int i = leftStart; i <= rightEnd; i++) {
        arr[i] = temp[index];
        index++;
    }
    return count;
}

long mergeSort(vector<int> &arr, vector<int> &temp, int leftStart, int rightEnd) {
    if(leftStart >= rightEnd) {
        return 0;
    }
    int middle = (leftStart + rightEnd) / 2;
    long count = 0;
    count += mergeSort(arr, temp, leftStart, middle);
    count += mergeSort(arr, temp, middle + 1, rightEnd);
    count += merge(arr, temp, leftStart, rightEnd);
    return count;
}

long countInversions(vector<int> &arr) {
    vector<int> aux = arr;
    return mergeSort(arr, aux, 0, arr.size() - 1);
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
