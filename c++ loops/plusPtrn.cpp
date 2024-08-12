#include<iostream>
using namespace std;
int main()
{
    int num ;
    cout  << "Enter a number ";
    cin >> num ;
    for ( int i = 0 ; i < num ; i ++)
    {
        for(int j = 0; j < num ; j ++)
        {
            if(i == num/2 || j == num/2 )
            {
                cout << "*";
            }
            else{
                cout << " " ;
            }
           
        }
         cout << endl;
    }
    return 0;
}