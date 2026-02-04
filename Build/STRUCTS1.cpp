#include <iostream>
#include <iterator>

using std::cout;
using std::cin;

struct Student {
    char name[50];
    int rollNumber;
    int marks[5];
    int totalMarks = 0;
};

void printInfo(const Student& s);

int main() {
    Student pupil;

    // Member identifiers
    auto& marks = pupil.marks;
    int& rn = pupil.rollNumber, &sum = pupil.totalMarks;

    // Input details
    cout << "Enter student details:\n"
         << "Name: ";
    cin.getline(pupil.name, 50);
    cout << "Roll Number: ";
    cin >> rn;

    // Marks calculation
    cout << "Enter marks for 5 subjects:\n";
    for(int i = 0, j = 1; i < std::size(marks); i++, j++) {
        cout << "Subject " << j << ": ";
        cin >> marks[i];
    }
    for(int i = 0; i < std::size(marks); i++) {
        sum+=marks[i];
    }
    
    printInfo(pupil);
}

// Function to print student info
void printInfo(const Student& s) {

    cout << "\nStudent details:\n"
         << "Name: " << s.name << '\n'
         << "Roll Number: " << s.rollNumber << '\n'
         << "Marks:\n";

    for(int i = 0, j = 1; i < std::size(s.marks); i++, j++) {
        cout << "Subject " << j << ": " << s.marks[i] << '\n';
    }

    cout << "Total Marks: " << s.totalMarks;
}