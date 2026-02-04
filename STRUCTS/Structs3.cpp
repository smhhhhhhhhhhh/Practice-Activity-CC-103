#include <iostream>

using std::cout;
using std::cin;

struct Car {
    char brand[20];
    char model[20];
    int year;
    float mileage;
};

float calculateDepreciation(float mileage);
void displayCarDetails(const Car& car);

int main(){
    Car car;

    // Input car info
    cout << "Enter the brand of the car: ";
    cin.getline(car.brand, 50);
    cout << "Enter the model of the car: ";
    cin.getline(car.model, 20);
    cout << "Enter the year of the car: ";
    cin >> car.year;
    cout << "Enter the mileage of the car: ";
    cin >> car.mileage;

    displayCarDetails(car);
}

// Function to calculate depreciation
float calculateDepreciation(float mileage) {
    if(mileage < 10000) return 0;
    else if(mileage >= 10000 && mileage <= 49999) return 10;
    else if(mileage >= 50000 && mileage <= 99999) return 20;
    else return 30;

}

// Function to display car info
void displayCarDetails(const Car& car) {
    // Calculate depreciation
    float dep = calculateDepreciation(car.mileage);

    cout << "\nCar Details:\n"
         << "Brand: " << car.brand << '\n'
         << "Model: " << car.model << '\n'
         << "Year: " << car.year << '\n'
         << "Mileage: " << car.mileage << '\n'
         << "Depreciation: " << dep << '%';
}