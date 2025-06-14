/* o Write a C++ program that demonstrates the use of variables and constants. Create 
variables of different data types and perform operations on them. 
o Objective: Understand the difference between variables and constants. */

#include <iostream>
using namespace std;

main() 
{
    // Constant declaration
    const float pi = 3.14159;  // This value cannot be changed

    // Variable declarations
    int radius = 5;            // Integer variable
    float area;                // Float variable
    char grade = 'A';          // Character variable
    string name = "Krunal";    // String variable (requires C++11 or later)

    // Performing operations
    area = pi * radius * radius;

    
    cout << "Name: " << name << endl;
    cout << "Grade: " << grade << endl;
    cout << "Radius of circle: " << radius << endl;
    cout << "Area of circle: " << area << endl;

}
