// 1. Write a C++ program to find the largest element of a given array of integers.
#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> arr{5, 3, 9, 10, 4, 55};
    int max = arr[0];
    for (int i = 1; i < arr.size(); i++)
    {
        if (max < arr[i])
        {
            max = arr[i];
        }
    }
    cout << max;

    return 0; // Return 0 indicate successful execution
}
// 2. Write a C++ program to find the largest three elements in an array.
// ..gridiness approch
#include <bits/stdc++.h>
using namespace std;
vector<int> findThreeLargestNumber(vector<int> arr)
{
    int first = INT_MIN, second = INT_MIN, third = INT_MIN;
    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] > first)
        {
            third = second;
            second = first;
            first = arr[i];
        }
        else if (arr[i] > second)
        {
            third = second;
            second = arr[i];
        }
        else if (arr[i] > third)
        {
            third = arr[i];
        }
    }
    return {first, second, third};
}
int main()
{
    vector<int> arr = {101, 2, 3, 6, 7, 9, 10, 55};
    vector<int> result = findThreeLargestNumber(arr);
    cout << "three largest element is : " << result[0] << " " << result[1] << " " << result[2];

    return 0; // Return 0 indicate successful execution
}

// 3. Write a C++ program to find the second largest element in an array of integers.
#include <iostream>
#include <climits>
#include <vector>
using namespace std;
vector<int> findThreeLargestNumber(vector<int> arr)
{
    int first = INT_MIN, second = INT_MIN;
    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] > first)
        {
            second = first;
            first = arr[i];
        }
        else if (arr[i] > second)
        {
            second = arr[i];
        }
    }
    return {second};
}
int main()
{
    int size;
    cout << "Enter the array size : ";
    cin >> size;

    vector<int> arr(size);
    for (int i = 0; i < size; i++)
    {
        cout << "Enter the array element with whitespace : ";
        cin >> arr[i];
    }
    vector<int> result = findThreeLargestNumber(arr);
    cout << "Second largest element is : " << result[0];
    return 0; // Return 0 indicate successful execution
}

// 4. Write a C++ program to find the k largest elements in a given array of integers.
#include <iostream>
using namespace std;

void findFourLargest(int arr[], int size)
{
    int max1 = 0, max2 = 0, max3 = 0, max4 = 0;

    for (int i = 0; i < size; i++)
    {
        if (arr[i] > max1)
        {
            max4 = max3;
            max3 = max2;
            max2 = max1;
            max1 = arr[i];
        }
        else if (arr[i] > max2)
        {
            max4 = max3;
            max3 = max2;
            max2 = arr[i];
        }
        else if (arr[i] > max3)
        {
            max4 = max3;
            max3 = arr[i];
        }
        else if (arr[i] > max4)
        {
            max4 = arr[i];
        }
    }

    cout << "Four largest elements: " << max1 << " " << max2 << " " << max3 << " " << max4 << endl;
}

int main()
{
    int arr[] = {4, 5, 9, 12, 9, 22, 45, 7};
    int size = sizeof(arr) / sizeof(arr[0]);

    findFourLargest(arr, size);

    return 0; // Return 0 indicate successful execution
}

// 5. Write a C++ program to find the second smallest elements in a given array of integers.
#include <iostream>
using namespace std;
int main()
{
    int size = 3;
    int arr[size];
    for (int j = 0; j < size; j++)
    {
        cout << "Enter the array index of " << j << " element :: ";
        cin >> arr[j];
    }

    int n = sizeof(arr) / sizeof(arr[0]);
    int first = arr[0], second = arr[0];
    for (int i = 0; i < n; i++)
    {
        if (arr[i] < second)
        {
            second = first;
            first = arr[i];
        }
        else if (arr[i] < second && arr[i] != first)
        {
            second = arr[i];
        }
    }
    cout << "Second Smallest number : " << second << endl;
}

#include <bits/stdc++.h>
#include <vector>
using namespace std;
int main()
{
    vector<int> arr{5, 3, 9, 10, 4, 55, 761, 7};
    int min = arr[0], secondMin = 0;
    for (int i = 1; i < arr.size(); i++)
    {
        if (arr[i] < min)
        {
            secondMin = min;
            min = arr[i];
        }
    }
    cout << secondMin;
    return 0; // Return 0 indicate successful execution
}

// 6. Write a C++ program to find all elements in an array of integers that have at least two significant elements.
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the size of array: ";
    cin >> n;
    int arr[n];
    int sizeOfArray = sizeof(arr) / sizeof(arr[0]);
    for (int i = 0; i < n; i++)
    {
        cout << "Enter the element" << i + 1 << " : ";
        cin >> arr[i];
    }

    cout << "[ ";
    for (int i = 0; i < sizeOfArray; i++)
    {
        if (arr[i] != 0)
        {
            cout << arr[i] << " ";
        }
    }
    cout << "]";

    return 0; // Return 0 indicate successful execution
}
// 7. Write a C++ program to find the most frequent element in an array of integers.
// jo element sabse jayada bar array me ayaa ho

#include <iostream>
using namespace std;
int main()
{
    int arr[] = {1, 2, 3, 4, 2, 2, 3, 1};
    int n = sizeof(arr) / sizeof(arr[0]);
    int *fre = new int[n];
    int visited = -1;

    for (int i = 0; i < n; i++)
    {
        int count = 1;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] == arr[j])
            {
                count++;
                fre[j] = visited;
            }
            if (fre[i] != visited)
            {
                fre[i] = count;
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (fre[i] != visited)
        {
            cout << "Elemenet   |   Frequency" << endl;
            cout << arr[i] << "       |       " << fre[i] << endl;
        }
    }
    return 0; // Return 0 indicate successful execution
}

// 8. Write a C++ program to find the next more powerful element of every element of a given array of integers. Ignore those elements that have no greater element.
#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> arr{4, 1, 5, 9, 12, 9, 22, 45, 7};
    cout << "Next Greater Element:" << endl;

    for (int i = 0; i < arr.size(); i++)
    {
        bool found = false;
        for (int j = i + 1; j < arr.size(); j++)
        {
            if (arr[i] < arr[j])
            {
                cout << arr[i] << " : " << arr[j] << endl;
                found = true;
                break;
            }
        }
        if (!found)
        {
            // cout << "No greater element found for arr[i], so do nothing";
        }
    }
}
// 9. Write a C++ program to sort a given unsorted array of integers, in wave form.
// Note: An array is in wave form when array[0] >= array[1] <= array[2] >= array[3] <= array[4] >= . . . .
// input : [ 3, 6, 5, 10, 7, 20 ]
// Output : [ 6, 3, 10, 5, 20, 7 ]

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
vector<int> sortingArray(vector<int> &arr)
{ // First method
    for (int i = 0; i < arr.size(); i++)
    {
        for (int j = i + 1; j < arr.size(); j++)
        {
            if (arr[i] > arr[j])
            {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    // Second method
    {
        sort(arr.begin(), arr.end());
    }
    return arr;
}
void swapFuntion(vector<int> &arr)
{
    sortingArray(arr);
    cout << "Step I - Sorting Arrays : ";
    for (auto it : arr)
    {
        cout << it << " ";
    }
    // vector<int> newArr(arr.size());
    for (int i = 0; i < arr.size(); i += 2)
    {
        swap(arr[i], arr[i + 1]);
    }
    cout << "\n";
    cout << "Step II - swap(arr[i] , arr[j]) : ";
    for (auto it : arr)
    {
        cout << it << " ";
    }
}
int main()
{
    vector<int> arr{10, 5, 6, 3, 2, 20, 100, 80};
    swapFuntion(arr);

    return 0; // Return 0 indicate successful execution
}
// 10. Write a C++ program to find the smallest element missing from a sorted array.
#include <iostream>
#include <vector>
using namespace std;
vector<int> findSmallMissing(vector<int> &arr, int startingElement)
{
    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] != startingElement + i)
        {
            return {startingElement + i};
        }
    }
    // return {startingElement + arr.size()};
}

int main()
{
    vector<int> arr = {2, 3, 1, 8, 7};
    int startingElement = arr[0];
    vector<int> smallNumber = findSmallMissing(arr, startingElement);
    for (auto it : smallNumber)
    {
        cout << "the smallest missing number is : " << it;
    }

    return 0; // Return 0 indicate successful execution
}

// 11. Write a C++ program to update every array element by multiplication of the next and previous values of a given array of integers.
#include <iostream>
#include <vector>
using namespace std;
vector<int> update_vector(vector<int> &arr)
{

    int ans, prev = arr[0], curr;
    vector<int> ansvec;
    for (int i = 0; i < arr.size(); i++)
    {
        if (i == 0)
        {
            arr[i] = prev * arr[i + 1];
            ansvec.push_back(arr[i]);
            // cout << "array of " << i << " : " << arr[0] << endl;
        }
        else if (i < arr.size() - 1)
        {
            curr = arr[i];
            arr[i] = prev * arr[i + 1];
            prev = curr;
            ansvec.push_back(arr[i]);
            // cout << "array of " << i << " : " << arr[i] << endl;
        }
        else if (i == arr.size() - 1)
        {
            arr[i] = prev * arr[i];
            ansvec.push_back(arr[i]);
            // cout << "array of " << i << " : " << arr[i] << endl;
        }
    }
    return ansvec;
}
int main()
{
    vector<int> arr = {2, 4, 3, 2, 6};
    vector<int> ans = update_vector(arr);
    for (auto it : arr)
    {
        cout << it << " ";
    }
    return 0; // Return 0 indicate successful execution
}
// 12. Write a C++ program to rearrange the elements of a given array of integers in a zig-zag pattern.
// Note: The format zig-zag array in form a < b > c < d > e < f.

// 13. Write a C++ program to separate even and odd numbers in an array of integers. Put all even numbers first, and then odd numbers.
#include <bits/stdc++.h>
using namespace std;
void findEvenOddInArray(vector<int> &arr)
{
    int temp = arr[0];
    for (int i = 0; i < arr.size(); i++)
    {
        for (int j = 0; j <= i; j++)
        {
            if (arr[j] % 2 == 1)
            {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    for (auto it : arr)
    {
        cout << it << " ";
    }
}
int main()
{
    vector<int> arr{1, 2, 3, 4, 5, 6, 7, 8, 9};
    findEvenOddInArray(arr);
    return 0; // Return 0 indicate successful execution
}
// 14. Write a C++ program to separate 0s and 1s from a given array of values 0 and 1.
#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> arr{
        1,
        1,
        0,
        1,
        0,
        0,
        1,
        1,
    };
    for (int i = 0; i < arr.size(); i++)
    {
        for (int j = 0; j <= i; j++)
        {
            if (arr[j] == 1)
            {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    for (auto it : arr)
    {
        cout << it << " ";
    }
    return 0; // Return 0 indicate successful execution
}

// 15. Write a C++ program to rearrange a given sorted array of positive integers .
// Note: In final array, first element should be maximum value, second minimum value, third second maximum value , fourth second minimum value, fifth third maximum and so on.

#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> arr{0, 1, 3, 4, 5, 6, 7, 8, 10};
    vector<int> final;
    // Using two pointers: one from the start and one from the end
    int start = 0, end = arr.size() - 1;

    // Flag to switch between max and min elements
    bool flag = true;

    while (start <= end)
    {
        if (flag)
        {
            final.push_back(arr[end--]);
        }
        else
        {
            final.push_back(arr[start++]);
        }
        flag = !flag;
    }

    // Print the final array
    for (auto it : final)
    {
        cout << it << " ";
    }
}

// 16. Write a C++ program to sort a given array of 0s, 1s and 2s. In the final array put all 0s first, then all 1s and all 2s last.
// Dutch National Flag algorithm
#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> arr{1, 2, 0, 1, 1, 1, 2, 2, 2, 0, 0, 0};
    int low = 0, mid = 0, high = arr.size() - 1;
    while (mid <= high)
    {
        switch (arr[mid])
        {
        case 0:
            swap(arr[low++], arr[mid++]);
            break;
        case 1:
            mid++;
            break;
        case 2:
            swap(arr[mid], arr[high--]);
            break;

        default:
            break;
        }
    }
    for (auto it : arr)
    {
        cout << it << " ";
    }
    return 0; // Return 0 indicate successful execution
}

// 17. Write a C++ program to sort (in descending order) an array of distinct elements according to the absolute difference of array elements and with a given value.


// 18.Write a C++ program to move all negative elements of an array of integers to the end of the array. This is done without changing the order of the positive and negative elements of the array.
#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> arr = {-1, -3, -5, -6, 1, -43, 34, 23, 0, 23};
    vector<int> result;
    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] >= 0)
        {
            result.push_back(arr[i]);
        }
    }
    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] < 0)
        {
            result.push_back(arr[i]);
        }
    }
    for (auto it : result)
    {
        cout << it << " ";
    }
    return 0; // Return 0 indicate successful execution
}
// 19. Write a C++ program to find a number that occurs an odd number of times in a given array of positive integers. In the array, all numbers occur an even number of times.
// Method 1
#include "iostream"
#include "vector"
#include "unordered_map"
using namespace std;
int findOddNumber(const vector<int> &arr)
{
    int result = 0;
    for (auto it : arr)
    {
        result ^= it;
    }
    return result;
}
int main()
{
    vector<int> arr{1, 2, 3, 2, 3, 1, 3};
    int result = findOddNumber(arr);
    cout << "The number that occurs an odd number of times is: " << result;
    return 0; // Return 0 indicate successful execution
}

// Method 2
#include <iostream> // Header file for input/output stream
#include "vector"
using namespace std; // Using the standard namespace

// Function to find the element occurring an odd number of times in an array
int getOddOccurrence(vector<int> &arr)
{
    for (int i = 0; i < arr.size(); i++)
    { // Loop through each element in the array

        int ctr = 0; // Counter to count occurrences of arr[i]

        for (int j = 0; j < arr.size(); j++) // Loop to count occurrences of arr[i] in the array
        {
            if (arr[i] == arr[j]) // If the current element matches arr[i]
                ctr++;            // Increment the counter
        }
        if (ctr % 2 != 0)  // If the counter is odd
            return arr[i]; // Return the element occurring odd times
    }
    return -1; // Return -1 if no element occurs an odd number of times
}

int main()
{
    vector<int> arr = {5, 7, 8, 8, 5, 8, 7, 7}; // Declaration and initialization of an integer array // Calculate the number of elements in the array
    cout << "Original array: ";
    for (int i = 0; i < arr.size(); i++)
        cout << arr[i] << " ";                                                      // Output each element of the original array
    cout << "\nNumber which occurs odd number of times: " << getOddOccurrence(arr); // Call function to find the element occurring odd times
    return 0;                                                                       // Return 0 to indicate successful execution
}

// 20. Write a C++ program to count the number of occurrences of a given number in a sorted array of integers.
#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;
vector<int> sortedArray(vector<int> &arr)
{
    for (int i = 0; i < arr.size(); i++)
    {
        for (int j = i + 1; j < arr.size(); j++)
        {
            if (arr[i] > arr[j])
            {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    return arr;
}

unordered_map<int, int> NumberofOccurence(vector<int> &arr)
{
    unordered_map<int, int> occurencemap;
    for (auto element : arr)
    {
        occurencemap[element]++;
    }
    return occurencemap;
}
int main()
{
    vector<int> arr{5, 6, 4, 5, 4, 2, 2, 2, 1, 1};
    cout << "Unsorted array : ";
    for (auto it : arr)
    {
        cout << it << " ";
    }
    cout << endl;
    sortedArray(arr);
    cout << "Sorted array : ";
    for (auto it : arr)
    {
        cout << it << " ";
    }
    unordered_map<int, int> ans = NumberofOccurence(arr);
    int max_occurence = 0;
    int most_fre_element;
    for (auto pair : ans)
    {
        if (pair.second > max_occurence)
        {
            max_occurence = pair.second;
            most_fre_element = pair.first;
        }
    }

    cout << endl
         << "Number " << most_fre_element << " occurs " << max_occurence << "  time in the array ." << endl;
    return 0;
}

// 21. Write a C++ program to find the two repeating elements in a given array of integers.
#include "bits/stdc++.h"
using namespace std;
void findRepeatingNumber(vector<int> &arr)
{
    for (int i = 0; i < arr.size(); i++)
    {
        for (int j = i + 1; j < arr.size(); j++)
        {
            if (arr[i] == arr[j])
            {
                cout << arr[i] << " ";
            }
        }
    }
}
int main()
{
    vector<int> arr{1, 2, 2, 3, 3, 4, 4, 6, 6, 7, 7};
    findRepeatingNumber(arr);
}
// 22. Write a C++ program to find the missing element from two given arrays of integers except one element.
#include <iostream>
#include <vector>
using namespace std;
int findMissingElementIn2Array(vector<int> &arr1, vector<int> &arr2)
{
    int xo_r = 0;
    for (int i = 0; i < arr1.size(); i++)
    {
        xo_r ^= arr1[i];
    }
    for (int i = 0; i < arr2.size(); i++)
    {
        xo_r ^= arr2[i];
    }
    return {xo_r};
}
int main()
{
    vector<int> arr1{1, 2, 3, 5};
    vector<int> arr2{1, 2, 3, 5, 7};
    int ans = findMissingElementIn2Array(arr1, arr2);
    cout << "\n First array : ";
    for (auto it : arr1)
    {
        cout << it << " ";
    }
    cout << "\n Second array : ";
    for (auto it : arr2)
    {
        cout << it << " ";
    }
    cout << "\nThe missing ingredient is : " << ans << " ";
    return 0;
}
// 23. Write a C++ program to find the element that appears once in an array of integers and every other element appears twice.
// find the unique element in given array
#include <iostream>
#include <vector>
using namespace std;
int finduniqueElement(vector<int> &arr)
{
    int count = 0, i;
    for (i = 0; i < arr.size(); i++)
    {
        for (int j = i + 1; j < arr.size(); j++)
        {
            if (arr[i] != arr[j])
                return arr[i];
        }
    }
}
int main()
{
    vector<int> arr{1, 2, 3, 4, 3, 4, 2};
    int ans = finduniqueElement(arr);
    cout << "Original Array : ";
    for (auto it : arr)
    {
        cout << it << " ";
    }
    cout << "\nUnique element : " << ans;
}

// 24. Write a C++ program to find the first repeating element in an array of integers.
// The nested loop approach works but has a time complexity of O(n*n)
#include <iostream>
#include <vector>
using namespace std;
int findFirstRepeatnumber(vector<int> &arr)
{

    for (int i = 0; i < arr.size(); i++)
    {
        for (int j = i + 1; j < arr.size(); j++)
        {
            if (arr[i] == arr[j])
            {
                return arr[i];
            }
        }
    }
    return -1;
}
int main()
{
    vector<int> arr{3, 1, 5, 1, 5, 7, 9, 7, 9};
    int ans = findFirstRepeatnumber(arr);
    if (ans != -1)
    {
        cout << "First repeat number is : ";
    }
    else
    {
        cout << "Not repeat element found : ";
    }

    cout << ans << " ";
}

// solution uses a hash map(or unordered set in C++) to track seen elements, reducing the time complexity to O(n)
#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;
int findFirstRepeatNumber(vector<int> &arr)
{
    unordered_set<int> seen;
    for (auto nums : arr)
    {
        if (seen.find(nums) != seen.end())
        {
            return nums;
        }
        seen.insert(nums);
    }
    return -1;
}
int main()
{
    vector<int> arr{3, 1, 5, 1, 5, 7, 9, 7, 9};
    int ans = findFirstRepeatNumber(arr);
}
// 25. Write a C++ program to find and print all common elements in three sorted arrays of integers.
#include <iostream>
#include <vector>

using namespace std;
vector<int> findThreeCommonNumberInArray(vector<int> &arr1, vector<int> &arr2, vector<int> &arr3)
{
    int i = 0, j = 0, k = 0;
    vector<int> finalArray;
    while (i < arr1.size() && j < arr2.size() && k < arr3.size())
    {
        if (arr1[i] == arr2[j] && arr1[i] == arr3[k])
        {
            finalArray.push_back(arr1[i]);
            i++;
            j++;
            k++;
            // arr1[i] = 20, arr2[j] = 20, arr3[k] = 20
            // i = 2, j = 3, k = 4
        }
        else if (arr1[i] < arr2[j])
        {
            i++;
        }
        else if (arr2[j] < arr3[k])
        {
            j++;
        }
        else
        {
            k++;
        }
    }
    if (finalArray.empty())
    {
        return {-1};
    }
    else
    {
        return finalArray;
    }
}
int main()
{
    vector<int> arr1{15, 20, 30, 40};
    vector<int> arr2{5, 10, 20, 0};
    vector<int> arr3{2, 9, 15, 20};
    vector<int> ans = findThreeCommonNumberInArray(arr1, arr2, arr3);
    if (ans.size() == 1 && ans[0] == -1)
    {
        cout << "No common elements found." << endl;
    }
    else
    {
        cout << "Common elements are: ";
        for (int element : ans)
        {
            cout << element << " ";
        }
        cout << endl;
    }
    return 0; // that indicate your program execute successfully;
}

// 26. Write a C++ program to find and print all distinct(unique) elements of a given array of integers.
#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> arr{4, 1, 2, 4, 5, 2, 7};
    unordered_map<int, int> freq;
    vector<int> Darray;
    for (int i = 0; i < arr.size(); i++)
    {
        freq[arr[i]]++;
    }
    for (auto it : freq)
    {
        if (it.second == 1)
        {
            Darray.push_back(it.first);
        }
    }
    cout << "Distinct elements: ";
    for (auto it : Darray)
    {
        cout << it << " ";
    }
    cout << endl;
}
// Time Complexity: O(n), where n is the number of elements in the array.
// Space Complexity: O(n), for storing the frequency map and the distinct elements array.

// 27. Write a C++ program to find the number of pairs of integers in a given array of integers whose sum is equal to a specified number.
#include "bits/stdc++.h"
using namespace std;
int main()
{
    vector<int> arr{4, 1, 2, 4, 5, 2, 7};
    unordered_map<int, int> freq;
    int count = 0;
    for (int i = 0; i < arr.size(); i++)
    {
        freq[arr[i]]++;
    }
    cout << "Pair of given element their value and repeatation : " << endl;
    for (auto it : freq)
    {
        cout << it.first << " : " << it.second << "\t";
    }
    cout << endl;
    cout << "Pair of that sum is equal to 6 :  " << endl;
    for (auto it : freq)
    {
        if (it.first + it.second == 6)
        {
            count++;
            cout << it.first << " + " << it.second << " = " << 6 << " , ";
        }
    }

    cout << endl
         << "Number of pair : " << count;
}

// 28. Write a C++ program to arrange the numbers in a given array in a way that the sum of some numbers equals the largest number in the array.
#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> arr{3, 5, 22, 10, 1, 3};
    int max = arr[0];
    int sum = 0, i;
    for (i = 0; i < arr.size(); i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
        sum += arr[i];
    }
    cout << "Largest number is : " << max << endl;
    if (max * arr.size() == sum)
    {
        cout << "Sum of all numbers is : " << sum << endl;
    }
    else
    {
        // Highlight the sum of all numbers except the largest number
        cout << "Sum of all numbers except largest number is : " << sum - max << endl;
    }
}

// 29. Write a C++ program to find the second lowest and highest numbers in a given array.
#include <bits/stdc++.h>
#include <climits>
using namespace std;
int main()
{
    vector<int> arr{10, 55, 33, 77, 88};
    int first = INT_MIN, second = INT_MIN;
    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] > first)
        {
            second = first;
            first = arr[i];
        }
        else if (arr[i] > second && arr[i] != first)
        {
            second = arr[i];
        }
    }
    cout << "second largest number : " << second << endl;
    int first1 = INT_MAX, second1 = INT_MAX;
    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] < first1)
        {
            second1 = first1;
            first1 = arr[i];
        }
        else if (arr[i] < second1 && arr[i] != first)
        {
            second1 = arr[i];
        }
    }
    cout << "second smallest number : " << second1;
}
// 30. Write a C++ program to find the third largest string in a given array of strings.
#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<string> arr{"Barbie", "Justine", "Ragav", "charlie"};

    int max = arr[0].length();
    int first = INT_MIN, second = INT_MIN, third = INT_MIN;
    for (int i = 0; i < arr.size(); i++)
    {
        int len = arr[i].length();
        if (len > first)
        {
            third = second;
            second = first;
            first = len;
        }
        else if (len > second && len != first)
        {
            third = second;
            second = arr[i].length();
        }
        else if (len > third && len != second && len != first)
        {
            third = arr[i].length();
        }
    }
    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i].length() == third)
        {
            cout << "The third largest string is: " << arr[i] << " (" << third << " characters)" << endl;
            break;
        }
    }

    return 0;
}