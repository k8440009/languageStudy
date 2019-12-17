#include <iostream>
using namespace std;
int add(int &a)
{
    a += 1;
    return a;
}
int change(int &a)
{
    a *= (-1);
    return a;
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int a = 3, b = -5;
    add(a);
    cout << a << '\n'; // 4
    change(a);
    change(b);
    cout << a << ' ' << b << '\n'; // -4, 5
}