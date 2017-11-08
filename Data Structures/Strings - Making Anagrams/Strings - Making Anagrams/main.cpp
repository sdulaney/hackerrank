//
//  main.cpp
//  Strings - Making Anagrams
//
//  Created by Stewart Dulaney on 11/7/17.
//  Copyright © 2017 Stewart Dulaney. All rights reserved.
//

#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int number_needed(string a, string b) {
    int count = 0;
    vector<int> freq(26, 0);
    for(int i=0; i<a.length(); i++){
        freq[a[i]-'a']++;
    }
    for(int i=0; i<b.length(); i++){
        freq[b[i]-'a']--;
    }
    for(int i=0; i<freq.size(); i++){
        count += abs(freq[i]);
    }
    return count;
}

int main(){
    string a;
    cin >> a;
    string b;
    cin >> b;
    cout << number_needed(a, b) << endl;
    return 0;
}
