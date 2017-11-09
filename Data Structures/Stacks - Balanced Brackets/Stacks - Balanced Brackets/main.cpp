//
//  main.cpp
//  Stacks - Balanced Brackets
//
//  Created by Stewart Dulaney on 11/8/17.
//  Copyright © 2017 Stewart Dulaney. All rights reserved.
//

#include <iostream>
#include <string>
#include <stack>

using namespace std;

bool is_balanced(string expression) {
    stack<char> s;
    for(int i=0; i<expression.length(); i++){
        if(expression[i] == '{')
            s.push('}');
        else if(expression[i] == '[')
            s.push(']');
        else if(expression[i] == '(')
            s.push(')');
        else {
            if(s.empty() || expression[i] != s.top())
                return false;
            s.pop();
        }
    }
    return s.empty();
}

int main(){
    int t;
    cin >> t;
    for(int a0 = 0; a0 < t; a0++){
        string expression;
        cin >> expression;
        bool answer = is_balanced(expression);
        if(answer)
            cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}

