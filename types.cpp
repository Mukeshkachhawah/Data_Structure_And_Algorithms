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


