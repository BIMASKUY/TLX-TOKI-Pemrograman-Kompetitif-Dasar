#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<string> v;
    string S, Pembanding;
    cin >> S >> Pembanding;

    for(int i = 0; i < S.size(); i++){
        string Kalimat = S;
        v.push_back(Kalimat.erase(i,1));
    }

    bool test = false;

    for(int i = 0; i < v.size(); i++){
        if(v[i] == Pembanding){
            test = true;
        }
    }

    if(test == true){
        cout << "Tentu saja bisa!";
    }
    else{
        cout << "Wah, tidak bisa :(";
    }
}
