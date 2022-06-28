/*
Pattern:
1234554321
1234**4321
123****321
12******21
1********1

*/

#include<iostream>
#include <cmath>

using namespace std;


int main(){
    int N = 5, j, k;
    //cout << "Enter limit:";
    //cin >> N;
    for (int i = 1; i <= 5; i++){
        for (j = 1; j <= (N-i+1); j++){
            cout << j ;
        }
        for (int l = j; l<= N; l++){
            cout << "**";
        }
        for (k = (N-i+1); k >= 1; k--){
            cout << k;
        }
        cout << endl;
    }
}



