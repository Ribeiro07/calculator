#include <bits/stdc++.h>

using namespace std;

const string error = "Entrada invalida.";

int main(){
    string input;
    getline(cin, input);
    float x, y, ans;
    int pos_op;

    pos_op = input.find('+');
    if(pos_op!=input.npos){//Its an add function
        x = stof(input.substr(0, pos_op));
        y = stof(input.substr(pos_op+1));
        ans = x + y;
        cout << ans << endl;
        return 0;
    }

    pos_op = input.find('*');
    if(pos_op!=input.npos){//Its an multiply function
        x = stof(input.substr(0, pos_op));
        y = stof(input.substr(pos_op+1));
        ans = x * y;
        cout << ans << endl;
        return 0;
    }

    pos_op = input.find('-',1);
    if(pos_op!=input.npos){//Its an subtract function
        x = stof(input.substr(0, pos_op));
        y = stof(input.substr(pos_op+1));
        ans = x - y;
        cout << ans << endl;
        return 0;
    }

    

    return 0;
}