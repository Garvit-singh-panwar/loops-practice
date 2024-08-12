#include<iostream>
using namespace std;
int main()
{
 int num ;
 cout << " Enter a number" << endl;
 cin >> num ;
 for(int i =1 ; i <=num ; i++)
   {
    for(int j = 1 ; j <= num - i ; j++ ){
        cout << " ";
    }
    for(int k = 0 ; k < 2*i-1 ; k++){
        cout << (char)('A'+k);
    }
    cout <<endl;
   }
   for(int i = num-1; i >= 1 ; i-- ){
        for(int j = num-1 ;  j >= i; j--){
            cout << " ";
        }
        for (int k = 0 ; k < 2*i-1 ; k++){
        cout << (char)('A'+k);
        }
        cout << endl;
   }
   return 0 ;
}
