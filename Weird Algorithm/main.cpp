// https://cses.fi/problemset/task/1068/
#include <iostream>
using namespace std;

int main()
{
    long long num = 0;
    cin >> num;
    cout << num << " ";
    while (num > 1)
    {
        if (num % 2 == 1)
        {
            num = num * 3 + 1;
            cout << num << " ";
        }
        else
        {
            num = num / 2;
            cout << num << " ";
        }
    }
}