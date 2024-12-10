#include <iostream>
#include <string>
using namespace std;
int main() 
{
    string carName;
    float tankCapacity, fuelEfficiency, petrolPrice, distance, totalCost;
    cout << "Enter Car Name: ";
    cin >> carName;
    cout << "Enter " << carName << "'s Fuel Tank Capacity (in liters): ";
    cin >> tankCapacity;
    cout << "Enter " << carName << "'s Fuel Efficiency (km per liter): ";
    cin >> fuelEfficiency;
    cout << "Enter Current Petrol Price (per liter): ";
    cin >> petrolPrice;
    distance = tankCapacity * fuelEfficiency;
    totalCost = tankCapacity * petrolPrice;
    cout << "\n--- Travel Information for " << carName << " ---" << endl;
    cout << "Maximum Distance You Can Travel: " << distance << " km" << endl;
    cout << "Cost to Travel Maximum Distance: Rs. " << totalCost << endl;
    
    float specificDistance, specificCost;
    cout << "\nDo you want to calculate cost for a specific distance? (Enter distance in km or 0 to skip): ";
    cin >> specificDistance;
    if (specificDistance > 0) 
    {
        specificCost = (specificDistance / fuelEfficiency) * petrolPrice;
        cout << "Cost to Travel " << specificDistance << " km: Rs. " << specificCost << endl;
    } 
    else 
    {
        cout << "No specific distance calculation performed.\n";
    }
    cout << "\nSafe travels!\n";
    return 0;
}

