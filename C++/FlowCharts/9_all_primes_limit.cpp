/*
All primes
You are given a single positive integer, N. You need to print all prime numbers that occur in the range 1 to N (both inclusive).
*/

#include<iostream> 
using namespace std; 


// Driver function 
int main() 
{ 
   int N, flag;

   cout << "Enter Limit: "; 
   cin >> N;

   cout << "Prime numbers till limit " << N << " are:"<<endl;
   for (int i=0; i <= N; i++){
       if (i == 1 || i == 0)
            continue;
       flag = 1;

       for (int r = 2; r < i; r++){
           if (i%r == 0){
               flag = 0;
               break;
           }            
       }

       if (flag == 1){
           cout << i << endl;
       }       
   }
   
}
