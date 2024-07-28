// Draw the pattern
// first
//  1
//  1 2
//  1 2 3
//  1 2 3 4
//  1 2 3 4 5

// second
// 2
// 2 3
// 2 3 4
// 2 3 4 5

// third
// 3
// 3 4
// 3 4 5

// fourth
// 4
// 4 5

// fifth
// 5

#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> arr{1, 2, 3, 4, 5};
    for (int k = 0; k < arr.size(); k++)
    {
        for (int i = k; i < arr.size(); i++)
        {
            for (int j = k; j <= i; j++)
            {
                cout << arr[j] << " ";
            }
            cout << "\n";
        }
        cout << "\n";
    }
}

// Print given pattern
//            *
//          * *
//        * * *
//      * * * *
//    * * * * *
//  * * * * * *
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (j <= n - i)
                cout << "  ";
            else
                cout << "* ";
        }
        cout << endl;
    }
}

// print given pattern
//  1
//  2 2
//  3 3 3
//  4 4 4 4
//  5 5 5 5 5
//  6 6 6 6 6 6
//  7 7 7 7 7 7 7
#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
            cout << i << " ";
        cout << endl;
    }
}

// Print the pattern
//  1
//  2 3
//  4 5 6
//  7 8 9 10
//  11 12 13 14 15
//  16 17 18 19 20 21
#include <iostream>
using namespace std;
int main()
{
    int n, count = 1;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {

            cout << count << " ";
            count++;
        }
        cout << endl;
    }
}

// print the pattern
// *          *
// **        **
// ***      ***
// ****    ****
// *****  *****
// ************
// ************
// *****  *****
// ****    ****
// ***      ***
// **        **
// *          *
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }
        int space = ((2 * n) - (2 * i));
        for (int j = 1; j <= space; j++)
        {
            cout << " ";
        }
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
    for (int i = n; i >= 1; i--)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }
        int space = ((2 * n) - (2 * i));
        for (int j = 1; j <= space; j++)
        {
            cout << " ";
        }
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}

// Draw the pattern
//  1 2 3 4 5
//  1 2 3 4
//  1 2 3
//  1 2
//  1
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    { // for(int j=1 ; j<= n-i)
        for (int j = 1; j <= n + 1 - i; j++)
        {
            cout << j << " ";
        }
        for (int j = 1; i <= j - 1; j++)
        {
            cout << " ";
        }
        cout << endl;
    }
}

// DRAW THE PATTERN
// 1
// 0 1
// 1 0 1
// 0 1 0 1
// 1 0 1 0 1
// 0 1 0 1 0 1
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            if ((i + j) % 2 == 0)
                cout << "1 ";
            else
                cout << "0 ";
        }
        cout << endl;
    }
}

// draw the pattern
//    ****
//   ****
//  ****
// ****
#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n - i; j++)
        {
            cout << " ";
        }
        for (int j = 1; j <= n; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}

// Draw the pattern
//     1
//    1 2
//   1 2 3
//  1 2 3 4
// 1 2 3 4 5
#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n - i; j++)
        {
            cout << " ";
        }
        for (int j = 1; j <= i; j++)
        {
            cout << j << " ";
        }
        for (int j = 1; j <= n - i; j++)
        {
            cout << " ";
        }
        cout << endl;
    }
}

// Draw the pattern
//      1
//     212
//    32123
//   4321234
//  543212345
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, i, j, k;
    cin >> n;
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n - i; j++)
        {
            cout << " ";
        }
        int k = i;
        for (; j <= n; j++)
        {
            cout << k--;
        }
        k = 2;
        for (; j <= n + i - 1; j++)
        {
            cout << k++;
        }
        cout << "\n";
    }
}

// draw the pattern
//           *
//          ***
//         *****
//        *******
//       *********
//      ***********
//     *************
//    ***************
//   *****************
//  *******************
//  *******************
//   *****************
//    ***************
//     *************
//      ***********
//       *********
//        *******
//         *****
//          ***
//           *
#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n - i; j++)
        {
            cout << " ";
        }
        for (int j = 1; j <= 2 * i - 1; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
    for (int i = n; i >= 1; i--)
    {
        for (int j = 1; j <= n - i; j++)
        {
            cout << " ";
        }
        for (int j = 1; j <= 2 * i - 1; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}

// Draw the pattern
//   *   *
//  * * * *
// *   *   *
#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    for (int i = 1; i <= 3; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (((i + j) % 4 == 0) || (i == 2 && j % 4 == 0))
            {
                cout << "*";
            }
            else
                cout << " ";
        }
        cout << endl;
    }
}
