// 1.  *************Even or Odd************************

#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter a value of n :";
    cin >> n;
    if (n % 2 == 0)
    {
        cout << "Given chber is even !!";
    }
    else
    {
        cout << "given chber is odd\n";
    }
    cout << "Completed........";
}

// 2.*****************garade calculator********************
#include <iostream>1
using namespace std;
int main()
{
    float percentage;
    cout << "Enter the Percentage  ::\n ";
    cin >> percentage;

    cout << "Percentage is : " << percentage << "%" << endl;
    if (percentage >= 25 && percentage <= 38)
    {
        cout << "Fail";
    }
    else if (percentage >= 39 && percentage <= 50)
    {
        cout << "Grade E ";
    }
    else if (percentage >= 51 && percentage <= 60)
    {
        cout << "Grade D ";
    }
    else if (percentage >= 61 && percentage <= 70)
    {
        cout << "Grade C ";
    }
    else if (percentage >= 71 && percentage <= 85)
    {
        cout << "Grade B ";
    }
    else if (percentage >= 86 && percentage <= 100)
    {
        cout << "Grade A ";
        cout << "Congrutulation";
    }
}

// 3.*********************Leap year checker*********************
#include <iostream>
using namespace std;
int main()
{
    int year;
    cout << "Enter a year :";
    cin >> year;
    if (year % 4 == 0)
    {
        cout << "Leap year";
    }
    else
    {
        cout << "Does not leap year";
    }
}

// 4.**************************Triangle type:  acute,  obtuse, or right-angled  ***********************
#include <iostream>
using namespace std;
int main()
{
    int a, b, c;
    cout << "Types of your angles :";
    cout << "a : ";
    cin >> a;
    cout << "b : ";
    cin >> b;
    cout << "c : ";
    cin >> c;
    if (a + b + c <= 180 && a < 90 && b < 90 && c < 90)
    {
        cout << "Acute triangle ." << endl;
    }
    else if ((a == 90 || b == 90 || c == 90) && (a + b + c == 180 && a <= 90 && b <= 90 && c <= 90))
    {
        cout << "Right angle triangle";
    }
    else if ((a > 90 || b > 90 || c > 90) && (a + b + c == 180))
    {

        cout << "Obtuse triangle";
    }

    else
    {
        cout << "Galat angle dala  hai brooooohhhhhhhhhhhhh";
    }
}

// 5.  ***************Positive, Negative, or Zero:**************************
#include <iostream>
using namespace std;
int main()
{
    int ch;
    cout << "Enter chber : ";
    cin >> ch;
    if (ch >= 1 && ch != 0)
    {
        cout << "Positive chber";
    }
    else if (ch <= 1)
    {
        cout << "Negative chber";
    }
    else
    {
        cout << "Zero";
    }
 
}

// 6.************************Login system ***********************************
#include <iostream>
using namespace std;
int main()
{
    int username, password;
    cout << "Username : ";
    cin >> username;
    cout << "\nPassword : ";
    cin >> password;
    if (username == 1234 && password == 12345)
    {
        cout << "Access Granted! Welcome User.";
    }
    else
    {
        cout << "\n\t Access Denied !!! \n Wrong Username or Password.\n Please try again with correct credentials.";
    }
}

// 7.************************Traffic light simulation************************

#include <iostream>
using namespace std;
int main()
{
    char color;
    cout << "Enter the traffic light color(R/G/Y): ";
    cin >> color;
    if (color == 'r' || color == 'R')
    {
        cout << "Stopp!!\n";
        cout << "Single is red ";
        cout << "You can go whenever single light is green";
    }
    else if (color == 'g' || color == 'G')
    {
        cout << "Green Light On ... Go!\n";
        cout << "Next single is red .........";
    }
    else if (color == 'y' || color == 'Y')
    {
        cout << "Yellow Light On  .. Caution!\n";
        cout << "Next single is red ";
    }
    else
    {
        cout << "Invalid color entered. Please enter either R , G , Y.\n ";
    }
}

// 8. ******************************Divisibility checker**************************************
#include <iostream>eam>
    using namespace std;
    int main()
    {
        int ch;
        cout << "Give a chber : ";
        cin >> ch;
        if (ch % 5 == 0)
        {
            cout << "Given chber is divisible by 5 but also\n";
        }
        if (ch % 5 == 0 && ch % 7 == 0)
        {
            cout << "Given chber is divisible by both 5 and 7 ";
        }
        else if (ch % 7 == 0)
        {
            cout << "Given chber is divisible by 7";
        }
        else
        {
            cout << "chber is not divisible by 5 and 7";
        }
    }

// 9. ****************************Temperature Converter****************************

#include <iostream>
using namespace std;
int main()
{
    float cel, fer, ch;
    cout << "If you want to convert Temperature  press 1 : Into celcius and press 2 : Into ferenhite \n";
    cin >> ch;
    if (ch == 1)
    {
        cout << "Given the value of celcius : ";
        cin >> cel;
        cout << "Given celcius is : " << cel;
        fer = (cel * 9 / 5) + 32;
        cout << "\nTemperature in Fahrenheit : " << fer;
    }
    else if (ch == 2)
    {
        cout << "Give the value of Fahrenheit : ";
        cin >> fer;
        cout << "Now we can convert fahrenheit to celcius :";
        cel = ((fer - 32) * 5 / 9);
        cout << "Temperature  in Celsius: " << cel;
    }
}

// 10. *************************Largest three chbers*************************

#include <iostream>
using namespace std;
int main()
{
    int one, two, three;
    cout << "Enter the first value : ";
    cin >> one;
    cout << "Enter the second value : ";
    cin >> two;
    cout << "Enter the third value ";
    cin >> three;
    if (one > two && one > three)
    {
        cout << one << "is gretest by " << two << " and " << three;
    }
    else if (two > three && two > one)
    {

        cout << two << " is gretest " << three << " and " << one;
    }
    else if (three > one && three > two)
    {
        cout << three << " is Gretest chber by " << one << " and " << two;
    }
}

// 11.*********************** Vowel and constant ***********************?
#include <iostream>
using namespace std;
int main()
{
    char value;
    cout << "Type your character - ";
    cin >> value;
    if (value == 'a' || value == 'e' || value == 'i' || value == 'o' || value == 'u')
    {
        cout << "Given Alphabet is vowel !!";
    }
    else
    {
        cout << "Given Alphabet is Consonant !!\n";
    }
    cout << "Complete !!";
}

// 12.**************************Age classified**************************
#include <iostream>
using namespace std;
int main()
{
    int age;
    cout << "What is your age Dude ... - ";
    cin >> age;
    if (age <= 10)
    {
        cout << "You are child ........ ";
    }
    else if (age <= 18)
    {
        cout << "You are tinegar .........";
    }
    else if (age <= 30)
    {
        cout << "You are Adult ...........";
    }
    else if (age <= 100)
    {
        cout << "You are going to be senior .........";
    }
}

// 13. *****************Quadratic equation solver*****************
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
        cout << "The roots of the quadratic equation are: " << root1 << ", " << root2 << endl;
    }
    else if (discriminant == 0)
    {
        cout << "The root of the quadratic equation is: " << root1 << endl;
    }
    else
    {
        cout << "No Real Roots" << endl;
    }

    return 0;
}

// 14.************** Palimdrone chbers **************
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, a, reverse = 0;
    cout << "n is :";
    cin >> n;
    int original = n;
    while (n != 0)
    {
        reverse = reverse * 10 + (n % 10);
        n = n / 10;
    }

    if (original == reverse)
    {
        cout << "Givern chber is palimdrone";
    }
    else
    {
        cout << "not palimdrone";
    }

    return 0;
}

// 15.**************************BMI CALCULATOR****************************************
#include <iostream>
using namespace std;
int main()
{
    double bmi, height, weight;
    cout << "Weight in kg : ";
    cin >> weight;
    cout << "Height in cm : ";
    cin >> height;
    // convert hight from cm to inches (1 inch = 2.54 cm)
    height = height / 2.54;
    // convert weight from  kg to lbs (1 kg = 2.20462 lbs)
    weight = weight * 2.20462;
    bmi = (weight / (height * height));
    cout << "BMI calculate in Metric units is :  " << bmi << "\n";
    bmi = ((weight * 703) / (height * height));
    cout << "BMI calculate in Imperial units is :  " << bmi;
    return 0;
}

// // 16. *********************** Currency converter *****************
#include <iostream>
using namespace std;
int main()
{
    string conutryName;
    float ammount;
    cout << "Which country currency convert : UnitedState , Ukkran , Nepal , Japan , Indonesia , Hongkon , Euro , Australian , Chinese , Malaysian \n";
    cout << "\tEnter the country name which you can convert that currency :";
    cin >> conutryName;
    cout << "Rupeess in Indian currency : ";
    cin >> ammount;
    if (conutryName == "U")
    {
        float USD = ammount / 83.36;
        cout << "Your Ruppes in Dollar : " << USD;
    }
    else if (conutryName == "k")
    {

        float UAH = ammount / 2.12;
        cout << "Your Ruppes in Ukkrain : " << UAH;
    }
    else if (conutryName == "N")
    {

        float NPR = ammount / 1.62;
        cout << "Your Ruppes in Nepal : " << NPR;
    }
    else
    {
        cout << "Weoking is process ........ !!";
    }
    return 0;
}

// 17.*************************** Password strenght checker ***************************

#include <iostream>
using namespace std;
int main()
{
    char password;
    cout << "\tCheck the password strenght \n ";
    cout << "Type your password : ";
    cin >> password;
    if (password >= 8)
    {
        cout << "Password strenght too short ";
    }
    else if (password >= 8 && password == '1' && password == '@' && password == '#')
    {
        cout << "Password is strong ";
    }
    else
    {
    }
}

// 18.******************************** Day of week ***************************
#include <iostream>
using namespace std;
int main()
{
    int week, day;
    cout << "Enter a day : ";
    cin >> day;
    if (day == 1)
    {
        cout << "Cill kar bhai aaj sunday hai";
    }
    else if (day == 2)
    {
        cout << "Monday....Day of Mahadev";
    }

    else if (day == 3)
    {
        cout << "Tuesday.....Day of Jai bajrang bali ";
    }
    else if (day == 4)
    {
        cout << "Wednesday ............ Day of Devo gajanand .......";
    }
    else if (day == 5)
    {
        cout << "Thursday ........ jai sai baba ki ";
    }
    else if (day == 6)
    {
        cout << "Friday..... Good  Friday";
    }
    else if (day == 7)
    {
        cout << "Saturday .............. jai sani dev ";
    }
    else
    {
        cout << "You enter a wrong chber only enter week of from 1 to 7";
    }
}

//*****************************Ticket price calculator*************************************

#include <iostream>
using namespace std;
int main()
{
    int age, ticket, Royal = 330, Executive = 310;
    string wantToBe;
    cout << "Which ticket you want Royal / Executive (R/E) : ";
    cin >> wantToBe;
    if (wantToBe == "R" || wantToBe == "r")
    {
        cout << "You choose Royal ::\n";
        cout << "Enter your age : ";
        cin >> age;

        if (age <= 18)
        {

            ticket = Royal - 100;
            cout << "Final price is :" << ticket;
        }
        else if (age >= 18)
        {
            cout << "Price is : ";
            ticket = Royal;
            cout << "Final price is : " << ticket;
        }
    }
    if (wantToBe == "E" || wantToBe == "e")
    {
        cout << "You choose Executive :: \n";
        cout << "Enter your age :";
        cin >> age;

        if (age <= 18)
        {
            cout << "Ticket price is : ";
            ticket = Executive - 80;
            cout << "Final price is :" << ticket;
        }
        else if (age >= 18)
        {
            cout << "Price is : ";
            ticket = Executive;
            cout << "Final price is : " << ticket;
        }
    }
}

// 20 *******************************Character classfication ******************************
#include <iostream>
using namespace std;
int main()
{
    string ch;
    cout << "Enter any character : ";
    cin >> ch;
    if (ch >= "0" && ch <= "9")
    {
        cout << ch << " is Numeric Value";
    }
    else if (ch == "a" && ch <= "z")
    {
        cout << ch << " is a Lowercase character ";
    }
    else if (ch == "A" && ch <= "Z")
    {
        cout << ch << " is a Uppercase character ";
    }
    else
    {
        cout << "This is not alphabate ...........";
    }
}

// // 21******************************* Electricity bill calculator ****************************
#include <iostream>
using namespace std;
int main()
{
    float units, rate, totalbillamount = 0, baseCharge = 10.0;
    cout << "How many units you have consumed ? ";
    cin >> units;
    if (units <= 100)
    {
        totalbillamount = baseCharge + (units * 0.10);
    }
    else if (units <= 200)
    {
        totalbillamount = baseCharge + (100 * 0.10) + ((units - 100) * 0.15);
    }
    else if (units <= 300)
    {
        totalbillamount = baseCharge + ((100 * 0.10) + (100 * 0.15) + (units - 200) * 0.20);
    }
    else
    {
        totalbillamount = baseCharge + ((100 * 0.10) + (100 * 0.15) + (100 * 0.20) + (units - 300) * 0.25);
    }

    cout << "Your total amount to be paid is : " << totalbillamount;
}

// 22.

#include <iostream>
using namespace std;
int main()
{
    string a, b;
    cout << "which game you win Rock - R , Paper -P , Scissors -S :\n";
    cout << "First is : \n";
    cin >> a;
    cout << "Second is : \n";
    cin >> b;
    if (a == "R" && b == "P")
    {
        cout << "Paper is Win /n";
    }
    else if (a == "R" && b == "S")
    {
        cout << "Rock is Win /n";
    }
    else if (a == "S" && b == "R")
    {
        cout << "Rock is Win /n";
    }
    else if (a == "S" && b == "P")
    {
        cout << "Scissors is Win /n";
    }
    else if (a == "P" && b == "S")
    {
        cout << "Scissors is Win /n";
    }
    else if (a == "P" && b == "R")
    {
        cout << "Paper is Win /n";
    }
    else if (a == "R" && b == "R")
    {
        cout << "Tie .....";
    }
    else if (a == "S" && b == "S")
    {
        cout << "Tie .....";
    }
    else if (a == "P" && b == "P")
    {
        cout << "Tie .....";
    }
}

// 23.*******************Book discount calculator***************************
#include <iostream>
using namespace std;
int main()
{
    int cost, discount = 0, totalAmount;
    cout << "Book cost is : ";
    cin >> cost;
    if (cost >= 10000)
    {
        discount = ((cost * 5) / 100);
        totalAmount = cost - discount;

        cout << "Total ammount within discount is  : " << totalAmount;
    }
    else if (cost >= 20000)
    {
        discount = ((cost * 10) / 100);
        totalAmount = cost - discount;
        cout << "Total ammount within discount is : " << totalAmount;
    }
    else if (cost >= 30000)
    {
        discount = ((cost * 15) / 100);
        totalAmount = cost - discount;
        cout << "Total ammount within discount is : " << totalAmount;
    }
}

// 24 ********************* take three and outout their sorting ***************************
#include <iostream>
using namespace std;
int main()
{
    int num1, num2, num3, temp;
    cout << "First number : ";
    cin >> num1;
    cout << "Second number : ";
    cin >> num2;
    cout << "Third number : ";
    cin >> num3;
    if (num1 > num2)
    {
        temp = num1;
        num1 = num2;
        num2 = temp;
    }
    if (num2 > num3)
    {
        temp = num2;
        num2 = num3;
        num3 = temp;
    }

    // if (num1 > num2)
    // {
    //     temp = num1;
    //     num1 = num2;
    //     num2 = temp;
    // }
    cout << "sorting is  : " << num1 << " " << num2 << " " << num3;
}

// 25. ******************************Income tax***************************************
#include <iostream>
using namespace std;
int main()
{
    int salary, FullSalary, tax;
    cout << "Enter your sallary :";
    cin >> salary;
    cout << "Your salary : " << salary << endl;
    if (salary <= 100000)
    {
        tax = ((salary * 15) / 100);
        FullSalary = salary - tax;
        cout << "Your income tax is: " << tax << endl;
        cout << "After deducting the income tax your total salary is:" << FullSalary << endl;
    }
    else if (salary <= 200000)
    {

        tax = ((salary * 10) / 100);
        FullSalary = salary - tax;
        cout << "Your income tax is: " << tax << endl;
        cout << "After deducting the income tax your total salary is:" << FullSalary << endl;
    }
    else if (salary <= 300000)
    {
        tax = ((salary * 25) / 100);
        FullSalary = salary - tax;
        cout << "Your income tax is: " << tax << endl;
        cout << "After deducting the income tax your total salary is:" << FullSalary << endl;
    }
    else
    {
        cout << "Your salary is  high to 300000 \n";
        tax = ((salary * 25) / 100);
        FullSalary = salary - tax;
        cout << "Your income tax is: " << tax << endl;
        cout << "After deducting the income tax your total salary is:" << FullSalary << endl;
    }
}

// 26.  ********************************Alarm clock *********************************
#include <iostream>
using namespace std;
int main()
{
    string time;
    cout << "Enter your current time in format 'HH:MM' :  ";
    cin >> time;
    if (time <= "11:59" && time >= "5:00")
    {
        cout << "It 's morning, wake up!";
    }
    else if (time <= "19:00" && time >= "12:00")
    {
        cout << "It is Evening , Go Home and Relax.";
    }
    else if (time <= "23:00" && time >= "19:01")
    {
        cout << "It is Night Time , Sleep tight.";
    }
    else
    {
        cout << "Invalide time format or time out of range.";
    }
}

// 27. ********************positive and negative checker********************
#include <iostream>
using namespace std;
int main()
{
    int num;
    cout << "Enter a number: ";
    cin >> num;
    if (num > 0)
    {
        cout << "\nThe number is positive.\n";
    }
    else if (num < 0)
    {
        cout << "The number is Negative.\n";
    }
    else
    {
        cout << "Zero\n";
    }
}

// 28. ************************ power  of two checker *********************************
#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the exponent (n) for 2^n: ";
    cin >> n;

    if (n >= 0 && n < 32)
    { // Ensure n is within valid range for int type
        int result = 1 << n;
        cout << "2^" << n << " is: " << result << endl;
    }
    else
    {
        cout << "Exponent is out of range for int type." << endl;
    }

    return 0;
}

// 29 . *******************************age group identifier ******************************
#include <iostream>
using namespace std;
main()
{
    int age;

    cout << "Enter your age: ";
    cin >> age;

    if (age < 0)
    {
        cout << "Invalid age entered." << endl;
    }
    else if (age <= 12)
    {
        cout << "You are a child." << endl;
    }
    else if (age <= 19)
    {
        cout << "You are a teenager." << endl;
    }
    else if (age <= 59)
    {
        cout << "You are an adult." << endl;
    }
    else
    {
        cout << "You are a senior citizen." << endl;
    }
}

// 30 *************************Grade validator ********************************************
#include <iostream>
using namespace std;

int main()
{
    int score;

    // Input student's score
    cout << "Enter the student's score: ";
    cin >> score;

    // Check if the score is valid (between 0 and 100)
    if (score >= 0 && score <= 100)
    {
        // Check if the student passed (score >= 50)
        if (score >= 50)
        {
            cout << "Congratulations! The student passed." << endl;
        }
        else
        {
            cout << "Sorry, the student failed." << endl;
        }
    }
    else
    {
        // If the score is not valid, print an error message
        cout << "Invalid score entered. Please enter a score between 0 and 100." << endl;
    }

    return 0;
}

// 31 ******************************Trinangle validator **********************************
#include <iostream>
using namespace std;

int main()
{
    int side1, side2, side3;

    // Input sides of the triangle
    cout << "Enter the length of side 1: ";
    cin >> side1;
    cout << "Enter the length of side 2: ";
    cin >> side2;
    cout << "Enter the length of side 3: ";
    cin >> side3;

    // Check if the triangle is valid
    bool valid = (side1 + side2 > side3) && (side1 + side3 > side2) && (side2 + side3 > side1);

    if (valid)
    {
        cout << "The triangle with sides " << side1 << ", " << side2 << ", " << side3 << " is valid." << endl;
    }
    else
    {
        cout << "The triangle with sides " << side1 << ", " << side2 << ", " << side3 << " is not valid." << endl;
    }

    return 0;
}

// 33 .***************************** Login system withmultiple Conditions *****************************
#include <iostream>
using namespace std;
main()
{
    string userName;
    string password;
    string correctUserName = "admin123";
    string correctPassword = "admin123";
    cout << "Please enter your username: ";
    cin >> userName;
    cout << "Please enter your password: ";
    cin >> password;
    if (userName == correctUserName)
    {
        if (password == correctPassword)
        {
            cout << "\nWelcome Admin ! You are logged in.";
        }
        else
        {
            cout << "\nWrong Password. Please try again.";
        }
    }
    else
    {
        cout << "Wrong username !!";
    }
}

// 34 **************************************** Book discount *****************************************
#include <iostream>
using namespace std;

int main()
{
    double price_per_book, total_cost;
    int quantity;

    // Input price per book and quantity
    cout << "Enter the price per book: ";
    cin >> price_per_book;
    cout << "Enter the quantity of books: ";
    cin >> quantity;

    // Calculate total cost without discount
    total_cost = price_per_book * quantity;

    // Apply discounts based on quantity
    if (quantity >= 5 && quantity <= 10)
    {
        // 10% discount
        total_cost *= 0.9;
        cout << "10% discount applied." << endl;
    }
    else if (quantity > 10)
    {
        // 20% discount
        total_cost *= 0.8;
        cout << "20% discount applied." << endl;
    }

    // Display the total cost
    cout << "Total cost of " << quantity << " books: " << total_cost << endl;

    return 0;
}

// 35 ****************************ticket price calculator *******************************
#include <iostream>
using namespace std;

int main()
{
    int age;
    double ticket_price;

    // Input age
    cout << "Enter your age: ";
    cin >> age;

    // Determine ticket price based on age
    if (age >= 0 && age <= 5)
    {
        ticket_price = 0; // Free for children
        cout << "You qualify for a free ticket!" << endl;
    }
    else if (age >= 6 && age <= 12)
    {
        // Adults (6-12) ticket price
        ticket_price = 70; // Price for adults
        cout << "The ticket price for adults (6-12) is 70." << endl;
    }
    else if (age >= 13 && age < 18)
    {
        // Teens (13-17) ticket price
        ticket_price = 130; // Price for teens
        cout << "The ticket price for teens (13-17) is 130." << endl;
    }
    else if (age >= 18)
    {
        // Seniors (18 and above) ticket price
        ticket_price = 340; // Price for seniors
        cout << "The ticket price for seniors (18 and above) is 340." << endl;
    }
    else
    {
        // Invalid age
        cout << "Invalid age entered. Please enter a valid age." << endl;
        return 1; // Exit the program with an error code
    }

    // Display the ticket price
    cout << "Your ticket price is: " << ticket_price << endl;

    return 0;
}

// 36 **********************************Product availability cheker ****************************
#include <iostream>
using namespace std;

int main()
{
    int stock_quantity;
    bool has_membership;

    // Input stock quantity and membership status
    cout << "Enter the stock quantity of the product: ";
    cin >> stock_quantity;

    cout << "Do you have a valid membership? (1 for yes, 0 for no): ";
    cin >> has_membership;

    // Check availability and membership status
    if (stock_quantity > 1 && has_membership)
    {
        cout << "Product is in stock and available for purchase." << endl;
    }
    else
    {
        cout << "Sorry, the product is out of stock or you do not have a valid membership." << endl;
    }

    return 0;
}

// 37 *********************************Creadic score  calculator *******************************
#include <iostream>
using namespace std;
int main()
{
    int credit_score;
    cout << "Enter your credit score :";
    cin >> credit_score;
    if (credit_score >= 100000)
    {
        cout << "Excellent";
    }
    else if (credit_score >= 50000)
    {
        cout << "Fair";
    }
    else if (credit_score >= 10000)
    {
        cout << "Poor";
    }
    else
    {
        cout << "Very Poor";
    }
}

// 39 ****************************SImple atm system **********************************************
#include <iostream>
using namespace std;
int main()
{
    int ammount;
    int balance = 200000;
    cout << "Enter Withrowal ammount : ";
    cin >> ammount;
    if (ammount <= 0)
    {
        cout << "Invalid amount entered. Please enter a positive amount." << endl;
    }
    else if (ammount > balance)
    {
        cout << "Insufficient funds. Your account balance is " << balance << endl;
    }

    else
    {
        // Successful withdrawal
        balance -= ammount;
        cout << "Successfully withdrew " << ammount << endl;
        cout << "Remaining account balance is " << balance << endl;
    }
}

// 40 . ************************************* Day type indentifier **********************************
#include <iostream>
#include <string>
using namespace std;

int main()
{
    string day_of_week;

    // Input day of the week
    cout << "Enter the day of the week: ";
    cin >> day_of_week;

    // Check if it's a weekday or a weekend day
    if (day_of_week == "saturday" || day_of_week == "sunday")
    {
        cout << day_of_week << " is a weekend day." << endl;
    }
    else if (day_of_week == "monday" || day_of_week == "tuesday" ||
             day_of_week == "wednesday" || day_of_week == "thursday" ||
             day_of_week == "friday")
    {
        cout << day_of_week << " is a weekday." << endl;
    }
    else
    {
        cout << "Invalid day of the week entered. Please enter a valid day." << endl;
    }

    return 0;
}
