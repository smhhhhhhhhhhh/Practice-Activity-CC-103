#include <iostream>
#include <vector>
#include <limits>

using std::cout;
using std::cin;

struct Person {
    char name[50];
    int age;
};

int main() {
    int num, average = 0;
    Person peep;
    std::vector<int> ages;

    // Identify number of people to be inputted
    cout << "Enter the number of people: ";
    cin >> num;

    

    // Loop inputs until number of people is reached
    for(int i = 0, n = 1; i < num; i++, n++) {

        // Clear all characters in the input buffer until newline (ENTER key) every loop, prevents getline error
        cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

        cout << "Enter name of person " << n << ": ";
        cin.getline(peep.name, 50);
        cout << "Enter age of person " << n << ": ";
        cin >> peep.age;
        ages.push_back(peep.age);
    }

    // Calculate average age
    for(int i = 0; i < ages.size(); i++) average+=ages[i];

    average/=ages.size();
    cout << "The average age of the people is: " << average;
}