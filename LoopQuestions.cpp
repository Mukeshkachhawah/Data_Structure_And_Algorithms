// 1. Write a program to print the first 10 even numbers.
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter n number : ";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        if (i % 2 == 0)
        {
            cout << "The even number is : " << i << endl;
        }
    }
}

// 2 Create a program to print the multiplication table of a given number.
#include <iostream>
using namespace std;
int main()
{
    int n, num;
    cout << "Value of num :";
    cin >> num;
    for (int i = 1; i <= 10; i++)
    {
        int sum = i * num;
        cout << "Table of " << num << " is :";
        cout << sum << endl;
    }
}

// 3 Write a program to calculate the factorial of a given number.
#include <iostream>
using namespace std;
int main()
{
    int n, factorials = 1;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        factorials *= i;
    }
    cout << "Factorials of " << n << " is : " << factorials << endl;
    return 0;
}

// 4. Create a program to find whether a given number is prime or not.
#include <iostream>
using namespace std;

bool isPrime(int num)
{
    if (num <= 1)
        return false;

    for (int i = 2; i < num; i++)
    {
        if (num % i == 0)
        {
            return false;
        }
    }

    return true;
}

int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;

    if (isPrime(n))
    {
        cout << n << " is a prime number." << endl;
    }
    else
    {
        cout << n << " is not a prime number." << endl;
    }

    return 0;
}

// 5. Write a program to find the sum of digits of a given number.

#include <iostream>
using namespace std;
int main()
{
    int n, sum = 0, rem;
    cout << "n is : ";
    cin >> n;
    while (n > 0)
    {
        rem = n % 10;
        sum += rem;
        n = n / 10;
    }
    cout << sum;
}

// 6 Create a program to print the Fibonacci series up to a certain limit.
#include <iostream>
using namespace std;
int main()
{
    int a = 0,
        b = 1;
    for (int i = 0; i <= 10; i++)
    {
        int c = a + b;
        a = b;
        b = c;
        cout << c << "\t";
    }
    return 0;
}

// 7.  Write a program to find the reverse of a given number.
#include <iostream>
using namespace std;
int reverseNumber(int n)
{
    int reminder, ques, reverse = 0;
    while (n != 0)
    {

        reminder = n % 10;
        reverse = reverse * 10 + reminder;
        n = n / 10;
    }
    return reverse;
}
int main()
{
    int n, reminder;
    cout << "Enter the number ";
    cin >> n;
    reverseNumber(n);
    if (n != 0)
    {
        cout << "Reverse number is : " << reverseNumber(n);
    }
    else
        cout << "We cannot reverse number" << endl;

    return 0;
}

// 8 Create a program to find the sum of all natural numbers up to a given limit.
#include <iostream>
using namespace std;
int sumOfNaturalNumbers(int n1, int n2)
{
    int result = 0;
    for (int i = n1; i <= n2; i++)
    {
        result = i + result;
    }
    return result;
}
int main()
{
    int n1, n2, result = 0;
    cout << "n1 is : ";
    cin >> n1;
    cout << "n2 is : ";
    cin >> n2;
    int finalResu = sumOfNaturalNumbers(n1, n2);
    cout << "Sum of all natural numbers is : " << finalResu;
}

// 9 Write a program to find the GCD (Greatest Common Divisor) of two given numbers.
// Euclidean Algorithm (Method 1)
#include <iostream>
using namespace std;
int findGretestHCF(int a, int b)
{
    int temp;
    while (b != 0)
    {
        temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}
int main()
{
    int a, b;
    cout << "a is : ";
    cin >> a;
    cout << "b is : ";
    cin >> b;
    int final = findGretestHCF(a, b);
    cout << "gretest number is hcf :: " << final;
}

// Euclidean Algorithm (Method 2)
#include <iostream>
using namespace std;
int findGretestHCF(int a, int b)
{
    int temp;
    while (b == 0)
    {
        return a;
    }
    return findGretestHCF(b, a % b);
}
int main()
{
    int a, b;
    cout << "a is : ";
    cin >> a;
    cout << "b is : ";
    cin >> b;

    cout << "GCD of " << a << " and : " << b << " is : " << findGretestHCF(a, b);
}

// 10Create a program to find the LCM (Least Common Multiple) of two given

#include <iostream>
using namespace std;
int findGretestHCF(int a, int b)
{

    while (b == 0)
    {
        return a;
    }
    return findGretestHCF(b, a % b);
}
int lcm(int a, int b)
{
    return (a * b) / findGretestHCF(a, b);
}
int main()
{
    int a, b;
    cout << "a is : ";
    cin >> a;
    cout << "b is : ";
    cin >> b;

    cout << "GCD of " << a << " and : " << b << " is : "
         << "Lcm is : " << lcm(a, b);
}

// 12 Create a program to print all Armstrong numbers between two given numbers

#include "bits/stdc++.h"
using namespace std;
int main()
{
    int arm, n, n1, n2, rem, i;
    cout << "Enter two with white space number :  ";
    cin >> n1 >> n2;
    for (i = n1; i <= n2; i++)
    {
        n = i;
        arm = 0;
        while (n != 0)
        {
            rem = n % 10;
            arm = arm + (rem * rem * rem);
            n = n / 10;
        }

        if (arm == i)
        {
            cout << i << "\t";
        }
    }
    cout << "\n";
    return 0;
}

// 13 Write a program to check whether a given number is a palindrome or not.
#include <iostream>
using namespace std;
int palimdrone(int n)
{
    int rem, reverse = 0;
    while (n != 0)
    {
        rem = n % 10;
        reverse = reverse * 10 + rem;
        n = n / 10;
    }
    return reverse;
}
int main()
{
    int n;
    cout << "n is : ";
    cin >> n;
    int nn = n;
    int result = palimdrone(n);
    if (n == result)
    {
        cout << "Palimdrome";
    }
    else
        cout << "Not palimdrome";

    return 0;
}

// 14. Create a program to print all palindrome numbers between two given numbers
#include <iostream>
using namespace std;
bool palindrone(int n)
{
    int rem, original;
    original = n;
    int reverse = 0;
    while (n != 0)
    {
        rem = n % 10;
        reverse = reverse * 10 + rem;
        n = n / 10;
    }
    return original == reverse;
}
void palimdromeInRange(int s, int e)
{
    for (int i = s; i <= e; i++)
    {
        if (palindrone(i))
        {
            cout << i << " ";
        }
    }
}

int main()
{
    int s, e;
    cin >> s >> e;
    palimdromeInRange(s, e);
    return 0;
}

// 15.Write a program to count the number of digits in a given number

#include <iostream>
using namespace std;
int main()
{
    int n, rem, count = 0;
    cout << "N is : ";
    cin >> n;
    while (n > 0)

    {
        rem = n % 10;
        n = n / 10;
        count++;
    }
    cout << "count of given number : " << count;
}

// 16. Create a program to find the sum of all prime numbers between two given
// numbers
#include <iostream>
using namespace std;
bool isPrime(int num)
{
    if (num <= 1)
        return false;

    for (int i = 2; i < num; i++)
    {
        if (num % i == 0)
        {
            return false;
        }
    }

    return true;
}

int main()
{
    int i, first, last, final;
    cin >> first >> last;
    final = 0;
    for (i = first; i <= last; i++)
    {
        if (isPrime(i))
        {
            final = final + i;
            cout << i << " "
                 << "\t";
        }
    }
    cout << endl;
    cout << "Sum of prime numbers between " << first << " and " << last << " is: " << final << endl;

    return 0;
}

// 17. Write a program to find the reverse of a given string.
#include <iostream>
using namespace std;
string reverseString(string str)
{
    int strLenght = str.length() - 1;
    string emptyString = "";
    for (int i = strLenght; i >= 0; i--)
    {
        emptyString += str[i];
    }
    return emptyString;
}
int main()
{
    string str, finalString;
    cout << "Enter a string :";
    cin >> str;
    finalString = reverseString(str);
    cout << finalString;
}

// 18. Create a program to print all prime numbers up to a given limit
#include <iostream>
using namespace std;
bool isPrime(int num)
{
    if (num <= 1)
        return false;

    for (int i = 2; i < num; i++)
    {
        if (num % i == 0)
        {
            return false;
        }
    }

    return true;
}

int main()
{
    int i, last, final;
    cin >> last;
    for (i = 1; i <= last; i++)
    {
        if (isPrime(i))
        {

            cout << i << " ";
        }
    }

    return 0;
}
// 19 Write a program to find the factorial of each digit of a given number and add ?
#include <iostream>
using namespace std;
int main()
{
    int n, digit, sum = 0;
    cin >> n;
    while (n > 0)
    {
        int fac = 1;
        digit = n % 10;
        n = n / 10;

        for (int i = digit; i >= 1; i--)
        {

            fac = fac * i;
        }
        sum = sum + fac;
    }
    cout << sum << " ";
}

// 20 Create a program to print the Pascal's triangle up to a certain number of
// rows.
// 21. Write a program to print the first N terms of the series: 1, 4, 9, 16, 25, ...
#include <iostream>
using namespace std;
int findsquare(int n)
{
    int square;
    for (int i = 1; i <= n; i++)
    {
        square = i * i;
        cout << square << " , ";
    }
}
int main()
{
    int n, square;
    cin >> n;
    findsquare(n);
    return 0;
}

// 22 Create a program to find the sum of squares of all even numbers between two given
#include <iostream>
using namespace std;
int sumOfAllEvenNumberRootValue(int n1, int n2, int sum)
{
    int square;
    for (int i = n1; i <= n2; i++)
    {
        if (i % 2 == 0)
        {
            square = i * i;
            sum += square;
        }
    }
    return sum;
}

int main()
{
    int n1, n2, summ, square, sum = 0;
    cout << "Enter n1 and n2 : ";
    cin >> n1 >> n2;
    summ = sumOfAllEvenNumberRootValue(n1, n2, sum);
    cout << "\nsum of squares of all even numbers " << n1 << " and "
         << n2 << " : ";
    cout << summ << " ";
    return 0;
}

// 23 Write a program to find the factorial of a given number using recursion.
#include <iostream>
using namespace std;
int factorial(int n)
{
    if (n == 0)
    {
        return 1;
    }

    return n * factorial(n - 1);
}
int main()
{
    int n;
    cin >> n;
    int value = factorial(n);
    cout << value;
    return 0;
}

// 24 Create a program to generate a pattern like a right-angled triangle using '*' character
#include <iostream>
using namespace std;
int RightAngleTriangle(int n)
{
    int count = 0;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << "*"
                 << " ";
            count += 2;
        }
        cout << "\n";
    }
    return count;
}
int main()
{
    int n;
    cin >> n;
    RightAngleTriangle(n);
}

// 25 Write a program to calculate the sum of the series : 1 + 1 / 2 + 1 / 3 + 1 / 4 + ... + 1 / N.
#include <iostream>
using namespace std;
int main()
{
    int n;
    float sum = 0.0f;
    cout << "Enter the number of terms: ";
    cin >> n;
    for (float i = 1; i <= n; i++)
    {
        sum += (1.0f / i);
        cout << sum << "   ";
    }
    cout << "\n";
    cout << "The sum of the series is:  " << sum;
    return 0;
}

// 26 Create a program to find the sum of the digits of a number until it becomes a single - digit number
#include <iostream>
using namespace std;
int main()
{
    int n, rem, sum = 0, num;
    cin >> n;

    while (n > 9)
    {
        sum = 0;
        while (n != 0)
        {
            sum += n % 10;
            n = n / 10;
        }
        num = sum;
    }
    cout << "Sum of digits until single-digit: " << num << endl;
    return 0;
}

// 27  Write a program to check whether a given number is a perfect number or not .
#include <bits/stdc++.h>
using namespace std;
int perfactNumbers(int n)
{
    int sum = 0;
    for (int i = 1; i <= n - 1; i++)
    {
        if (n % i == 0)
        {
            cout << i << " ";
            sum += i;
        }
    }
    cout << endl;
    return sum;
}
int main()
{
    int n, final;
    cout << "N is : ";
    cin >> n;
    final = perfactNumbers(n);
    cout << "Sum is : " << final << endl;
    if (n == final)
    {
        cout << "Perfact Number ";
    }
    else

        cout << "It cannot Perfact Number ";
}

// 28. Create a program to find the area of a circle given its radius.
#include <bits/stdc++.h>
using namespace std;
float AreaFind(float r)
{

    float area = (3.14 * (r * r));

    return area;
}
int main()
{
    float r;
    cout << "Radius :: ";
    cin >> r;
    float final = AreaFind(r);
    cout << "Area of : " << final;
    return 0;
}

// 29.// Write a program to check whether a given year is a leap year or not .
#include <iostream>
using namespace std;
int checkGivenNumberleapYear(int a)
{
    for (int i = 1; i <= a; i++)
    {
        if (i % 4 == 0 || (i % 400 == 0 && i % 100 != 0))
        {
            return i;
        }
    }
    return 0;
}
int main()
{
    int a;
    cout << "A is : ";
    cin >> a;
    auto ans = checkGivenNumberleapYear(a);
    if (ans != 0)
    {
        cout << "Given number is leap year";
    }
    else
    {
        cout << "Not leap year";
    }
}

// 30.Create a program to find the roots of a quadratic equation.
#include "iostream"
#include <cmath>
using namespace std;

// Function to calculate roots and return the discriminant
float square_root(float a, float b, float c, float &root1, float &root2)
{
    float discriminant = (b * b) - (4 * a * c);

    if (discriminant > 0)
    {
        root1 = (-b + sqrt(discriminant)) / (2 * a);
        root2 = (-b - sqrt(discriminant)) / (2 * a);
    }
    else if (discriminant == 0)
    {
        root1 = root2 = -b / (2 * a);
    }

    return discriminant;
}

int main()
{
    float a, b, c, discriminant, root1, root2;

    cout << "Enter the coefficients of the quadratic equation (ax^2 + bx + c = 0)\n";
    cout << "a: ";
    cin >> a;
    cout << "b: ";
    cin >> b;
    cout << "c: ";
    cin >> c;

    discriminant = square_root(a, b, c, root1, root2);

    if (discriminant > 0)
    {
        cout << "Roots are real and different " << root1 << ", " << root2 << endl;
    }
    else if (discriminant == 0)
    {
        cout << "Roots are real and equal " << root1 << endl;
    }
    else
    {
        cout << "No Real Roots" << endl;
    }

    return 0;
}

// 31. Write a program to print all ASCII characters with their corresponding integer values.
#include <iostream>
using namespace std;
void findAsciiKeys()
{
    cout << "ASCII Characters with their Integer Values:" << endl;
    for (int i = 0; i <= 128; ++i)
    {
        cout << static_cast<char>(i) << " ";
    }
}
int main()
{
    findAsciiKeys();
    return 0;
}

// 32 Create a program to calculate the power of a given number using recursion
#include <bits/stdc++.h>
using namespace std;
long long findPowerOfGivenNumber(int num, int poww)
{
    long long result = 1;
    for (int i = 1; i <= poww; i++)
    {
        result = result * num;
    }
    return result;
}
int main()
{
    int num, poww;
    cout << "Enter the num , poww (num^poww) : ";
    cin >> num >> poww;
    auto ans = findPowerOfGivenNumber(num, poww);
    cout << num << " to the power " << poww << " is : " << ans << endl;
}

// 33. Write a program to find the factorial of a large number using big integer
#include <iostream>
using namespace std;
long long factorials(long long n)
{

    if (n == 0)
    {
        return 1;
    }
    return n * factorials(n - 1);
}
int main()
{
    long long n;
    cout << "Enter the number : ";
    cin >> n;
    long long ans = factorials(n);
    cout << n << " to Factorials is : " << ans;
}

// 34 Create a program to find the sum of the series : 1 + x ^ 2 / 2 !+x ^ 3 / 3 !+... + x ^ n / n !.
#include <bits/stdc++.h>
using namespace std;
long long factorials(long long n)
{

    if (n == 0)
    {
        return 1;
    }
    return n * factorials(n - 1);
}
double sumOfSeries(int n, int x)
{
    double sum = 1;
    for (int i = 2; i <= n; i++)
    {
        double term = (pow(x, i) / factorials(i));
        sum += term;
    }
    return sum;
}
int main()
{
    int n, x;
    cout << "Enter the x and n : ";
    cin >> x >> n;
    double result = sumOfSeries(n, x);
    cout << "Sum of the series up to " << n << " term is : " << result;
}

// 35 find the sum of the series: 1/1! - 2/2! + 3/3! - 4/4! + ... + N/N!.
#include <iostream>
using namespace std;
long long factorials(long long n)
{

    if (n == 0)
    {
        return 1;
    }
    return n * factorials(n - 1);
}
double sumOfSeries(int n)
{
    double sum = 0;
    for (int i = 1; i <= n; i++)
    {
        double term = i % 2 == 0 ? -1.0 * i / factorials(i) : 1.0 * i / factorials(i);
        sum += term;
    }
    return sum;
}
int main()
{
    int n;
    cout << "Enter the n : ";
    cin >> n;
    double result = sumOfSeries(n);
    cout << "Sum of the series up to " << n << " term is : " << result;
}

// 36 Create a program to convert a decimal number to binary.
#include <iostream>
#include <string.h>
using namespace std;
int main()
{
    int n;
    string binaryString = "";
    cout << "Enter the value of n : ";
    cin >> n;
    while (n > 0)
    {
        int rem = n % 2;
        binaryString = binaryString + to_string(rem);
        n = n / 2;
    }
    cout << binaryString;
}

// 37 Write a program to check whether a given number is a happy number or not
// Given programe not work
#include <iostream>
using namespace std;
int main()
{
    int n, rem, sum = 0;
    cout << "Enter a number of n :";
    cin >> n;
    while (n ==1)
    {
        while (n > 0)
        {
            int rem = n % 10;
            sum += rem * rem;
            n = n / 10;
        }
        n = sum;
        sum = 0;
    }
    n == 1 ? cout << "Happy Number" : cout << "Not Happy Number";

    return 0;
}

// 38 Create a program to find the sum of the squares of the digits of a number until it becomes a single - digit number.

#include <iostream>
using namespace std;
int SumOfSquareOfTheDigit(int n)
{
    int sum = 0;
    while (n > 0)
    {
        sum = sum + (n % 10) * (n % 10);
        n = n / 10;
    }
    return sum;
}
int main()
{
    int n;
    cout << "N : ";
    cin >> n;
    while (n >= 10)
    {
        n = SumOfSquareOfTheDigit(n);
    }
    cout << "The sum of the squares of the digits until it becomes a single-digit number is: " << n;
}

// 39  Write a program to find the factorial of each digit of a given number and add them until it becomes a single - digit number.
#include <iostream>
using namespace std;
int findFactorial(int n)
{
    int fact = 1;
    if (n == 0 || n == 1)
    {
        return 1;
    }
    return n * findFactorial(n - 1);
}
int SumOfSquareOfTheDigit(int n)
{
    int rem, sum = 0;
    while (n > 0)
    {
        rem = (n % 10);
        int fact = findFactorial(rem);
        sum += fact;
        n = n / 10;
    }
    return sum;
}
int main()
{
    int n;
    cout << "N : ";
    cin >> n;
    while (n >= 10)
    {
        n = SumOfSquareOfTheDigit(n);
    }
    cout << "The sum of the factorial the digits until it becomes a single-digit number is: " << n;
}

// 40 Create a program to calculate the area of a triangle given its three sides using Heron's formula
#include <iostream>
#include <math.h>
using namespace std;
double AreaOfTriangle(int a, int b, int c)
{
    double s, Area;
    s = (a + b + c) / 2.0; // s  = semi-perimeter
    Area = sqrt(s * (s - a) * (s - b) * (s - c));
    return Area;
}
int main()
{
    int a, b, c;
    cout << "Enter the value of a: ";
    cin >> a;
    cout << "Enter the value of b: ";
    cin >> b;
    cout << "Enter the value of c:";
    cin >> c;
    double final = AreaOfTriangle(a, b, c);
    cout << "The area of a triangle given its three sides " << a << ", " << b << ", and " << c << " using Heron's formula: " << final;
    return 0;
}
