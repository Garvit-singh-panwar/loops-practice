// find the sum of the following series S = 1 -2 + 3 - 4 ... n
#include<iostream>
using namespace std ;
int main()
{
    int sum , num;
    sum = 0;
    cout << "Enter a number " << endl;
    cin  >> num;
    for(int i = 1 ; i<=num ; i++)
    {
        if( i%2 == 0)
        {
            sum = sum - i;
        }
        else 
        {
            sum = sum + i ;
        }
    }
    cout << " value of patern is  " << sum << endl;
    return 0 ;
}