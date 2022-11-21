#include <bits/stdc++.h>
using namespace std;

int main(){

    long long N;
    cin >> N;

    vector<long long> v;

    for(long long i = 0; i<N; i++){
        long long num;
        cin >> num;
        v.push_back(num);
    }

    long long max = INT_MIN;

    for(long long i = 0; i<N; i++){
        if(v[i] > max){
            max = v[i];
        }
    }

    while(true){
        bool cek = true;
        for(long long i = 0; i<v.size(); i++){
            if(max % v[i]){
                cek = false;
                break;
            }
        }
        if(cek == true){
            cout << max;
            break;
        }
        max++;
    }

}
