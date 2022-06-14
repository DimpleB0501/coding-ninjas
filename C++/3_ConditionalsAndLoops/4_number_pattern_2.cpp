/*
Number Pattern 2
*/

#include<iostream>

using namespace std;



int main(){
 int N;
 cout << "Enter the limit: " ;
 cin >> N;

 for (int i=1; i <= N; i++){
     //for spaces
     for (int l = 1; l <= (N-i); l++)
        cout << " ";
     //for pattern
     int k = i;
     for (int j = 1; j <= i; j++){
          cout << k;
          k++;
     }     
    cout << endl;
 }
}