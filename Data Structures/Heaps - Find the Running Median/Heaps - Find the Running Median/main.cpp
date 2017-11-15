//
//  main.cpp
//  Heaps - Find the Running Median
//
//  Created by Stewart Dulaney on 11/14/17.
//  Copyright © 2017 Stewart Dulaney. All rights reserved.
//

#include <iostream>
#include <vector>

using namespace std;


int main(){
    int n;
    cin >> n;
    vector<int> a(n);
    for(int a_i = 0;a_i < n;a_i++){
        cin >> a[a_i];
    }
    return 0;
}
