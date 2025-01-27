// 1.**********************Access Control*********************
#include <iostream>
using namespace std;
bool access_control(string username, string password)
{
    string user = "admin";
    string pass = "1234";
    if (username == user && password == pass)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int main()
{
    string username, password;

    cout << "Username : ";
    cin >> username;
    cout << "Password : ";
    cin >> password;
    int result = access_control(username, password);
    if (result == 1)
    {
        cout << "Login Successful\n";
    }
    else
    {
        cout << "Wrong Password!\n";
    }
}

// 2.
//  Membership eligibility checker by their subscription age grethan than 18
#include <bits/stdc++.h>
using namespace std;
bool membership_checker(int age, char hasSubscription)
{
    if (age >= 18 && hasSubscription)
        return true;
    else
        return false;
}
int main()
{
    int age;
    char subscription_choice;
    bool hasSubscription = false;
    cout << "Enter your age :";
    cin >> age;
    cout << "Do you have a valid subscription (y/n) :";
    cin >> subscription_choice;
    if (subscription_choice == 'y' || subscription_choice == 'Y')
        hasSubscription = true;
    if (membership_checker(age, hasSubscription))
    {
        cout << "Congratulations! You are eligible for premium membership." << endl;
        cout << "You have access to premium content." << endl;
    }
    else
    {
        cout << "Sorry, you are not eligible for premium membership." << endl;
        cout << "You do not meet the age requirement or have a valid subscription." << endl;
    }
}
// 3. *********************Grade classification*********************
#include <iostream>
using namespace std;

char calculateLetterGrade(int score)
{
    if (score >= 90 && score <= 100)
    {
        return 'A';
    }
    else if (score >= 80 && score < 90)
    {
        return 'B';
    }
    else if (score >= 70 && score < 80)
    {
        return 'C';
    }
    else if (score >= 60 && score < 70)
    {
        return 'D';
    }
    else
    {
        return 'F';
    }
}

int main()
{
    int numericalGrade;

    cout << "Enter the student's numerical grade: ";
    cin >> numericalGrade;

    char letterGrade = calculateLetterGrade(numericalGrade);

    cout << "The student's letter grade is: " << letterGrade << endl;

    return 0;
}

// 4. ***********************Shipping charge  calculator***********************
#include <iostream>
using namespace std;
int calculateShippingCharge(int weight)
{
    float flate_rate = 60.0;
    float additionalFeesForPerPound = 50.0;
    if (weight <= 5)
    {
        return flate_rate;
    }
    else
    {
        double additionWeight = weight - 5;
        return flate_rate + (additionalFeesForPerPound * additionWeight);
    }
}
int main()
{
    int weight;
    cout << "Weight is : ";
    cin >> weight;
    int result = calculateShippingCharge(weight);
    cout << result;
}

// 5.********************************Discount Calculation********************************
#include <iostream>
using namespace std;
double calculateTotalCost(double orderAmount, bool isPremiumMember)
{
    double discountRate = 5 / 100; // Default discount rate

    if (orderAmount > 50 && isPremiumMember)
    {
        discountRate = 0.10;
    }

    double discountAmount = orderAmount * discountRate;
    double totalCost = orderAmount - discountAmount;
    return totalCost;
}
int main()
{
    double orderAmount;
    string premiumMemberInput;

    cout << "Enter the order amount:";
    cin >> orderAmount;

    cout << "Is the user a premium member? (yes/no): ";
    cin >> premiumMemberInput;

    bool isPremiumMember = (premiumMemberInput == "yes" || premiumMemberInput == "Yes" || premiumMemberInput == "YES");

    double totalCost = calculateTotalCost(orderAmount, isPremiumMember);

    cout << "Total cost after discount: " << totalCost << endl;

    return 0;
}

// 6. ******************************************Ticket Pricing******************************************
#include <iostream>
using namespace std;

int main()
{
    int age;
    char timeOfDay;
    float ticketPrice = 120;
    float original = ticketPrice;

    cout << "Enter your age: ";
    cin >> age;

    cout << "Enter the time of the movie (M for matinee, E for evening): ";
    cin >> timeOfDay;

    if (age <= 12)
    {
        ticketPrice -= 30;
    }

    if (timeOfDay == 'M' || timeOfDay == 'm')
    {
        ticketPrice -= 40;
    }

    if (ticketPrice < 0)
    {
        ticketPrice = 0;
    }

    cout << "Orginal price is : " << original << " The price of your movie ticket is: " << ticketPrice << endl;

    return 0;
}

// 7 ***********************************Authentication System***********************************
#include <iostream>
using namespace std;

int main()
{
    // Hardcoded valid username and password (you can replace these with a database or file lookup)
    string validUsername = "user123";
    string validPassword = "pass456";

    string username, password, authCode;
    cout << "Enter your username: ";
    cin >> username;

    cout << "Enter your password: ";
    cin >> password;

    // Check if the username and password are valid
    if (username == validUsername && password == validPassword)
    {
        cout << "Please enter the 6-digit authentication code: ";
        cin >> authCode;

        // Check if the entered authentication code matches the generated one
        if (authCode == "772787")
        {
            cout << "Authentication successful. Access granted!" << endl;
        }
        else
        {
            cout << "Authentication code is incorrect. Access denied." << endl;
        }
    }
    else
    {
        cout << "Invalid username or password. Access denied." << endl;
    }

    return 0;
}

// 8  ****************************************Voting Eligibility****************************************
#include <iostream>
using namespace std;
int main()
{
    int age;
    char hasCriminalRecord;
    bool isEligible = false;

    cout << "Enter your age: ";
    cin >> age;

    cout << "Do you have a criminal record? (y/n): ";
    cin >> hasCriminalRecord;

    // Check eligibility criteria
    if (age >= 18 && (hasCriminalRecord != 'y' && hasCriminalRecord != 'Y'))
    {
        isEligible = true;
    }

    // Display eligibility status
    if (isEligible)
    {
        cout << "You are eligible to vote. Go ahead and cast your vote!" << endl;
    }
    else
    {
        cout << "You are not eligible to vote." << endl;
    }

    return 0;
}

// 9. ***********************************Temperature Classification***********************************
#include <iostream>
using namespace std;

int main()
{
    double temperature;

    cout << "Enter the temperature in Celsius: ";
    cin >> temperature;

    // Classify temperature into categories
    if (temperature < 10)
    {
        cout << "Cold temperature." << endl;
    }
    else if (temperature >= 10 && temperature < 25)
    {
        cout << "Moderate temperature." << endl;
    }
    else
    {
        cout << "Hot temperature." << endl;
    }

    return 0;
}

// 10 ----------------------------------Exam Pass/Fail Criteria -----------------------------------
#include <iostream>
using namespace std;

int main()
{
    double marks;

    cout << "Enter the marks scored by the student: ";
    cin >> marks;

    // Check if the student passes or fails
    if (marks >= 40.0)
    {
        cout << "Congratulations! The student has passed the exam." << endl;
    }
    else
    {
        cout << "Oops! The student has failed the exam." << endl;
    }

    return 0;
}

// 11------------------------------------- Library Fine Calculation-------------------------------------

#include <iostream>
using namespace std;

int main()
{
    const double BASE_FINE = 20;       // Base fine amount
    const double ADDITIONAL_FINE = 15; // Additional fine for more than a week late

    int daysLate;

    cout << "Enter the number of days the book is late: ";
    cin >> daysLate;

    double fine = BASE_FINE;

    if (daysLate > 7)
    {
        // If the book is more than a week late, add additional fine
        fine += ADDITIONAL_FINE;
    }

    cout << "The fine for the overdue book is: " << fine << endl;

    return 0;
}

// 12. ---------------------------------Product Discount---------------------------------
#include <iostream>
using namespace std;

int main()
{
    const double STANDARD_DISCOUNT_RATE = 0.10;      // 10% standard discount rate
    const double HIGH_PURCHASE_DISCOUNT_RATE = 0.15; // 15% discount rate for high purchase history

    int numPurchases;
    double totalPrice;

    cout << "Enter the total price of the order: ";
    cin >> totalPrice;

    cout << "Enter the number of purchases made by the user: ";
    cin >> numPurchases;

    double discountRate;

    if (numPurchases > 5)
    {
        discountRate = HIGH_PURCHASE_DISCOUNT_RATE;
    }
    else
    {
        discountRate = STANDARD_DISCOUNT_RATE;
    }

    double discountAmount = totalPrice * discountRate;
    double discountedPrice = totalPrice - discountAmount;

    cout << "Total price: " << totalPrice << endl;
    cout << "Discount rate: " << (discountRate * 100) << "%" << endl;
    cout << "Discount amount: " << discountAmount << endl;
    cout << "Discounted price:  " << discountedPrice << endl;

    return 0;
}

// 13 . Event Invitation
#include <iostream>
#include <string>
using namespace std;

int main()
{
    bool isVipGuest, hasPremiumTicket;

    cout << "Are you a VIP guest? (1 for Yes, 0 for No): ";
    cin >> isVipGuest;

    cout << "Have you purchased a premium ticket? (1 for Yes, 0 for No): ";
    cin >> hasPremiumTicket;

    // Check if the user is either a VIP guest OR has purchased a premium ticket
    if (isVipGuest || hasPremiumTicket)
    {
        cout << "Welcome! You have access to the exclusive event." << endl;
    }
    else
    {
        cout << "Sorry, access to the exclusive event is restricted." << endl;
    }

    return 0;
}

// 14. --------------------------------------------Password Recovery--------------------------------------------
#include <iostream>
#include <string>
using namespace std;

int main()
{
    const string CORRECT_PASSWORD = "password123"; // Correct password
    const string RECOVERY_CODE = "recovery987";    // Valid recovery code

    string userInput;

    cout << "Enter your password or recovery code: ";
    cin >> userInput;

    // Check if the userInput matches the correct password OR the valid recovery code
    if (userInput == CORRECT_PASSWORD || userInput == RECOVERY_CODE)
    {
        cout << "Access granted! Welcome back!" << endl;
    }
    else
    {
        cout << "Access denied! Please check your password or recovery code." << endl;
    }

    return 0;
}
