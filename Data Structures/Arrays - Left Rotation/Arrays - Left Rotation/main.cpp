//
//  main.cpp
//  Arrays - Left Rotation
//
//  Created by Stewart Dulaney on 11/7/17.
//  Copyright © 2017 Stewart Dulaney. All rights reserved.
//

#include <iostream>
#include <vector>

using namespace std;

vector<int> array_left_rotation(vector<int> a, int n, int k) {
    
}

int main(){
    int n;
    int k;
    cin >> n >> k;
    vector<int> a(n);
    for(int a_i = 0;a_i < n;a_i++){
        cin >> a[a_i];
    }
    vector<int> output = array_left_rotation(a, n, k);
    for(int i = 0; i < n;i++)
        cout << output[i] << " ";
    cout << endl;
    return 0;
}
