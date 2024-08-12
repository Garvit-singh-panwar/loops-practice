#include <iostream>
using namespace std;
int main()
{
    int num;
    cout << "Enter a number " << endl;
    cin >> num;
    for (int i = 0; i <= num; i++)
    {
        for (int j = i; j <= num; j++)
        {
            cout << " " << j << " ";
        }
        for (int j = 0; j < i; j++)
        {
            cout << " " << j << " ";
        }
        cout << endl;
    }
    return 0;
}