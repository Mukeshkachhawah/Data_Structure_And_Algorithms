#include <bits/stdc++.h>
using namespace std;
map<char, vector<string>> groupele(vector<string> &arr)
{
    map<char, vector<string>> mapcount;
    for (auto it : arr)
    {
        char ele = it[0];
        mapcount[ele].push_back(it);
    }
    return mapcount;
}
int main()
{
    vector<string> arr = {"ant", "apple", "hello", "hii", "mukesh", "peacock", "elephant"};
    map<char, vector<string>> maparr = groupele(arr);
    for (auto it : maparr)
    {
        cout << it.first << " ";
        for (auto ele : it.second)
        {
            cout << ele << " ";
        }
        cout << "\n";
    }
}

#include <bits/stdc++.h>
using namespace std;
map<char, vector<string>> groupele(vector<string> &arr)
{
    map<char, vector<string>> mapcount;
    for (auto it : arr)
    {
        char ele = it[0];
        mapcount[ele].push_back(it);
    }
    return mapcount;
}
int main()
{
    vector<string> arr = {"ant", "apple", "hello", "hii", "mukesh", "peacock", "elephant"};
    map<char, vector<string>> maparr = groupele(arr);
    for (auto it : maparr)
    {
        cout << it.first << " ";
        for (auto ele : it.second)
        {
            cout << ele << " ";
        }
        cout << "\n";
    }
}



// You are given a C++ program that defines a function to check if a number is odd and another function to group even and odd numbers from a vector into a map. The main function initializes a vector of integers, calls the grouping function, and prints the grouped even and odd numbers.
#include <bits/stdc++.h>
using namespace std;
bool isodd(int n)
{
    if (n % 2 == 0)
        return false;
    else
        return true;
}
map<string, vector<int>> groupevenodd(vector<int> &arr)
{
    map<string, vector<int>> mapcount;
    for (auto it : arr)
    {
        if (!isodd(it))
            mapcount["even"].push_back(it);
        else
            mapcount["odd"].push_back(it);
    }
    return mapcount;
}
// it.first    it.second
// even: [5 6 6 6 6 4 4 6 4]
int main()
{
    vector<int> arr = {1, 2, 3, 4, 5, 6, 9, 7, 9, 8, 9, 6, 6, 9};
    map<string, vector<int>> maparr = groupevenodd(arr);
    for (auto it : maparr)
    {
        cout << it.first << " ";
        for (auto ele : it.second)
        {
            cout << ele << " ";
        }
        cout << "\n";
    }
}
// ***************************************************
#include <bits/stdc++.h>
using namespace std;
bool isodd(int n)
{
    if (n % 2 == 0)
        return false;
    else
        return true;
}
vector<int> removeOdd(vector<int> &arr)
{
    vector<int> ans;
    for (auto it : arr)
    {
        if (!isodd(it))
        {
            ans.push_back(it);
        }
    }
    return ans;
}

int main()
{
    vector<int> arr{1, 2, 3, 4, 5, 6, 7, 3, 323, 23, 2, 546, 657, 6};
    vector<int> odd;
    vector<int> even;
    vector<vector<int>> res;

    for (auto it : arr)
    {

        if (it % 2 == 0)
        {
            odd.push_back(it);
        }
        else if (it % 2 == 1)
        {
            even.push_back(it);
        }
    }
    res.push_back(odd);
    res.push_back(even);
    for (auto it : res)
    {
        cout << "[";
        for (auto its : it)
        {
            // cout << " [ ";
            cout << its << " ";
            // cout << " ] ";
        }
        cout << "]";
    }
}

// ***************************************************************
