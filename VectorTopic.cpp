

// All the slt library pre defile funtion
#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> arr{1, 2, 3, 4, 5};
    vector<int>::iterator it1 = arr.begin();
    it1++;
    cout << *(it1) << " ";

    vector<int>::iterator it2 = arr.end();
    it2--;
    cout << *(it2) << " ";

    vector<int>::reverse_iterator it3 = arr.rend();
    it3--;
    cout << *(it3) << " ";

    vector<int>::reverse_iterator it4 = arr.rbegin();
    it4++;
    cout << "rbegin() : " << *(it4) << " ";

    cout << " 0 th index : " << arr[0] << " " << arr.at(0);

    cout << " back() : " << arr.back() << "\n";

    for (vector<int>::iterator it = arr.begin(); it != arr.end(); it++)
    {
        cout << *it << " ";
    }
    cout << "\n";

    // erage
    arr.erase(arr.begin());
    arr.erase(arr.begin() + 2, arr.begin() + 4);
    for (auto it : arr)
    {
        cout << it << " ";
    }
    cout << " \n";
    list<int> ls;
    ls.push_back(2);
    ls.emplace_back(4);
    ls.push_front(1);
    ls.emplace_front(3);
    for (auto it : ls)
    {
        cout << it << " ";
    }
    cout << endl;
    set<int> st;
    st.insert(1);
    st.emplace(2);
    st.insert(5);
    st.insert(0);
    for (auto it : st)
    {
        cout << it << " ";
    }
    cout << " \n";
    auto it = st.find(2);
    if (it != st.end())
    {
        std::cout << "Element found: " << *it << std::endl;
    }
    else
    {
        std::cout << "Element not found" << std::endl;
    }
    int count = st.count(2); // Count the occurrences of the element '3'

    std::cout << "Count of 3 in the set: " << count << std::endl;
    cout << "map : " << endl;
    map<int, int> mpp1;
    mpp1[1] = 3;
    map<int, pair<int, int>> mpp2;
    mpp2.emplace(3, make_pair(3, 4));
    map<pair<int, int>, int> mpp3;
    mpp3.insert({{2, 3}, 3});

    for (auto it : mpp1)
    {
        cout << it.first << " : " << it.second << endl;
    }

    for (auto it : mpp2)
    {
        cout << it.first << " : (" << it.second.first << " , " << it.second.second << ")" << endl;
    }
    for (auto it : mpp3)
    {
        cout << "(" << it.first.first << " , " << it.first.second << ") : " << it.second << endl;
    }
    cout << "sort : ";
    int app[] = {1, 2, 3, 4, 5, 2, 232, 98};
    vector<int> ap{1, 9, 5, 10, 33, 44};
    sort(ap.begin(), ap.end());

    for (auto it : ap)
    {
        cout << it << " ";
    }
    cout << "\n";
    sort(app + 1, app + 8);
    sort(app, app + 8, greater<int>());
    for (int i = 0; i < 8; ++i)
    {
        cout << app[i] << " ";
    }
    cout << "\nmax : ";
    auto max = max_element(app, app + 8);
    cout << *max;

    cout << "\nstring : " << endl;
    string name = "man";
    do
    {
        cout << name << endl;

    } while (next_permutation(name.begin(), name.end()));
}