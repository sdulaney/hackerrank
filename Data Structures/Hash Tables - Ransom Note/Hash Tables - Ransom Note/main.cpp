//
//  main.cpp
//  Hash Tables - Ransom Note
//
//  Created by Stewart Dulaney on 11/7/17.
//  Copyright © 2017 Stewart Dulaney. All rights reserved.
//

#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

bool ransom_note(vector<string> magazine, vector<string> ransom) {
    unordered_map<string, int> words;
    for(int i=0; i<magazine.size(); i++){
        words[magazine[i]]++;
    }
    for(int i=0; i<ransom.size(); i++){
        if(words[ransom[i]]<=0)
            return false;
        else
            words[ransom[i]]--;
    }
    return true;
}

int main(){
    int m;
    int n;
    cin >> m >> n;
    vector<string> magazine(m);
    for(int magazine_i = 0;magazine_i < m;magazine_i++){
        cin >> magazine[magazine_i];
    }
    vector<string> ransom(n);
    for(int ransom_i = 0;ransom_i < n;ransom_i++){
        cin >> ransom[ransom_i];
    }
    if(ransom_note(magazine, ransom))
        cout << "Yes\n";
    else
        cout << "No\n";
    return 0;
}

