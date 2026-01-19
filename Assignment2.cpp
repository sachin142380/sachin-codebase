//Write a C++ program using a class that will ask for a temperature in Celsius and display it in degree 
//Fahrenheit. The formula to convert from Celsius to Fahrenheit is: F = (C * 9/5) + 32
//Use appropriate member functions to perform the conversion and display the result.
#include <iostream>
using namespace std;
class Temperature {
private:
    float celsius;
public:
    void getCelsius();
    float toFahrenheit();
    void displayFahrenheit();
};
void Temperature::getCelsius() {
    cout << "Enter temperature in Celsius: ";
    cin >> celsius;
}
float Temperature::toFahrenheit() {
    return (celsius * 9.0 / 5.0) + 32;
}
void Temperature::displayFahrenheit() {
    float fahrenheit = toFahrenheit();
    cout << "Temperature in Fahrenheit: " << fahrenheit << "°F" << endl;
}
int main() {
    Temperature temp;
    temp.getCelsius();
    temp.displayFahrenheit();
    return 0;
}
//OUTPUT:
//Enter temperature in Celsius: 25
//Temperature in Fahrenheit: 77°F

//Write a C++ program using a class to store and manage the details of students. The class should have 
//the following data members and member functions:  ---------------------------------------  
//Data Members (properties):  - Name  - Roll No  - Degree  - Hostel  - CGPA 
//Member Functions (behaviors):  - Input student details  - Display student details
#include <iostream>
using namespace std;
class Student {
private:
    string name;
    int rollNo;
    string degree;
    string hostel;
    float cgpa;
public:
    void inputDetails();
    void displayDetails();
};
void Student::inputDetails() {
    cout << "Enter student name: ";
    cin >> name;
    cout << "Enter roll number: ";
    cin >> rollNo;
    cout << "Enter degree: ";
    cin >> degree;
    cout << "Enter hostel: ";
    cin >> hostel;
    cout << "Enter CGPA: ";
    cin >> cgpa;
}
void Student::displayDetails() {
    cout << "Student Details:" << endl;
    cout << "Name: " << name << endl;
    cout << "Roll No: " << rollNo << endl;
    cout << "Degree: " << degree << endl;
    cout << "Hostel: " << hostel << endl;
    cout << "CGPA: " << cgpa << endl;
}
int main() {
    Student student;
    student.inputDetails();
    student.displayDetails();
    return 0;
}
//OUTPUT:
//Enter student name:Sachin
//Enter roll number:101
//Enter degree:B.Tech
//Enter hostel:AMRITAM
//Enter CGPA:9.1
//Student Details:
//Name: Sachin
//Roll No: 101
//Degree: B.Tech
//Hostel: AMRITAM
//CGPA: 9.1

//Construct a class named 'Complex' with private data members (real and imaginary) and the following
//member functions:  void set(float r, float i) - to initialize object values.  
//void display() - to display the complex number.  
//Complex sum(Complex c) - to add two complex numbers and return the result as a Complex 
//object. 
//Ensure that the properties are private (real and imaginary), and the member functions are public
#include <iostream>
using namespace std;
class Complex {
private:
    float real;
    float imaginary;
public:
    void set(float r, float i);
    void display();
    Complex sum(Complex c);
};
void Complex::set(float r, float i) {
    real = r;
    imaginary = i;
}
void Complex::display() {
    cout << real << " + " << imaginary << "i" << endl;
}
Complex Complex::sum(Complex c) {
    Complex temp;
    temp.real = real + c.real;
    temp.imaginary = imaginary + c.imaginary;
    return temp;
}
int main() {
    Complex c1, c2, c3;
    c1.set(3.5, 2.5);
    c2.set(1.5, 4.5);
    cout << "First Complex Number: ";
    c1.display();
    cout << "Second Complex Number: ";
    c2.display();
    c3 = c1.sum(c2);
    cout << "Sum of Complex Numbers: ";
    c3.display();
    return 0;
}
//OUTPUT:
//First Complex Number: 3.5 + 2.5i
//Second Complex Number: 1.5 + 4.5i
//Sum of Complex Numbers: 5 + 7i


// Object as Argument and Return  
//Write a C++ program to demonstrate passing an object as an argument and returning the object from a 
//function.
// Use either pass-by-value or pass-by-reference
// Create a class 'Example' with the following 
//members:  - Data Member: int data  - Member Functions:  
//void setData(int value) - to set the value of data.  
//void displayData() - to display the value of data.  
//Example returnObjectByValue() - to return an object with modified data (using pass-by
//value).  
// void modifyObjectByReference(Example &obj) - to modify an object using pass-by-reference. 
#include <iostream>
using namespace std;
class Example {
private:
    int data;
public:
    void setData(int value);
    void displayData();
    Example returnObjectByValue();
    void modifyObjectByReference(Example &obj);
};
void Example::setData(int value) {
    data = value;
}
void Example::displayData() {
    cout << "Data: " << data << endl;
}
Example Example::returnObjectByValue() {
    Example temp;
    temp.setData(data + 10); // Modify data by adding 10
    return temp;
}
void Example::modifyObjectByReference(Example &obj) {
    obj.setData(obj.data + 20); // Modify data by adding 20
}
int main() {
    Example ex1, ex2;
    ex1.setData(5);
    cout << "Original Object:" << endl;
    ex1.displayData();
    
    // Passing object by value
    ex2 = ex1.returnObjectByValue();
    cout << "After returnObjectByValue:" << endl;
    ex2.displayData();
    
    // Passing object by reference
    ex1.modifyObjectByReference(ex1);
    cout << "After modifyObjectByReference:" << endl;
    ex1.displayData();
    
    return 0;
}
//OUTPUT:
//Original Object:
//Data: 5
//After returnObjectByValue:
//Data: 15
//After modifyObjectByReference:
//Data: 25
