#include <iostream>
using namespace std;
int main()
{
    int x, a, b, c;
    cin >> x;
    a = x / 100;
    b = x / 10 % 10;
    c = x % 10;
    cout << (a - 1) * 100 + b * 10 + (c + 1);
    return 0;
}