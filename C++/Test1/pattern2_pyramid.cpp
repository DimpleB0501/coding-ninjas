/*
Pyramid Number Pattern:
Pattern for N = 4
   1
  212
 32123
4321234
Input format : N (Total no. of rows)
Output format : Pattern in N lines

Sample Input :
5
Sample Output :
        1
       212
      32123
     4321234
    543212345
*/

#include<iostream>

using namespace std;


int main(){
    int N, j;
    cin >> N;
    for (int i=1; i <= N; i++){
        for (j = 1; j <= (N-i); j++){
            cout << " ";// Adjusting space
        }
        //cout << j;
        for (int k = (N-j+1); k >=1; k--){
            cout << k;
        }
        for (int l = 2; l <= (N-j+1); l++){
            cout << l;
        }
        cout << endl;
    }
}



