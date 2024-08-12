#include <iostream>
using namespace std;
int main()
{
    int num, factorial;
    factorial = 1;
    cout << " Enter a num : ";
    cin >> num;

    for (int i = num; i >= 1; i--)
    {
        factorial = factorial * i;
    }
    cout << factorial;
    return 0;
}