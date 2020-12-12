#include <bits/stdc++.h>

using namespace std;

const string error = "Entrada invalida.";
const string sqr_type = "sqr";
const string exp_type = "exp";
const string exit_str = "0";

int main(){
    string input, op_type;
    float x, y, ans;
    int pos;

    while(true){
        getline(cin, input);
        if(input == exit_str)
            break;

        op_type = input.substr(0, 3);
        if(op_type == sqr_type){//Its an square root function
            x = stof(input.substr(4));
            cout << sqrt(x) << endl;
            continue;
        }
        
        if(op_type == exp_type){
            pos = input.find(',');
            x = stof(input.substr(4, pos));
            y = stof(input.substr(pos+1));
            cout << pow(x,y) << endl;
            continue;
        }


        pos = input.find('+');
        if(pos!=input.npos){//Its an add function
            x = stof(input.substr(0, pos));
            y = stof(input.substr(pos+1));
            ans = x + y;
            cout << ans << endl;
            continue;
        }

        pos = input.find('*');
        if(pos!=input.npos){//Its an multiply function
            x = stof(input.substr(0, pos));
            y = stof(input.substr(pos+1));
            ans = x * y;
            cout << ans << endl;
            continue;
        }

        pos = input.find('/');
        if(pos!=input.npos){//Its an divide function
            x = stof(input.substr(0, pos));
            y = stof(input.substr(pos+1));
            ans = x / y;
            cout << ans << endl;
            continue;
        }

        pos = input.find('-',1);
        if(pos!=input.npos){//Its an subtract function
            x = stof(input.substr(0, pos));
            y = stof(input.substr(pos+1));
            ans = x - y;
            cout << ans << endl;
            continue;
        }

        cout << error << endl;

    }

    

    return 0;
}