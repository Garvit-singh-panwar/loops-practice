#include <iostream>
using namespace std;
int main()
{
    int num, digit, reverse;
    digit = 0;
    reverse = 0;
    cout << "Enter a number : ";
    cin >> num;
    while (num > 0)
    {
        digit = num%10 ;
        reverse = reverse * 10 + digit;
        num = num / 10;
    }
    cout << "Reverse of a number is : "<< reverse << endl;
    return 0;
}