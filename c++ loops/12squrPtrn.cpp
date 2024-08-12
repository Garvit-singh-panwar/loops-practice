#include<iostream>
using namespace std;
 int main()
 {
    int row,column ;
    cout << "Enter number of row " << endl;
    cin >> row;
    cout << "Enter number of column " << endl ;
    cin >> column ;
    for(int i = 0; i < row ; i++)
    {
        for(int j = 0; j<column ; j++ )
        {
            if((i+j)%2 == 0)
            {
                cout << " 1 ";
            }
            else
            {
                cout << " 2 ";
            }
        }
        cout << endl;
    }
    return 0 ;
 }