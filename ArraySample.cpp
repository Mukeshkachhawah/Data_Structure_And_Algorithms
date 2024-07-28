// ---------------- Swap the integer array element   ----------------
#include <iostream>
using namespace std;
#include <vector>

vector<int> swapNumberInVector(vector<int> arr, int pos1, int pos4)
{
    int temp = arr[pos1];
    arr[pos1] = arr[pos4];
    arr[pos4] = temp;

    return arr;
}
int main()
{
    vector<int> arr = {
        1,
        2,
        3,
        4,
        5,
        6,
        7,
    };
    vector<int> ans = swapNumberInVector(arr, 1, 4);
    cout << " [";
    for (auto i : ans)
        cout << i << ",";
    cout << "]";
}

//************************ swap the array integer group ****************************
#include <iostream>
using namespace std;
#include <vector>
vector<vector<int>> swapGroupInVector(vector<vector<int>> &arr, int pos1, int pos2)
{
    vector<int> temp = arr[pos1];
    arr[pos1] = arr[pos2];
    arr[pos2] = temp;
    return arr;
}

int main()
{
    vector<vector<int>> arr = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}};
    cout << "Before swapping :: ";
    cout << " [ ";
    for (auto intarr : arr)
    {
        cout << "[";
        for (auto it : intarr)
        {
            cout << it << ",";
        }
        cout << "]"
             << " ";
    }
    cout << " ]"
         << "\n";

    vector<vector<int>> ans = swapGroupInVector(arr, 1, 2);
    cout << "After swapping :: ";
    cout << " [ ";
    for (auto intarr : arr)
    {
        cout << "[";
        for (auto it : intarr)
        {
            cout << it << ",";
        }
        cout << "]"
             << " ";
        // cout << " , ";
    }
    cout << " ]";
}

//************************ swap the array string group ****************************
#include <iostream>
using namespace std;
#include <vector>
vector<vector<string>> swapGroupInVector(vector<vector<string>> &arr, int pos1, int pos2)
{
    vector<string> temp = arr[pos1];
    arr[pos1] = arr[pos2];
    arr[pos2] = temp;
    return arr;
}

int main()
{
    vector<vector<string>> arr = {{"ram", "shyam", "ramesh", "mitansh"}, {"pooja", "mona", "khushi", "ranjana"}, {"laxmi", "jamna", "rekha", "amita"}};
    cout << "Before swapping :: ";
    cout << " [ ";
    for (auto intarr : arr)
    {
        cout << "[";
        for (auto it : intarr)
        {
            cout << it << ",";
        }
        cout << "]"
             << " ";
    }
    cout << " ]"
         << "\n";

    vector<vector<string>> ans = swapGroupInVector(arr, 1, 2);
    cout << "After swapping :: ";
    cout << " [ ";
    for (auto intarr : arr)
    {
        cout << "[";
        for (auto it : intarr)
        {
            cout << it << ",";
        }
        cout << "]"
             << " ";
        // cout << " , ";
    }
    cout << " ]";
}
// ---------------- Swap the string array element  ----------------
#include <iostream>
using namespace std;
#include <vector>

vector<string> swapNumberInVector(vector<string> arr, int pos1, int pos4)
{
    string temp = arr[pos1];
    arr[pos1] = arr[pos4];
    arr[pos4] = temp;

    return arr;
}
int main()
{
    vector<string> arr = {
        "Swatii", "Ranjana", "Prachi", "Bhumika"};
    vector<string> ans = swapNumberInVector(arr, 1, 3);
    cout << " [ ";
    for (auto i : ans)
        cout << i << " , ";
    cout << "]";
}

//-------------------- swap the group in group array element --------------------