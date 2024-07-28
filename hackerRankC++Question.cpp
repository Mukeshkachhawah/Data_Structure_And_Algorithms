//---------------------------------variable size array---------------------------------
#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int numArrays, numQuaries, currentIndex = 0;
    cin >> numArrays >> numQuaries;

    vector<vector<int>> arrays(numArrays);

    for (int i = 0; i < numArrays; ++i)
    {
        int size;
        cin >> size;
        arrays[i].resize(size);
        for (int j = 0; j < size; j++)
        {
            cin >> arrays[i][j];
        }
    }
    for (int i = 0; i < numQuaries; i++)
    {
        int arrayIndex, elementIndex;
        cin >> arrayIndex >> elementIndex;
        if (arrayIndex >= 0 && arrayIndex < numArrays && elementIndex >= 0 && elementIndex < arrays[arrayIndex].size())
        {
            cout << arrays[arrayIndex][elementIndex] << endl;
        }
        else
        {
            cout << "Invalid query" << endl;
        }
    }
    return 0;
}