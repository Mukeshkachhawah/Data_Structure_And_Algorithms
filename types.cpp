// Q.5
#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> arr = {1, 1, 1, 2, 2, 2};
    vector<int> arr2 = {1, 1, 2, 2, 2};
    vector<int> arr3 = {1, 1, 1, 1, 2, 2, 2, 2};
    vector<int> result;
    set<int> removeDublicate;
    for (int i = 0; i < arr.size(); i++)
    {
        for (int j = 0; j < arr2.size(); j++)
        {
            for (int k = 0; k < arr3.size(); k++)
            {
                if (arr[i] == arr2[j] && arr[i] == arr3[k])
                {
                    if (removeDublicate.find(arr[i]) == removeDublicate.end())
                    {
                        result.push_back(arr[i]);
                        removeDublicate.insert(arr[i]);
                    }
                    break;
                }
            }
        }
    }
    if (result.empty())
    {
        cout << -1;
    }
    else
    {
        for (auto it : result)
        {
            cout << it << " ";
        }
    }
}

// Q.4
// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     vector<int> arr = {-4, -1, 0, 3, 10};
//     vector<int> newarr;
//     for (auto i = 0; i < arr.size(); i++)
//     {
//         newarr.push_back(arr[i] * arr[i]);
//     }
//     sort(begin(newarr), end(newarr));
//     for (auto it : newarr)
//     {
//         cout << it << " ";
//     }
// }

// Q.1
//  #include <bits/stdc++.h>
//  using namespace std;
//  int main()
//  {
//      vector<int> arr = {4, 3, 2, 7, 8, 2, 3, 1};
//      sort(arr.begin(), arr.end());
//      vector<int> ans;
//      for (int i = 1; i <= arr.size(); i++)
//          if (!binary_search(arr.begin(), arr.end(), i))
//          {
//              ans.push_back(i);
//          }
//      for (auto it : ans)
//      {
//          cout << it << " ";
//      }
//  }
