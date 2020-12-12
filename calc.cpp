#include <bits/stdc++.h>

using namespace std;

const string error = "Entrada invalida.";
const string sqr_type = "sqr";
const string exp_type = "exp";

int main(){
    string input, op_type;
    getline(cin, input);
    float x, y, ans;
    int pos;


    op_type = input.substr(0, 3);
    if(op_type == sqr_type){//Its an square root function
        x = stof(input.substr(4));
        cout << sqrt(x) << endl;
        return 0;
    }
    
    if(op_type == exp_type){
        pos = input.find(',');
        x = stof(input.substr(4, pos));
        y = stof(input.substr(pos+1));
        cout << pow(x,y) << endl;
        return 0;
    }


    pos = input.find('+');
    if(pos!=input.npos){//Its an add function
        x = stof(input.substr(0, pos));
        y = stof(input.substr(pos+1));
        ans = x + y;
        cout << ans << endl;
        return 0;
    }

    pos = input.find('*');
    if(pos!=input.npos){//Its an multiply function
        x = stof(input.substr(0, pos));
        y = stof(input.substr(pos+1));
        ans = x * y;
        cout << ans << endl;
        return 0;
    }

    pos = input.find('/');
    if(pos!=input.npos){//Its an divide function
        x = stof(input.substr(0, pos));
        y = stof(input.substr(pos+1));
        ans = x / y;
        cout << ans << endl;
        return 0;
    }

    pos = input.find('-',1);
    if(pos!=input.npos){//Its an subtract function
        x = stof(input.substr(0, pos));
        y = stof(input.substr(pos+1));
        ans = x - y;
        cout << ans << endl;
        return 0;
    }

    

    return 0;
}