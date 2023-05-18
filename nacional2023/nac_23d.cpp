#include <bits/stdc++.h>
using namespace std;

signed main(){
    // h and w count how many umbrellas are at her home and at her work, respectively
    int days, h, w;

    /*/ ph and pw refers to possibility of raining going FROM home (home ---> work) 
    and going FROM work (work ----> home), respectively/*/

    char ph, pw;
    cin >> days >> h >> w;

/*/ 
she only takes an umbrella with her in cases that the destination 
doesnt have umbrellas or if the forecast displays possibility of raining

(REMEMBER TO ADD AND SUBTRACT THE NUMBER OF UMBRELLAS)
/*/
    for(int i = 0; i < days; i++){
        cin >> ph >> pw;
        if(ph == 'Y' or w == 0){
            w++;
            h--;
            cout << "Y" << " ";
            if(h == 0 or pw == 'Y'){
                cout << "Y" << "\n";
                h++;
                w--;
            }else{
                cout << "N" << "\n";
            }
        }else{
            cout << "N" << " ";
            if(h == 0 or pw == 'Y'){
                cout << "Y" << "\n";
                w--;
                h++;
            }else{
                cout << "N" << "\n";
            }
        }
    }
}