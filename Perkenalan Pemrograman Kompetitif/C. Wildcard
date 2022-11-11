#include <bits/stdc++.h>
using namespace std;

int main(){

    string target; 
    cin >> target;

    int N;
    cin >> N;

    string pilihan;

    // target = 0
    if(target.size() == 1){
        for(int i = 1; i <= N; i++){
            cin >> pilihan;
            cout << pilihan << endl;
        }
        return 0;
    }

    // target > 1
    int lambang = target.find('*');
    string awal = target.substr(0, lambang);
    string akhir = target.substr(lambang+1, target.size() - lambang - 1);

    for(int i = 1; i <= N; i++){
        cin >> pilihan;

        if(pilihan.size() < target.size()-1){
            continue;
        }

        // ma*
        else if(awal.size() > 0 && akhir.size() == 0){
            string sufiks = pilihan.substr( 0, awal.size() );
            if(sufiks == awal){
                cout << pilihan << endl;
            }
        }

        // *ma
        else if(awal.size() == 0 && akhir.size() > 0){
            string prefiks = pilihan.substr( pilihan.size() - akhir.size(), akhir.size() );
            if(prefiks == akhir){
                cout << pilihan << endl;
            }
        }

        // ma*lu
        else if(awal.size() > 0 && akhir.size() > 0){
            string prefiks = pilihan.substr( pilihan.size() - akhir.size(), akhir.size() );
            string sufiks = pilihan.substr( 0, awal.size() );
            if(sufiks == awal && prefiks == akhir ){
                cout << pilihan << endl;
            }
        }
    }
}
