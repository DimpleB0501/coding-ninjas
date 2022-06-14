/*
Pattern 3
*/

#include <iostream>
using namespace std;  
int main()
{
   int N, j;
   cout << "Enter Limit: ";
   cin >> N;
   for (int i = 1; i <= N; i++){
       
       for (j = 1; j <= (N-i); j++){
           cout  << " ";
       }
       for (int k = j; k <= (N+i-1); k++){
           cout << '*';
       }
    cout << endl;   
   }
}