// 1.  Write a C++ program to find the sum of each element of an array with its previous element.
#include <bits/stdc++.h>
using namespace std;
vector<int> sumOfElementWithPreviousValue(vector<int> &arr)
{
    vector<int> result;
    for (int i = 1; i < arr.size(); i++)
    {
        int sum = arr[i] + arr[i - 1];
        result.push_back(sum);
    }
    return result;
}
int main()
{
    vector<int> arr = {1, 2, 3, 4, 5};
    vector<int> ans = sumOfElementWithPreviousValue(arr);
    for (auto it : ans)
    {
        cout << it << " ";
    }
}

// 2.Implement a function to find the difference between each element of an array and its next element.
#include <bits/stdc++.h>
using namespace std;
vector<int> diffrenceBitweenOwnAndNextElement(vector<int> &arr)
{
    vector<int> result;
    for (int i = 0; i < arr.size() - 1; i++)
    {

        result.push_back(arr[i] = arr[i] - arr[i + 1]);
    }

    return result;
}
int main()
{
    vector<int> arr = {10, 5, 20, 8};
    vector<int> ans = diffrenceBitweenOwnAndNextElement(arr);
    for (auto it : ans)
    {
        cout << it << " ";
    }
}

// 3. Write a program to calculate the product of each element of an array with its next element.
#include <bits/stdc++.h>
using namespace std;
vector<int> calculatetheProductofEachElementofanArray(vector<int> &arr)
{
    vector<int> result;
    for (int i = 0; i < arr.size() - 1; i++)
    {
        result.push_back(arr[i] = arr[i] * arr[i + 1]);
    }

    return result;
}
int main()
{
    vector<int> arr = {10, 5, 20, 8};
    vector<int> ans = calculatetheProductofEachElementofanArray(arr);
    for (auto it : ans)
    {
        cout << it << " ";
    }
}

// 4. Implement a function to replace each element of an array with the sum of its previous and next element.
#include <bits/stdc++.h>
using namespace std;
vector<int> updateNextandPreviousWithSum(vector<int> &arr)
{
    vector<int> result;
    for (int i = 0; i < arr.size(); i++)
    {
        int pre = (i > 0) ? arr[i - 1] : 0;
        int next = (i < arr.size() - 1) ? arr[i + 1] : 0;
        result.push_back(pre + next);
    }

    return result;
}
int main()
{
    vector<int> arr = {10, 5, 20, 8};
    vector<int> ans = updateNextandPreviousWithSum(arr);
    for (auto it : ans)
    {
        cout << it << " ";
    }
}

// 5. Write a program to calculate the average of each element of an array with its previous and next element.
// 6 Implement a function to find the maximum difference between each element of an array and its previous element.
