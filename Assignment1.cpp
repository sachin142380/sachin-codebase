//sum of first and last
#include <iostream>
using namespace std;

int sumBetween(int first, int last) {
    int sum = 0;
    for(int i = first; i <= last; i++)
        sum += i;
    return sum;
}

int main() {
    cout << sumBetween(1, 5);
    return 0;
}
//OUTPUT : 15

//Smallest n where 1+2+…+n ≥ goal
#include <iostream>
using namespace std;

int findN(int goal) {
    int sum = 0, n = 0;
    while(sum < goal) {
        n++;
        sum += n;
    }
    return n;
}

int main() {
    cout << findN(10);
    return 0;
}
//OUTPUT : 4

//GCD of two numbers
#include <iostream>
using namespace std;

int gcd(int a, int b) {
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

int main() {
    cout << gcd(12, 18);
    return 0;
}
//OUTPUT : 6

//Check Prime Number
#include <iostream>
using namespace std;

bool isPrime(int n) {
    if (n <= 1)
        return false;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0)
            return false;
    }
    return true;
}

int main() {
    cout << isPrime(17);
    return 0;
}
//OUTPUT : 1

//English name of number (1–9)
#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter a number between 1 and 9: ";
    cin >> n;
    switch(n) {
        case 1: cout << "One"; break;
        case 2: cout << "Two"; break;
        case 3: cout << "Three"; break;
        case 4: cout << "Four"; break;
        case 5: cout << "Five"; break;
        case 6: cout << "Six"; break;
        case 7: cout << "Seven"; break;
        case 8: cout << "Eight"; break;
        case 9: cout << "Nine"; break;
        default: cout << "Invalid input";
    }
    return 0;
}
//OUTPUT : (for input 3) Three

//Reverse array
#include <iostream>
using namespace std;

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);
    for(int i = size - 1; i >= 0; i--)
        cout << arr[i] << " ";
    return 0;
}
//OUTPUT : 5 4 3 2 1

//Index of largest number
#include <iostream>
using namespace std;

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);
    int maxIndex = 0;
    for(int i = 1; i < size; i++) {
        if(arr[i] > arr[maxIndex])
            maxIndex = i;
    }
    cout << "Index of largest number: " << maxIndex;
    return 0;
}
//OUTPUT : Index of largest number: 4

//Shift array right (circular)
#include <iostream>
using namespace std;

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);
    int temp = arr[size - 1];
    for(int i = size - 1; i > 0; i--)
        arr[i] = arr[i - 1];
    arr[0] = temp;
    for(int i = 0; i < size; i++)
        cout << arr[i] << " ";
    return 0;
}
//OUTPUT : 5 1 2 3 4

//Remove duplicate values
#include <iostream>
using namespace std;

int main() {
    int arr[] = {1, 2, 2, 3, 4, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);
    int unique[size];
    int uniqueSize = 0;
    for(int i = 0; i < size; i++) {
        bool isDuplicate = false;
        for(int j = 0; j < uniqueSize; j++) {
            if(unique[j] == arr[i]) {
                isDuplicate = true;
                break;
            }
        }
        if(!isDuplicate) {
            unique[uniqueSize++] = arr[i];
        }
    }
    for(int i = 0; i < uniqueSize; i++)
        cout << unique[i] << " ";
    return 0;
}
//OUTPUT : 1 2 3 4 5

//Copy two arrays into third
#include <iostream>
using namespace std;

int main() {
    int arr1[] = {1, 2, 3, 4, 5};
    int arr2[] = {6, 7, 8, 9, 10};
    int size = sizeof(arr1) / sizeof(arr1[0]);
    int arr3[size * 2];
    for(int i = 0; i < size; i++) {
        arr3[i] = arr1[i];
        arr3[i + size] = arr2[i];
    }
    for(int i = 0; i < size * 2; i++)
        cout << arr3[i] << " ";
    return 0;
}
//OUTPUT : 1 2 3 4 5 6 7 8 9 10

//Q2 Array operations
//Sum, Max, Linear Search
#include <iostream>
using namespace std;

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);
    int sum = 0;
    for(int i = 0; i < size; i++)
        sum += arr[i];
    cout << "Sum: " << sum << endl;
    int max = arr[0];
    for(int i = 1; i < size; i++) {
        if(arr[i] > max)
            max = arr[i];
    }
    cout << "Max: " << max << endl;
    int target;
    cout << "Enter a number to search: ";
    cin >> target;
    bool found = false;
    for(int i = 0; i < size; i++) {
        if(arr[i] == target) {
            found = true;
            break;
        }
    }
    if(found)
        cout << "Found" << endl;
    else
        cout << "Not Found" << endl;
}
//OUTPUT :
//Sum: 15
//Max: 5

//Matrix Addition & Subtraction
#include <iostream>
using namespace std;

int main() {
    int matrix1[2][2] = {{1, 2}, {3, 4}};
    int matrix2[2][2] = {{5, 6}, {7, 8}};
    int resultAdd[2][2];
    int resultSub[2][2];

    // Addition
    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < 2; j++) {
            resultAdd[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }

    // Subtraction
    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < 2; j++) {
            resultSub[i][j] = matrix1[i][j] - matrix2[i][j];
        }
    }

    cout << "Addition Result:" << endl;
    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < 2; j++) {
            cout << resultAdd[i][j] << " ";
        }
        cout << endl;
    }

    cout << "Subtraction Result:" << endl;
    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < 2; j++) {
            cout << resultSub[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
//OUTPUT :
//Addition Result:
//6 8
//10 12
//Subtraction Result:
//-4 -4

//Q4. Matrix Multiplication (10×10 logic)
#include <iostream>
using namespace std;
int main() {
    int matrix1[10][10], matrix2[10][10], result[10][10];
    int row1, col1, row2, col2;

    cout << "Enter rows and columns for first matrix: ";
    cin >> row1 >> col1;
    cout << "Enter rows and columns for second matrix: ";
    cin >> row2 >> col2;

    if(col1 != row2) {
        cout << "Matrix multiplication not possible." << endl;
        return 0;
    }

    cout << "Enter elements of first matrix:" << endl;
    for(int i = 0; i < row1; i++)
        for(int j = 0; j < col1; j++)
            cin >> matrix1[i][j];

    cout << "Enter elements of second matrix:" << endl;
    for(int i = 0; i < row2; i++)
        for(int j = 0; j < col2; j++)
            cin >> matrix2[i][j];

    // Initialize result matrix to zero
    for(int i = 0; i < row1; i++)
        for(int j = 0; j < col2; j++)
            result[i][j] = 0;

    // Matrix multiplication
    for(int i = 0; i < row1; i++) {
        for(int j = 0; j < col2; j++) {
            for(int k = 0; k < col1; k++) {
                result[i][j] += matrix1[i][k] * matrix2[k][j];
            }
        }
    }

    cout << "Resultant Matrix:" << endl;
    for(int i = 0; i < row1; i++) {
        for(int j = 0; j < col2; j++) {
            cout << result[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
//OUTPUT : (for  matrix 2x3 and 3x2)
//Resultant Matrix:
//58 64
//139 154

//Q5. Linear search using function
#include <iostream>
using namespace std;

bool linearSearch(int arr[], int size, int target) {
    for(int i = 0; i < size; i++) {
        if(arr[i] == target)
            return true;
    }
    return false;
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);
    int target;
    cout << "Enter a number to search: ";
    cin >> target;
    if(linearSearch(arr, size, target))
        cout << "Found" << endl;
    else
        cout << "Not Found" << endl;
}
//OUTPUT : (for 3) Found
//OUTPUT : (for 6) Not Found

//Q6. Rectangle Class
#include <iostream>
using namespace std;

class Rectangle {
private:
    double length;
    double breadth;

public:
    Rectangle(double l, double b) : length(l), breadth(b) {}

    double getArea() {
        return length * breadth;
    }

    double getPerimeter() {
        return 2 * (length + breadth);
    }
};

int main() {
    Rectangle rect(5.0, 3.0);
    cout << "Area: " << rect.getArea() << endl;
    cout << "Perimeter: " << rect.getPerimeter() << endl;
}
//OUTPUT :
//Area: 15
//Perimeter: 16

