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
#include <iomanip>

using namespace std;

void addNumber(int num, priority_queue<int, vector<int>, less<int> >* lowers, priority_queue<int, vector<int>, greater<int> >* highers){
    if(lowers->size() ==  0 || num < lowers->top())
        lowers->push(num);
    else
        highers->push(num);
}

void rebalance(priority_queue<int, vector<int>, less<int> >* lowers, priority_queue<int, vector<int>, greater<int> >* highers){
    if(lowers->size() > highers->size()){
        if(lowers->size() - highers->size() > 1){
            highers->push(lowers->top());
            lowers->pop();
        }
    }
    else {
        if(highers->size() - lowers->size() > 1){
            lowers->push(highers->top());
            highers->pop();
        }
    }
}

double getMedian(priority_queue<int, vector<int>, less<int> >* lowers, priority_queue<int, vector<int>, greater<int> >* highers){
    if(lowers->size() == highers->size()){
        return 0.5 * (lowers->top() + highers->top());
    }
    else {
        if(lowers->size() > highers->size()){
                return 1.0 * lowers->top();
        }
        else if(highers->size() > lowers->size()){
                return 1.0 * highers->top();
        }
    }
    return 0.0;
}

int main(){
    int n;
    cin >> n;
    vector<int> a(n);
    priority_queue<int, vector<int>, less<int> > pqMax;
    priority_queue<int, vector<int>, greater<int> > pqMin;
    for(int a_i = 0;a_i < n;a_i++){
        cin >> a[a_i];
        addNumber(a[a_i], &pqMax, &pqMin);
        rebalance(&pqMax, &pqMin);
        cout << fixed << setprecision(1) << getMedian(&pqMax, &pqMin) << endl;
    }
    return 0;
}
