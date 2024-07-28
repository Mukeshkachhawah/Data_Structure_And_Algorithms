// 1 . Basic Map Creation: Write a program to create an empty map and insert five name-age pairs into it. Print all the pairs.

// 2.Map Initialization: Initialize a std::map with some predefined values. Print these values.

// Access Elements: Given a map of country names and their populations, write a program to access and print the population of a specific country.
#include <iostream>
#include "map"
using namespace std;
string get_population(string &name, map<string, long long> &country)
{
    auto it = country.find(name);
    if (it != country.end())
    {
        return to_string(it->second);
    }
    else
    {
        return name + " Not found in given map ";
    }
}
int main()
{
    map<string, long long> country = {
        {"India", 12500000000},
        {"UK", 12500000000},
        {"Nepal", 198000},
        {"Australia", 55500000},
    };
    string name;
    cout << "Country name please : ";
    cin >> name;
    cout << "Population is : " << get_population(name, country);
}

// Check Existence: Write a function that takes a std::map and a key, and returns whether the key exists in the map.

// Remove Elements: Write a program to remove a specific key-value pair from a map. Print the map before and after removal.

// Map Size: Create a map of cities and their corresponding postal codes. Write a program to print the number of elements in the map.

// Clear Map: Create a map and add some elements to it. Write a function to clear all elements from the map.

// Iterate Map: Write a program that iterates over a map of book titles and their authors and prints each pair.

// Find Element: Write a function that takes a map and a key, and returns the value associated with that key using map.find().

// Insert with Emplace: Demonstrate how to use the emplace method to insert elements into a map.

// Map of Maps: Create a std::map where each value is another std::map. Write a program to add and print values in this nested map structure.

// Update Value: Given a map of student IDs and their grades, write a function to update the grade of a specific student.

// Key Comparison: Create a map using a custom comparator for sorting keys in descending order. Print the map.

// Multimap: Write a program to demonstrate the usage of std::multimap, where one key can have multiple values.

// Count Occurrences: Write a program to count the occurrences of each word in a given string using a std::map.

// Custom Key Type: Create a map with a custom key type (e.g., a struct). Demonstrate insertion and retrieval of elements.

// Range-Based Erase: Write a program to erase elements from a map using a range-based erase operation.

// Find Lower Bound: Given a map, demonstrate the use of the lower_bound method to find the first element not less than a given key.

// Map of Pairs: Create a map where the values are pairs of integers. Write a program to insert and print these values.

// User Input to Map: Write a program that takes user input to fill a map with names and phone numbers, then prints the map.