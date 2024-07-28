// write a programe to x ki power of n (x^n)
#include <iostream>
using namespace std;
int fxn(int x, int n)
{
    if (n == 0)
    {
        return 1;
    }
    int halfPower = fxn(x, n / 2);
    if (n % 2 == 0)
    {
        return halfPower * halfPower;
    }
    else
    {
        return halfPower * halfPower * x;
    }
}
int main()
{
    int x, n;
    cin >> x >> n;
    int ans = fxn(x, n);
    cout << ans;
}    

// write a programe fibonacci series
#include <iostream>
using namespace std;
int fib(int n)
{
    if (n == 0 || n == 1)
    {
        return n;
    }
    return fib(n - 1) + fib(n - 2);
}
int main()
{
    int n;
    cin >> n;
    int ans = fib(n);
    cout << ans;
}
