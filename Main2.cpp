
//Inputs:
//? Booking Class: Economy, Premium Economy, Business, First Class.
//? Date of Travel: Determines peak or off-peak travel times.
//? Meal Preference: Vegetarian, Non-Vegetarian, Vegan, Gluten-Free, etc.
//? Seat Preference: Aisle, Window, or Middle.
//? Loyalty Membership: Gold, Silver, Bronze, or None.
//? Special Requirements: Wheelchair access, near restroom, extra legroom.
//? Duration of Flight: Short-haul (< 3 hours), Medium-haul (3-6 hours), Long-haul (>6 hours)


#include <iostream>
#include <string>

using namespace std;

int main() {
    char BookingClass;
    
    cout << "Enter Booking Class: " << endl;
    cout << "A. First Class" << endl;
    cout << "B. Business" << endl;
    cout << "C. Premium Economy" << endl;
    cout << "D. Economy" << endl;
    cout << ":";
    cin >> BookingClass;

    char LoyaltyMembership;
    
    cout << "Enter Loyalty Membership: " << endl;
    cout << "A. Gold" << endl;
    cout << "B. Silver" << endl;
    cout << "C. Bronze" << endl;
    cout << "D. None" << endl;
    cout << ":";
    cin >> LoyaltyMembership;

    char MealPreference;
    
    cout << "Meal Preference: " << endl;
    cout << "A. Vegetarian" << endl;
    cout << "B. Non-Vegetarian" << endl;
    cout << "C. Vegan" << endl;
    cout << "D. Gluten-Free" << endl;
    cout << ":";
    cin >> MealPreference;

    char  SeatPreference;
    
    cout << "Seat Preference: " << endl;
    cout << "A. Aisle" << endl;
    cout << "B. Window" << endl;
    cout << "C. Middle" << endl;
    cout << ":";
    cin >>  SeatPreference;

    char SpecialRequirements;
    
    cout << "Special Requirements: " << endl;
    cout << "A. Wheelchair access" << endl;
    cout << "B. Near restroom" << endl;
    cout << "C. Extra legroom" << endl;
    cout << "D. None" << endl;
    cout << ":";
    cin >>  SpecialRequirements;

    char  DurationofFlight;
    
    cout << "Duration of Flight: " << endl;
    cout << "A. Short-haul (< 3 hours)" << endl;
    cout << "B. Medium-haul (3-6 hours)" << endl;
    cout << "C. Long-haul (> 6 hours)" << endl;
    cout << ":";
    cin >>  DurationofFlight;

    cin.ignore();
    string  DateofTravel;
    cout << "Date of Travel: " << endl;
    cout << ":";
    getline (cin, DateofTravel);

    if (DateofTravel == "December" || DateofTravel == "december" ||
      DateofTravel == "January" || DateofTravel == "january" ||
      DateofTravel == "February" || DateofTravel == "february" ||
      DateofTravel == "March" || DateofTravel == "march") {
      cout << "peak" << endl;
    } 
	   else if (DateofTravel == "April" || DateofTravel == "april" ||
           DateofTravel == "May" || DateofTravel == "may" ||
           DateofTravel == "June" || DateofTravel == "june" ||
           DateofTravel == "July" || DateofTravel == "july" ||
           DateofTravel == "August" || DateofTravel == "august" ||
           DateofTravel == "September" || DateofTravel == "september" ||
           DateofTravel == "October" || DateofTravel == "october" ||
           DateofTravel == "November" || DateofTravel == "november") {
           cout << "off peak" << endl;
          } else {
          cout << "Invalid Input" << endl;
    }

    switch (BookingClass)
    {
        case 'A': case 'a':
            cout << "You have free in-flight Wi-Fi" << endl;
            break;
        case 'B': case 'b':
            cout << "You selected Business Class" << endl;
            break;
        case 'C': case 'c':
            cout << "You selected Premium Economy Class" << endl;
            char PED;
            cout << "Select a discount" << endl;
            cout << "A. 5%" << endl;
            cout << "B. 6%" << endl;
            cout << "C. 7%" << endl; 
            cin >> PED;
            if (PED == 'A' || PED == 'a'){
            cout << "5%"
            }
            if (PED == 'B' || PED == 'b'){
            cout << "6%"
            }
            if (PED == 'C' || PED == 'c'){
            cout << "7%"
            }
            
            //pang clear ng screen. system ("CLS");

            break;
        case 'D': case 'd':
            cout << "You selected Economy Class" << endl;
            break;

        default: 
            cout << "Invalid Input" << endl;
            break;
    }

    switch (LoyaltyMembership) {
        case 'A': case 'a':
            cout << "You have selected Gold" << endl;
            break;
        case 'B': case 'b':
            cout << "You selected Silver" << endl;
            break;
        case 'C': case 'c':
            cout << "You selected Bronze" << endl;
            break;
        case 'D': case 'd':
            cout << "You selected None" << endl;
            break;

        default: 
            cout << "Invalid Input" << endl;
            break;
    }

    switch (MealPreference) {
        case 'A': case 'a':
            cout << "You selectVegetarian" << endl;
            break;
        case 'B': case 'b':
            cout << "Non-Vegetarian" << endl;
            break;
        case 'C': case 'c':
            cout << "Vegan" << endl;
            break;
        case 'D': case 'd':
            cout << "Gluten-Free" << endl;
            break;

        default: 
            cout << "Invalid Input" << endl;
            break;
    }

    switch (SeatPreference) {
        case 'A': case 'a':
            cout << "You have free in-flight Wi-Fi" << endl;
            break;
        case 'B': case 'b':
            cout << "You selected Business Class" << endl;
            break;
        case 'C': case 'c':
            cout << "You selected Premium Economy Class" << endl;
            break;
        case 'D': case 'd':
            cout << "You selected Economy Class" << endl;
            break;

        default: 
            cout << "Invalid Input" << endl;
            break;
    }

    switch (SpecialRequirements) {
        case 'A': case 'a':
            cout << "You have Wheelchair access" << endl;
            break;
        case 'B': case 'b':
            cout << "You selected a Near restroom seat" << endl;
            break;
        case 'C': case 'c':
            cout << "You selected Extra legroom" << endl;
            break;
        case 'D': case 'd':
            cout << "You selected None" << endl;
            break;

        default: 
            cout << "Invalid Input" << endl;
            break;  
    }

    switch (DurationofFlight) {
        case 'A': case 'a':
            cout << "You have free in-flight Wi-Fi" << endl;
            break;
        case 'B': case 'b':
            cout << "You selected Business Class" << endl;
            break;
        case 'C': case 'c':
            cout << "You selected Premium Economy Class" << endl;
            break;
        case 'D': case 'd':
            cout << "You selected Economy Class" << endl;
            break;

        default: 
            cout << "Invalid Input" << endl;
            break;
    }

    return 0;
}