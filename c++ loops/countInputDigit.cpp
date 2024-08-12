//count a number of digits for a given number
#include<iostream>
using namespace std;
int main()
{
    int num , digits = 0 ; 
    cout << " Enter a num " << endl;
    cin >> num ;
    while(num > 0){  
        num = num / 10;
        digits++;
    }
    cout <<  digits << endl;
    return 0;
}