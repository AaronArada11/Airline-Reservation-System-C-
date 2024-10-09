//Inputs:
//● Booking Class: Economy, Premium Economy, Business, First Class.
//● Date of Travel: Determines peak or off-peak travel times.
//● Meal Preference: Vegetarian, Non-Vegetarian, Vegan, Gluten-Free, etc.
//● Seat Preference: Aisle, Window, or Middle.
//● Loyalty Membership: Gold, Silver, Bronze, or None.
//● Special Requirements: Wheelchair access, near restroom, extra legroom.
//● Duration of Flight: Short-haul (< 3 hours), Medium-haul (3-6 hours), Long-haul (>6 hours)


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

    char  SpecialRequirements;
    
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

    char  DateofTravel;
    
    cout << "Date of Travel: " << endl;
    cout << "A. Peak" << endl;
    cout << "B. Off-peak Travel" << endl;
    cout << ":";
    cin >>  DateofTravel;


    switch (BookingClass)
    {
        case 'A': case 'a':
            cout << "You have free in-flight Wi-Fi" << endl;
            if (LoyaltyMembership == 'a' || LoyaltyMembership == 'A') {
                cout << "You Have Lounge Access" << endl;
            }
            if (SeatPreference == 'b' || SeatPreference == 'B' && DurationofFlight == 'c' || DurationofFlight == 'C') {
                cout << "You have a free drink voucher" << endl;
            }
            break;
            
        case 'B': case 'b':
            cout << "You selected Business Class" << endl;
            if (LoyaltyMembership == 'a' || LoyaltyMembership == 'A' || LoyaltyMembership == 'b' || LoyaltyMembership == 'B') {
                cout << "You have priority boarding" << endl;
            }
            if (MealPreference == 'c' || MealPreference == 'C' || MealPreference == 'd' || MealPreference == 'D') {
                cout << "Please confirm special meal 48 hours prior to the flight." << endl;
            }
            if (SeatPreference == 'b' || SeatPreference == 'B' && DurationofFlight == 'c' || DurationofFlight == 'C') {
                cout << "You have a complimentary sleeping kit" << endl;
            }
            break;
            
        case 'C': case 'c':
            cout << "You selected Premium Economy Class" << endl;
            
            if (SpecialRequirements == 'c' || SpecialRequirements == 'C') {
                cout << "Allocated front-row seats" << endl;
            }
            break;
        case 'D': case 'd':
            cout << "You selected Economy Class" << endl;
            if (LoyaltyMembership == 'c' || LoyaltyMembership == 'C')
                cout << "You have 5% discount on in-flight meals" << endl;
            if (SpecialRequirements == 'a' || SpecialRequirements == 'A')
                cout << "Ground Staff will assist you during boading and de-boarding" << endl;
            break;

        default: 
            cout << "Invalid Input" << endl;
            break;
    }

    if (DurationofFlight == 'A') { 
        if (MealPreference == 'A' || MealPreference == 'C') {
            cout << "Offer a complimentary snack box." << endl;
        }
    } else if (DurationofFlight == 'B') { 
        if (SeatPreference == 'B') {
            cout << "Ensure in-flight entertainment system with a charging port." << endl;
        }
    } else if (DurationofFlight == 'C') { 
        cout << "Provide blankets and headphones to all passengers." << endl;
    }

    
    if (SpecialRequirements == 'B') { 
        cout << "Ensure the seat is not near emergency exits due to security regulations." << endl;
    } else if (SpecialRequirements == 'A') { 
        cout << "Allocate seats close to the entrance and ensure assistance during transit." << endl;
    }

    return 0;
}




