//Inputs:
//● Booking Class: Economy, Premium Economy, Business, First Class.
//● Date of Travel: Determines peak or off-peak travel times.
//● Meal Preference: Vegetarian, Non-Vegetarian, Vegan, Gluten-Free, etc.
//● Seat Preference: Aisle, Window, or Middle.
//● Loyalty Membership: Gold, Silver, Bronze, or None.
//● Special Requirements: Wheelchair access, near restroom, extra legroom.
//● Duration of Flight: Short-haul (< 3 hours), Medium-haul (3-6 hours), Long-haul (>6 hours)

//KULANG dynamic pricing?, destination, ayusin layout, 
//《《《《《《《《《《《《《《《《《《《《《《《《《《《《《《《《《《《《《《《《《《《《
//》》》》》》》》》


#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>

using namespace std;

int main() {

    
    char BookingClass;
    
    cout << "≃≃≃≃≃≃≃≃≃≃≃≃≃≃≃≃≃≃≃≃≃≃≃≃≃≃≃≃≃≃≃≃≃≃≃≃≃≃≃≃≃≃≃≃≃≃≃≃≃≃≃" << endl;
    cout << "|              Enter Booking Class:               |" << endl;
    cout << "|                A. First Class                   |" << endl;
    cout << "|                B. Business                      |" << endl;
    cout << "|                C. Premium Economy               |" << endl;
    cout << "|                D. Economy                       |" << endl;
    cout << "≂≂≂≂≂≂≂≂≂≂≂≂≂≂≂≂≂≂≂≂≂≂≂≂≂≂≂≂≂≂≂≂≂≂≂≂≂≂≂≂≂≂≂≂≂≂≂≂≂≂≂" << endl;
    cout << "Select your option: ";
    cin >> BookingClass;

    char LoyaltyMembership;
    
     cout << "≃≃≃≃≃≃≃≃≃≃≃≃≃≃≃≃≃≃≃≃≃≃≃≃≃≃≃≃≃≃≃≃≃≃≃≃≃≃≃≃≃≃≃≃≃≃≃≃≃≃≃" << endl;
    cout << "|           Enter Loyalty Membership:             |" << endl;
    cout << "|                A. Gold                          |" << endl;
    cout << "|                B. Silver                        |" << endl;
    cout << "|                C. Bronze                        |" << endl;
    cout << "|                D. None                          |" << endl;
    cout << "≂≂≂≂≂≂≂≂≂≂≂≂≂≂≂≂≂≂≂≂≂≂≂≂≂≂≂≂≂≂≂≂≂≂≂≂≂≂≂≂≂≂≂≂≂≂≂≂≂≂≂" << endl;
    cout << "Select your option: ";
    cin >> LoyaltyMembership;

    char MealPreference;
    
    cout << "≃≃≃≃≃≃≃≃≃≃≃≃≃≃≃≃≃≃≃≃≃≃≃≃≃≃≃≃≃≃≃≃≃≃≃≃≃≃≃≃≃≃≃≃≃≃≃≃≃≃≃" << endl;
    cout << "|              Meal Preference:                   |" << endl;
    cout << "|                A. Vegetarian                    |" << endl;
    cout << "|                B. Non-Vegetarian                |" << endl;
    cout << "|                C. Vegan                         |" << endl;
    cout << "|                D. Gluten-Free                   |" << endl;
    cout << "≂≂≂≂≂≂≂≂≂≂≂≂≂≂≂≂≂≂≂≂≂≂≂≂≂≂≂≂≂≂≂≂≂≂≂≂≂≂≂≂≂≂≂≂≂≂≂≂≂≂≂" << endl;
    cout << "Select your option: ";
    cin >> MealPreference;

    char  SeatPreference;
    
    cout << "≃≃≃≃≃≃≃≃≃≃≃≃≃≃≃≃≃≃≃≃≃≃≃≃≃≃≃≃≃≃≃≃≃≃≃≃≃≃≃≃≃≃≃≃≃≃≃≃≃≃≃" << endl;
    cout << "|              Seat Preference:                   |" << endl;
    cout << "|                A. Aisle                         |" << endl;
    cout << "|                B. Window                        |" << endl;
    cout << "|                C. Middle                        |" << endl;
    cout << "≂≂≂≂≂≂≂≂≂≂≂≂≂≂≂≂≂≂≂≂≂≂≂≂≂≂≂≂≂≂≂≂≂≂≂≂≂≂≂≂≂≂≂≂≂≂≂≂≂≂≂" << endl;
    cout << "Select your option: ";
    cin >> SeatPreference;

    char SpecialRequirements;
    
     cout << "≃≃≃≃≃≃≃≃≃≃≃≃≃≃≃≃≃≃≃≃≃≃≃≃≃≃≃≃≃≃≃≃≃≃≃≃≃≃≃≃≃≃≃≃≃≃≃≃≃≃≃" << endl;
    cout << "|           Special Requirements:                 |" << endl;
    cout << "|                A. Wheelchair access             |" << endl;
    cout << "|                B. Near restroom                 |" << endl;
    cout << "|                C. Extra legroom                 |" << endl;
    cout << "|                D. None                          |" << endl;
    cout << "≂≂≂≂≂≂≂≂≂≂≂≂≂≂≂≂≂≂≂≂≂≂≂≂≂≂≂≂≂≂≂≂≂≂≂≂≂≂≂≂≂≂≂≂≂≂≂≂≂≂≂" << endl;
    cout << "Select your option: ";
    cin >> SpecialRequirements;

    char  DurationofFlight;
    
    cout << "≃≃≃≃≃≃≃≃≃≃≃≃≃≃≃≃≃≃≃≃≃≃≃≃≃≃≃≃≃≃≃≃≃≃≃≃≃≃≃≃≃≃≃≃≃≃≃≃≃≃≃" << endl;
    cout << "|           Duration of Flight:                   |" << endl;
    cout << "|                A. Short-haul (< 3 hours)        |" << endl;
    cout << "|                B. Medium-haul (3-6 hours)       |" << endl;
    cout << "|                C. Long-haul (> 6 hours)         |" << endl;
    cout << "≂≂≂≂≂≂≂≂≂≂≂≂≂≂≂≂≂≂≂≂≂≂≂≂≂≂≂≂≂≂≂≂≂≂≂≂≂≂≂≂≂≂≂≂≂≂≂≂≂≂≂" << endl;
    cout << "Select your option: ";
    cin >> DurationofFlight;

    char FromDestination;
    cout << "≃≃≃≃≃≃≃≃≃≃≃≃≃≃≃≃≃≃≃≃≃≃≃≃≃≃≃≃≃≃≃≃≃≃≃≃≃≃≃≃≃≃≃≃≃≃≃≃≃≃≃" << endl;
    cout << "|                     From Destination            |" << endl;
    cout << "|                A. Asia                          |" << endl;
    cout << "|                B. Europe                        |" << endl;
    cout << "|                C. North America                 |" << endl;
    cout << "|                D. South America                 |" << endl;
    cout << "|                E. Africa                        |" << endl;
    cout << "|                F. Australia                     |" << endl;
    cout << "|                G. Antarctica                    |" << endl;
    cout << "≃≃≃≃≃≃≃≃≃≃≃≃≃≃≃≃≃≃≃≃≃≃≃≃≃≃≃≃≃≃≃≃≃≃≃≃≃≃≃≃≃≃≃≃≃≃≃≃≃≃≃" << endl;
    cout << "Select your option: ";
    cin >> FromDestination;

    char ToDestination;
    cout << "≃≃≃≃≃≃≃≃≃≃≃≃≃≃≃≃≃≃≃≃≃≃≃≃≃≃≃≃≃≃≃≃≃≃≃≃≃≃≃≃≃≃≃≃≃≃≃≃≃≃≃" << endl;
    cout << "|                     To Destination              |" << endl;
    cout << "|                A. Asia                          |" << endl;
    cout << "|                B. Europe                        |" << endl;
    cout << "|                C. North America                 |" << endl;
    cout << "|                D. South America                 |" << endl;
    cout << "|                E. Africa                        |" << endl;
    cout << "|                F. Australia                     |" << endl;
    cout << "|                G. Antarctica                    |" << endl;
    cout << "≃≃≃≃≃≃≃≃≃≃≃≃≃≃≃≃≃≃≃≃≃≃≃≃≃≃≃≃≃≃≃≃≃≃≃≃≃≃≃≃≃≃≃≃≃≃≃≃≃≃≃" << endl;
    cout << "Select your option: ";
    cin >> ToDestination;

      string DOTm;
    int DOTd, DOTy;

    cout << "≃≃≃≃≃≃≃≃≃≃≃≃≃≃≃≃≃≃≃≃≃≃≃≃≃≃≃≃≃≃≃≃≃≃≃≃≃≃≃≃≃≃≃≃≃≃≃≃≃≃≃" << endl;
    cout << "|                     Date of travel              |" << endl;

    cout << "                      Month: ";
    getline(cin, DOTm);
    
    cout << "                      Day: ";
    cin >> DOTd;
    
    cout << "                      Year: ";
    cin >> DOTy;
    cin.ignore();

    cout << "|                                                 |" << endl;
    cout << "≂≂≂≂≂≂≂≂≂≂≂≂≂≂≂≂≂≂≂≂≂≂≂≂≃≃≃≃≃≃≃≃≃≃≃≃≃≃≃≃≃≃≃≃≃≃≃≃≃≃≃" << endl;

    cout << "You entered: " << DOTm << " " << DOTd << " " << DOTy << endl;

    double Discount, Meal, Vegetarian, Non_Vegetarian, Vegan, Gluten_free;
    Vegetarian = 400;
    Non_Vegetarian = 500;
    Vegan = 400;
    Gluten_free = 500;
    

    if (DOTm == "December" || DOTm == "december" || 
        DOTm == "January" || DOTm == "january" || 
        DOTm == "February" || DOTm == "february" || 
        DOTm == "March" || DOTm == "march") {
        cout << "That's a peak month!" << endl; 
    } 
    else if (DOTm == "April" || DOTm == "april" || 
             DOTm == "May" || DOTm == "may" || 
             DOTm == "June" || DOTm == "june" || 
             DOTm == "July" || DOTm == "july" || 
             DOTm == "August" || DOTm == "august" || 
             DOTm == "September" || DOTm == "september" || 
             DOTm == "October" || DOTm == "october" || 
             DOTm == "November" || DOTm == "november") {
        cout << "That's an off-peak month!" << endl; 
    } 
    else {
        cout << "Invalid Input" << endl;
    }

    cout << "》》》》》》》》》》》》》》》》》》》》》》《《《《《《《《《《《《《《《《《《《《《《" << endl;
    cout << "》" << setw(62) << " SkySail Airline Reservation System " << setw(25) << "《" << endl;
    cout << "》" << setw(87) << "《" << endl;
    
    cout << setprecision(2) << fixed;

    double ClassMultiplier;

    switch (BookingClass){
        case 'A': case 'a':
            cout << "》You selected First Class, you have free in-flight Wi-Fi" << endl;
            ClassMultiplier = 2.5;
            break;
        case 'B': case 'b':
            cout << "You selected Business Class" << setw(40) << "《" << endl;
            ClassMultiplier = 2.0;
            break;
        case 'C': case 'c':
            
            cout << "》You selected Premium Economy Class" << setw(25) << "《" << endl;
            ClassMultiplier = 1.5;
            char PED;
            cout << "Select a discount" << endl;
            cout << "A. 5%" << endl;
            cout << "B. 6%" << endl;
            cout << "C. 7%" << endl; 
            cin >> PED;
            if (PED == 'A' || PED == 'a'){
            cout << "5%";
            }
            if (PED == 'B' || PED == 'b'){
            cout << "6%";
            }
            if (PED == 'C' || PED == 'c'){
            cout << "7%";
            }
            
            //pang clear ng screen. system ("CLS");

            break;

        case 'D': case 'd':
            cout << "》" << setw(56) << " You selected Economy Class" << setw(31) << "《" << endl;
            ClassMultiplier = 1;
            break;

        default: 
            cout << "》Invalid Input" << setw(30) << "《" << endl;
            break;
    }

    switch (LoyaltyMembership) {
        case 'A': case 'a':  
            cout << "》You have selected Gold" << setw(25) << "《" << endl;
            break;
        case 'B': case 'b':
            cout << "》You selected Silver" << setw(25) << "《" << endl;
            break;
        case 'C': case 'c':
            cout << "》You selected Bronze" << setw(40) << "《" << endl;
            if (LoyaltyMembership == 'c' || LoyaltyMembership == 'C') {
                switch (MealPreference) {
                case 'A': case 'a':
                    Discount = Vegetarian * 0.05;
                    Meal = Vegetarian - Discount;
                 cout << "Total Meal Price is ₱" << Meal << endl;
                    break;
                case 'B': case 'b':
                    Discount = Non_Vegetarian * 0.05;
                    Meal = Non_Vegetarian - Discount;
                    cout << "Total Meal Price is ₱" << Meal << endl;
                 break;
            case 'C': case 'c':
                    Discount = Vegan * 0.05;
                    Meal = Vegan - Discount;
                    cout << "Total Meal Price is ₱" << Meal << endl;
                    break;
                case 'D': case 'd':
                    Discount = Gluten_free * 0.05;
                    Meal = Gluten_free - Discount;
                    cout << "Total Meal Price is ₱" << Meal << endl;
                    break;

                default: 
                    cout << "Invalid Input" << endl;
                    break;
            }
        }

            break;
        case 'D': case 'd':
            cout << "》You selected None" << setw(40) << "《" << endl;
            break;

        default: 
            cout << "》Invalid Input" << setw(40) << "《" << endl;
            break;

    }

    
    switch (MealPreference) {
        case 'A': case 'a':
            cout << "》Vegetarian" << setw(40) << "《" << endl;
            break;
        case 'B': case 'b':
            cout << "》Non-Vegetarian" << setw(40) << "《" << endl;
            break;
        case 'C': case 'c':
            cout << "》Vegan" << setw(40) << "《" << endl;
            break;
        case 'D': case 'd':
            cout << "》Gluten-Free" << setw(40) << "《" << endl;
            break;

        default: 
            cout << "》Invalid Input" << setw(40) << "《" << endl;
            break;
    }
    
    switch (SeatPreference) {
        case 'A': case 'a':
        
            cout << "》You are at the Aisle" << setw(40) << "《" << endl;
            break;
        case 'B': case 'b':
            cout << "》You are at the Window" << setw(40) << "《" << endl;
            break;
        case 'C': case 'c':
            cout << "》You are at the Middle" << setw(40) << "《" << endl;
            break;

        default: 
            cout << "》Invalid Input" << setw(40) << "《" << endl;
            break;
    }

    switch (SpecialRequirements) {
        case 'A': case 'a':
            cout << "》You have Wheelchair access" << setw(40) << "《" << endl;
            break;
        case 'B': case 'b':
            cout << "》You selected a Near restroom seat" << setw(40) << "《" << endl;
            break;
        case 'C': case 'c':
            cout << "》You selected Extra legroom" << setw(40) << "《" << endl;
            break;
        case 'D': case 'd':
            cout << "》You selected None" << setw(40) << "《" << endl;
            break;
        default: 
            cout << "》Invalid Input" << setw(40) << "《" << endl;
            break;  
    }

    switch (DurationofFlight) {

        case 'A': case 'a':
            cout << "》You selected Short-haul (< 3 hours)" << setw(25) << "《" << endl;
            
            break;
        case 'B': case 'b':
            cout << "》You selected  Medium-haul (3-6 hours)" << setw(30) << "《" << endl;
            
            break;
        case 'C': case 'c':
            cout << "》Long-haul (> 6 hours)" << setw(40) << "《" << endl;
            
            break;
    
        default: 
            cout << "》Invalid Input" << setw(50) << "《" << endl;
            break;
    }

//Meal prices
    
    //palagay ng price for each
    
    
    if (LoyaltyMembership == 'b' || LoyaltyMembership == 'B' && LoyaltyMembership == 'd' || LoyaltyMembership == 'D') {
        switch (MealPreference) {
        case 'A': case 'a':
            Meal = Vegetarian;
            cout << "Total Price is ₱" << Meal << endl;
            break;
        case 'B': case 'b':
            Meal = Non_Vegetarian;
            cout << "Total Price is ₱" << Meal << endl;
            break;
        case 'C': case 'c':
            Meal = Vegan;
            cout << "Total Price is ₱" << Meal << endl;
            break;
        case 'D': case 'd':
            Meal = Gluten_free;
            cout << "Total Price is ₱" << Meal << endl;
            break;
        
        default: 
            cout << "Invalid Input" << endl;
            break;
        }
    }
    else if (LoyaltyMembership == 'a' && LoyaltyMembership == 'A') {
        Meal = 0;
    }
        
    


    // Continents for Ticket Price
// Asia - A, EU - B, NA - C, SA - D, Africa - E, Australia - F, Antarctica - G
double Total_ticket, Ticket_price, Europe, North_America, South_America, Asia, Africa, Antarctica, Australia;

// PALTAN TONG VALUES PLS
Europe = 1000;          
North_America = 1200;   
South_America = 900;    
Asia = 800;             
Africa = 1100;          
Australia = 1300;       
Antarctica = 1500;      


switch (FromDestination) {
    case 'A': case 'a': // Asia
        if (ToDestination == 'B' || ToDestination == 'b') Ticket_price = Europe;
        else if (ToDestination == 'C' || ToDestination == 'c') Ticket_price = North_America;
        else if (ToDestination == 'D' || ToDestination == 'd') Ticket_price = South_America;
        else if (ToDestination == 'E' || ToDestination == 'e') Ticket_price = Africa;
        else if (ToDestination == 'F' || ToDestination == 'f') Ticket_price = Australia;
        else if (ToDestination == 'G' || ToDestination == 'g') Ticket_price = Antarctica;
        else cout << "Invalid Destination" << endl;
        break;

    case 'B': case 'b': // Europe
        if (ToDestination == 'A' || ToDestination == 'a') Ticket_price = Asia;
        else if (ToDestination == 'C' || ToDestination == 'c') Ticket_price = North_America;
        else if (ToDestination == 'D' || ToDestination == 'd') Ticket_price = South_America;
        else if (ToDestination == 'E' || ToDestination == 'e') Ticket_price = Africa;
        else if (ToDestination == 'F' || ToDestination == 'f') Ticket_price = Australia;
        else if (ToDestination == 'G' || ToDestination == 'g') Ticket_price = Antarctica;
        else cout << "Invalid Destination" << endl;

        break;

    case 'C': case 'c': // North America
        if (ToDestination == 'A' || ToDestination == 'a') { Ticket_price = Asia; }
        else if (ToDestination == 'B' || ToDestination == 'b') Ticket_price = Europe; 
        else if (ToDestination == 'D' || ToDestination == 'd') Ticket_price = South_America; 
        else if (ToDestination == 'E' || ToDestination == 'e') Ticket_price = Africa; 
        else if (ToDestination == 'F' || ToDestination == 'f') Ticket_price = Australia; 
        else if (ToDestination == 'G' || ToDestination == 'g') Ticket_price = Antarctica;
        else { cout << "Invalid Destination" << endl; }
        break;

    case 'D': case 'd': // South America
        if (ToDestination == 'A' || ToDestination == 'a') Ticket_price = Asia;
        else if (ToDestination == 'B' || ToDestination == 'b') Ticket_price = Europe;
        else if (ToDestination == 'C' || ToDestination == 'c') Ticket_price = North_America;
        else if (ToDestination == 'E' || ToDestination == 'e') Ticket_price = Africa;
        else if (ToDestination == 'F' || ToDestination == 'f') Ticket_price = Australia;
        else if (ToDestination == 'G' || ToDestination == 'g') Ticket_price = Antarctica;
        else cout << "Invalid Destination" << endl;
        break;

    case 'E': case 'e': // Africa
        if (ToDestination == 'A' || ToDestination == 'a') Ticket_price = Asia;
        else if (ToDestination == 'B' || ToDestination == 'b') Ticket_price = Europe;
        else if (ToDestination == 'C' || ToDestination == 'c') Ticket_price = North_America;
        else if (ToDestination == 'D' || ToDestination == 'd') Ticket_price = South_America;
        else if (ToDestination == 'F' || ToDestination == 'f') Ticket_price = Australia;
        else if (ToDestination == 'G' || ToDestination == 'g') Ticket_price = Antarctica;
        else cout << "Invalid Destination" << endl;
        break;

    case 'F': case 'f': // Australia
        if (ToDestination == 'A' || ToDestination == 'a') Ticket_price = Asia;
        else if (ToDestination == 'B' || ToDestination == 'b') Ticket_price = Europe;
        else if (ToDestination == 'C' || ToDestination == 'c') Ticket_price = North_America;
        else if (ToDestination == 'D' || ToDestination == 'd') Ticket_price = South_America;
        else if (ToDestination == 'E' || ToDestination == 'e') Ticket_price = Africa;
        else if (ToDestination == 'G' || ToDestination == 'g') Ticket_price = Antarctica;
        else cout << "Invalid Destination" << endl;
        break;
    case 'G': case 'g': // Australia
        if (ToDestination == 'A' || ToDestination == 'a') Ticket_price = Asia;
        else if (ToDestination == 'B' || ToDestination == 'b') Ticket_price = Europe;
        else if (ToDestination == 'C' || ToDestination == 'c') Ticket_price = North_America;
        else if (ToDestination == 'D' || ToDestination == 'd') Ticket_price = South_America;
        else if (ToDestination == 'E' || ToDestination == 'e') Ticket_price = Africa;
        else if (ToDestination == 'F' || ToDestination == 'f') Ticket_price = Australia;
        else cout << "Invalid Destination" << endl;
        break;

    default:
        cout << "Invalid Input" << endl;
        break;
}
    
    
    
    Total_ticket = (ClassMultiplier * Ticket_price) + Meal;
    cout << setw(23) << "Total Ticket Price is ₱" << Total_ticket << setw(24) << endl;
    cout << "》》》》》》》》》》》》》》》》》》》》》》《《《《《《《《《《《《《《《《《《《《《《" << endl;


    return 0;

}



    // Output selections for confirmation
    //cout << "\nYour selections:" << endl;
    //cout << "Booking Class: " << BookingClass << endl;
    //cout << "Meal Preference: " << MealPreference << endl;
    //cout << "Seat Preference: " << SeatPreference << endl;
    //cout << "Loyalty Membership: " << LoyaltyMembership << endl;
    //cout << "Special Requirements: " << SpecialRequirements << endl;
    //cout << "Duration of Flight: " << DurationofFlight << endl;