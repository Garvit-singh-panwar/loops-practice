//Find the value of digit in a given number
#include<iostream>
using namespace std;
int main()
{
    int num;
    cout << "Enter a number" << endl;
    cin >> num;
    float digit = 0;
    int sum = 0;
     while(num > 0){
        digit = num % 10;
        num = num / 10;
        sum = digit + sum;
     }
     cout << sum ;
     return 0;
}