//
//  main.cpp
//  Sorting - Comparator
//
//  Created by Stewart Dulaney on 12/18/17.
//  Copyright © 2017 Stewart Dulaney. All rights reserved.
//

#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

struct Player {
    string name;
    int score;
};

bool compare(Player& p1, Player& p2) {
    if(p1.score != p2.score) {
        return (p1.score > p2.score);
    }
    else {
        return (p1.name < p2.name);
    }
}

vector<Player> comparator(vector<Player> players) {
    sort(players.begin(), players.end(), compare);
    return players;
}

int main() {
    
    int n;
    cin >> n;
    vector< Player > players;
    string name;
    int score;
    for(int i = 0; i < n; i++){
        cin >> name >> score;
        Player p1;
        p1.name = name, p1.score = score;
        players.push_back(p1);
    }
    
    vector<Player > answer = comparator(players);
    for(int i = 0; i < answer.size(); i++) {
        cout << answer[i].name << " " << answer[i].score << endl;
    }
    return 0;
}
