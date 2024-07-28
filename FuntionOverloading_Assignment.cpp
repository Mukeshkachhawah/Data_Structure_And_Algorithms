// 1. Write a function that overloads the "print" function to print an integer, a float, and a string
#include <iostream>
using namespace std;
int print(int numberValue)
{
    return numberValue;
}
float print(float pointvalue)
{
    return pointvalue;
}
string print(string name)
{
    return name;
}
int main()
{
    int numberValue = 1;
    float pointvalue = 2.3;
    string name = "Mukesh";
    cout << print(numberValue) << endl;
    cout << print(pointvalue) << endl;
    cout << print(name) << endl;
}

// 2. Implement a function that overloads the "sum" function to calculate the sum of two
// integers, two floats, and two doubles.
#include "iostream"
using namespace std;
int sum(int a, int b)
{
    return a + b;
}
float sum(float c, float d)
{
    return c + d;
}
double sum(double e, double f)
{
    return e + f;
}
int main()
{
    int a = 5, b = 10;
    float c = 5.5, d = 10.6;
    double e = 4.5555555, f = 44.5666777;
    cout << sum(a, b) << endl;
    cout << sum(c, d) << endl;
    cout << sum(e, f) << endl;
}

// 3. Write a function that overloads the "area" function to calculate the area of a circle
// when  passed the radius as an argument and the area of a square when passed the side length as an argument.
#include <iostream>
using namespace std;
float area(float radius)
{
    float areas = 3.14 * radius * radius;
    return areas;
}
int area(int side)
{
    int areaOfSquare = side * side;
    return areaOfSquare;
}
int main()
{
    float radius = 4;
    int side = 9;
    cout << area(radius) << endl;
    cout << area(side) << endl;

    return 0;
}

// 4. Create a function that overloads the "volume" function to calculate the volume of a cube when passed the side length as an argument and the volume of a cylinder when passed the radius and height as arguments
#include <iostream>
using namespace std;
int volume(int sidelenght)
{
    int volume = sidelenght * sidelenght * sidelenght;
    return volume;
}
float volume(float radius, float height)
{
    float volume = 3.14 * radius * radius * height;
    return volume;
}

int main()
{
    int sidelenght = 3;
    int radius = 18, height = 55;
    cout << "Volume of cube is : " << volume(sidelenght) << endl;
    cout << "Volume of cylinder is : " << volume(radius, height) << endl;
    return 0;
}

// 5. Implement a function that overloads the "maximum" function to find the maximum of two integers, two floats, and two doubles.
#include <iostream>
using namespace std;
int maximum(int a, int b)
{
    return a > b ? a : b;
}
float maximum(float c, float d)
{

    return c > d ? c : d;
}
double maximum(double e, double f)
{
    return e > f ? e : f;
}
int main()
{
    int a = 100, b = 50;
    (maximum(a, b)) ? cout << a << " is greathen than " << b : cout << b << " is greathen than " << a << "\n";

    float c = 100.55, d = 66.65;
    (maximum(c, d)) ? cout << c << " is greathen than " << d : cout << d << " is greathen than " << c << "\n";

    double e = 700.5552453555, f = 343.442424265;
    (maximum(e, f)) ? cout << e << " is greathen than " << f : cout << f << " is greathen than " << e;

    return 0;
}

// 6.Write a function that overloads the "area" function to calculate the area of a rectangle when passed the length and width as arguments and the area of a triangle when passed the base and height as arguments.
#include "iostream"
using namespace std;
int area(int lenght, int width)
{
    return lenght * width;
}
float area(float base, float height)
{
    return (base * height) / 2;
}
int main()
{
    int lenght = 100, width = 55;
    float base = 10, height = 99;
    cout << "Rectangle is  : " << area(lenght, width) << endl;
    cout << "Triangle is : " << area(base, height);
}

// 7 Create a function that overloads the "volume" function to calculate the volume of a sphere when passed the radius as an argument and the volume of a cone when passed the radius and height as arguments
#include <iostream>
using namespace std;
float volume(float radius)
{
    return ((4.0 / 3.0) * (3.14 * (radius * radius * radius)));
}
float volume(float radius, float height)
{
    return (3.14 * radius * radius * height) / 3;
}
int main()
{
    float radius = 10, height = 100;
    cout << "Volume of shpere :" << volume(radius) << "\n";
    cout << "Volume of cone : " << volume(radius, height);
}

// 8. Write a function that overloads the "average" function to calculate the average of two integers, two floats, and two doubles.
#include "iostream"
using namespace std;
int average(int a, int b)
{
    return (a + b) / 2;
}
float average(float a, float b)
{
    return (a + b) / 2;
}
double average(double a, double b)
{
    return (a + b) / 2;
}
int main()
{
    int a = 10, b = 30;
    float c = 12.32, d = 346.455;
    double e = 1552.3255555, f = 35546.45343435;
    cout << average(a, b) << "\n";
    cout << average(c, d) << "\n";
    cout << average(e, f);
}

// 9.Implement a function that overloads the "area" function to calculate the area of a parallelogram when passed the base and height as arguments and the area of a trapezoid when passed the bases and height as arguments
#include <iostream>
using namespace std;
int area(int base, int height)
{
    return base * height;
}
float area(float a, float b, float high)
{
    return ((a + b) * high) / 2;
}
int main()
{
    int base = 10, height = 60;
    float a = 10, b = 10, high = 15;
    cout << "calculate the area of a parallelogram :" << area(base, height) << "\n";
    cout << "The area of a trapezoid : " << area(a, b, high);
}

// 10. Create a function that overloads the "volume" function to calculate the volume of a cuboid when passed the length, width, and height as arguments and the volume of a rectangular prism when passed the length, width, and height as argument

#include <iostream>
using namespace std;

// Calculate the volume of a cuboid
double volume(double length, double width, double height)
{
    return length * width * height;
}

double volume(double length, double width, double height, bool isPrism)
{
    if (isPrism)
    {
        return length * width * height;
    }
    else
    {

        return volume(length, width, height);
    }
}

int main()
{
    double length = 10.0, width = 5.0, height = 3.0;

    double cuboid_volume = volume(length, width, height);
    cout << "Volume of a cuboid: " << cuboid_volume << endl;

    double prism_volume = volume(length, width, height, true);
    cout << "Volume of a rectangular prism: " << prism_volume << endl;

    return 0;
}

// 11.Write a function that overloads the "power" function to calculate the power of an integer and a float.
#include <iostream>
using namespace std;
int power(int num, int pow)
{
    int ans = 1;
    for (int i = 1; i <= pow; i++)
    {
        ans *= num;
    }
    return ans;
}
float power(float num, float pow)
{
    float anss = 1.0;
    for (int i = 1; i <= pow; i++)
    {
        anss *= num;
    }
    return anss;
}
int main()
{
    int num, pow;
    float num1, pow1;
    cout << "Enter the integer number(x ^ n) : ";
    cin >> num >> pow;
    cout << "Enter the float number (x ^ n) : ";
    cin >> num1 >> pow1;
    int ans_int = power(num, pow);
    float ans_float = (float)power(num1, pow1);
    cout << "The value of " << num << " power " << num << " is  : " << ans_int << endl;
    cout << "The value of " << num << " power " << num << " is  : " << ans_float << endl;
}

// 12. Implement a function that overloads the "area" function to calculate the area of a rhombus when passed the diagonals as arguments and the area of a kite when passed the diagonals as arguments.
#include <iostream>
using namespace std;
float area(float d1, float d2)
{
    return 0.5 * d1 * d2;
}
double area(double d1, double d2)
{
    return 0.5 * d1 * d2;
}
int main()
{
    float d1 = 15.45, d2 = 25.23;
    cout << "Area of a rhombus :  " << area(d1, d2) << endl;
    cout << "Area of a kite  :  " << area(d1, d2);
}

// 13.Create a function that overloads the "factorial" function to calculate the factorial of an integer and a long integer.
#include <iostream>
#include <boost/multiprecision/cpp_int.hpp>
namespace mp = boost::multiprecision;
using namespace std;

mp::cpp_int factorial(int n1)
{
    mp::cpp_int fac = 1;
    for (int i = n1; i > 1; i--)
    {
        fac *= i;
    }
    return fac;
}
mp::cpp_int factorial(long int n2)
{

    mp::cpp_int fac = 1;
    for (long int i = n2; i > 1; i--)
    {
        fac *= i;
    }
    return fac;
}
int main()
{
    int n1;
    long int n2;
    cout << "int and long int with white space : ";
    cin >> n1 >> n2;
    cout << "factorial of int " << n1 << " is  :" << factorial(n1) << endl;
    cout << "factorial of long int " << n2 << " is  :" << factorial(n2);
    return 0;
}
ZZ

// 14. Write a function that overloads the "distance" function to calculate the distance between two points given their coordinates(x1, y1) and (x2, y2) as arguments and the distance between two points given their coordinates(x1, y1, z1) and (x2, y2, z2) as arguments.

#include <iostream>
#include <math.h>
    using namespace std;
double distance(double x1, double y1, double x2, double y2)
{
    int ans = sqrt(((x2 - x1) * (x2 - x1)) + ((y2 - y1) * (y2 - y1)));
    return ans;
}
double distance(double x1, double y1, double x2, double y2, double z1, double z2)
{
    int ans = sqrt(((x2 - x1) * (x2 - x1)) + ((y2 - y1) * (y2 - y1)) + ((z2 - z1) * (z2 - z1)));
    return ans;
}
int main()
{
    double x1 = 5, y1 = 9, x2 = 15, y2 = 20, z1 = 15, z2 = 25;
    cout << "Area of two coordinates ( x1 : " << x1 << " , x2 : " << x2 << ")  (y1 : " << y1 << " , y2 : " << y2 << " ) distance  is : " << distance(x1, y1, x2, y2) << endl;
    cout << "Area of three coordinates :( x1 : " << x1 << " , x2 : " << x2 << ")  (y1 : " << y1 << " ,  y2 : " << y2 << " ) (z1 : " << z1 << " z2 : " << z2 << " ) distance  is : " << distance(x1, y1, x2, y2, z1, z2);
}

// 15. Implement a function that overloads the "area" function to calculate the area of a regular polygon when passed the number of sides and the side length as arguments and the area of an irregular polygon when passed the number of sides and the lengths of each side as arguments.
#include <iostream>
#include <math.h>
using namespace std;
int area(int a, int b, int c)
{
    int s;
    s = (a + b + c) / 2;
    return sqrt(s * (s - a) * (s - b) * (s - c));
}
double area(double n, double s)
{
    double pie = 3.14;
    double areas = (n * s * s) / (4 * tan(pie / n));
    return areas;
}
int main()
{
    int a = 5, b = 7, c = 9;
    double n = 5, s = 10;
    cout << "The area of a regular polygon In which a"
         << " : " << a << " b : " << b << " c : " << c << " =  " << area(a, b, c) << endl;
    cout << "The area of a irregular polygon In which n"
         << " : " << n << " s : " << s << " =  " << area(n, s);
}
