// 70 : you have a climbing a staircase . it take n step to reach the top
// each time can either climb 1 or 2 stap . in how many distinct way can you climb to the top?
// ans :
#include <iostream>
using namespace std;
int findEachStepForEachNumber(int n)
{
    if (n == 1 || n == 2 || n == 3)
    {
        return n;
    }
    // 1-1 ,  2-2  , 3-3 , 4-5 , 5-8 , 6-13
    // 0 1 2 3 5 8 13 21 34 55 89
    int prev2 = 2, prev3 = 3, current;
    for (int i = 4; i <= n; i++)
    {
        current = prev2 + prev3;
        prev2 = prev3;
        prev3 = current;
    }
    return current;
}
int main()
{
    int n = 10;
    cout << findEachStepForEachNumber(n) << " ";
}
