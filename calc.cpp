#include <bits/stdc++.h>

using namespace std;

const string error = "Entrada invalida";

int main(){
    string input;
    getline(cin, input);
    float x, y, ans;
    int pos_op;

    pos_op = input.find('+');
    if(pos_op!=input.npos){//Its and add function
        if(input.find('+', pos_op+1)==input.npos){//Checks valid input (x+y=valid / x+y+z=invalid)
            x = stof(input.substr(0, pos_op));
            y = stof(input.substr(pos_op+1));
            ans = x + y;
            cout << ans << endl;
        }
        else
            cout << error << endl;
    }

    return 0;
}