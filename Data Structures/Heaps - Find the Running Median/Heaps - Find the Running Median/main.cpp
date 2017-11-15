//
//  main.cpp
//  Heaps - Find the Running Median
//
//  Created by Stewart Dulaney on 11/14/17.
//  Copyright © 2017 Stewart Dulaney. All rights reserved.
//

#include <iostream>
#include <vector>
#include <queue>

using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> a(n);
    priority_queue<int> pqMax;
    priority_queue<int, vector<int>, greater<int> > pqMin;
    for(int a_i = 0;a_i < n;a_i++){
        cin >> a[a_i];
        addNumber(a[a_i], pqMax, pqMin);
        rebalance(pqMax, pqMin);
        cout << getMedian(pqMax, pqMin) << endl;
    }
    return 0;
}
