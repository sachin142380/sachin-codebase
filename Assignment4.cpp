
//Append an array using function with user input
#include <iostream>
using namespace std;
void Append(int arr1[], int size1, int arr2[], int size2, int result[]){
    for(int i = 0; i < size1; i++){
        result[i] = arr1[i];
    }
    for(int j = 0; j < size2; j++){
        result[size1 + j] = arr2[j];
    }
}
int main(){
    int n1, n2;
    cout << "Enter the number of elements in the first array: ";
    cin >> n1;
    int arr1[n1];
    cout << "Enter the elements of the first array: ";
    for(int i = 0; i < n1; i++){
        cin >> arr1[i];
    }
    cout << "Enter the number of elements in the second array: ";
    cin >> n2;
    int arr2[n2];
    cout << "Enter the elements of the second array: ";
    for(int j = 0; j < n2; j++){
        cin >> arr2[j];
    }
    int result[n1 + n2];
    Append(arr1, n1, arr2, n2, result);
    cout << "Appended array elements are: ";
    for(int k = 0; k < n1 + n2; k++){
        cout << result[k] << " ";
    }
    return 0;
}
//Output:
//Enter the number of elements in the first array: 3
//Enter the elements of the first array: 1 2 3
//Enter the number of elements in the second array: 2
//Enter the elements of the second array: 4 5
//Appended array elements are: 1 2 3 4 5

//Insert at index using function with user input
#include <iostream>
using namespace std;
void InsertAtIndex(int arr[], int& size, int index, int value){
    for(int i = size; i > index; i--){
        arr[i] = arr[i - 1];
    }
    arr[index] = value;
    size++;
}
int main(){
    int n;
    cout << "Enter the number of elements in the array: ";
    cin >> n;
    int arr[n + 1]; // +1 to accommodate the new element
    cout << "Enter the elements of the array: ";
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    int index, value;
    cout << "Enter the index to insert the new element: ";
    cin >> index;
    cout << "Enter the value to insert: ";
    cin >> value;
    InsertAtIndex(arr, n, index, value);
    cout << "Array elements after insertion are: ";
    for(int j = 0; j < n; j++){
        cout << arr[j] << " ";
    }
    return 0;
}
//Output:
//Enter the number of elements in the array: 4
//Enter the elements of the array: 10 20 30 40
//Enter the index to insert the new element: 2
//Enter the value to insert: 25
//Array elements after insertion are: 10 20 25 30 40

//Delete element using function with user input
#include <iostream>
using namespace std;
void DeleteElement(int arr[], int& size, int index){
    for(int i = index; i < size - 1; i++){
        arr[i] = arr[i + 1];
    }
    size--;
}
int main(){
    int n;
    cout << "Enter the number of elements in the array: ";
    cin >> n;
    int arr[n];
    cout << "Enter the elements of the array: ";
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    int index;
    cout << "Enter the index of the element to delete: ";
    cin >> index;
    DeleteElement(arr, n, index);
    cout << "Array elements after deletion are: ";
    for(int j = 0; j < n; j++){
        cout << arr[j] << " ";
    }
    return 0;
}
//Output:
//Enter the number of elements in the array: 5
//Enter the elements of the array: 10 20 30 40 50
//Enter the index of the element to delete: 2
//Array elements after deletion are: 10 20 40 50

//Linear search using fucntion with user input 
#include <iostream>
using namespace std;
int LinearSearch(int arr[], int size, int key){
    for(int i = 0; i < size; i++){
        if(arr[i] == key){
            return i; // Return the index if found
        }
    }
    return -1; // Return -1 if not found
}
int main(){
    int n;
    cout << "Enter the number of elements in the array: ";
    cin >> n;
    int arr[n];
    cout << "Enter the elements of the array: ";
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    int key;
    cout << "Enter the element to search for: ";
    cin >> key;
    int result = LinearSearch(arr, n, key);
    if(result != -1){
        cout << "Element found at index: " << result << endl;
    } else {
        cout << "Element not found in the array." << endl;
    }
    return 0;
}
//Output:
//Enter the number of elements in the array: 4
//Enter the elements of the array: 5 10 15 20
//Enter the element to search for: 15
//Element found at index: 2

//Binary search using function with user input
#include <iostream>
using namespace std;
int BinarySearch(int arr[], int size, int key){
    int left = 0;
    int right = size - 1;
    while(left <= right){
        int mid = left + (right - left) / 2;
        if(arr[mid] == key){
            return mid; // Return the index if found
        }
        else if(arr[mid] < key){
            left = mid + 1;
        }
        else{
            right = mid - 1;
        }
    }
    return -1; // Return -1 if not found
}
int main(){
    int n;
    cout << "Enter the number of elements in the sorted array: ";
    cin >> n;
    int arr[n];
    cout << "Enter the elements of the sorted array: ";
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    int key;
    cout << "Enter the element to search for: ";
    cin >> key;
    int result = BinarySearch(arr, n, key);
    if(result != -1){
        cout << "Element found at index: " << result << endl;
    } else {
        cout << "Element not found in the array." << endl;
    }
    return 0;
}
//Output:
//Enter the number of elements in the sorted array: 5
//Enter the elements of the sorted array: 1 3 5 7 9
//Enter the element to search for: 7
//Element found at index: 3

//Get element using function with user input
#include <iostream>
using namespace std;
int GetElement(int arr[], int size, int index){
    if(index >= 0 && index < size){
        return arr[index];
    } else {
        cout << "Index out of bounds." << endl;
        return -1; // Indicate error
    }
}
int main(){
    int n;
    cout << "Enter the number of elements in the array: ";
    cin >> n;
    int arr[n];
    cout << "Enter the elements of the array: ";
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    int index;
    cout << "Enter the index of the element to retrieve: ";
    cin >> index;
    int element = GetElement(arr, n, index);
    if(element != -1){
        cout << "Element at index " << index << " is: " << element << endl;
    }
    return 0;
}
//Output:
//Enter the number of elements in the array: 4
//Enter the elements of the array: 10 20 30 40
//Enter the index of the element to retrieve: 2
//Element at index 2 is: 30

//Set element using function with user input
#include <iostream>
using namespace std;
void SetElement(int arr[], int size, int index, int value){
    if(index >= 0 && index < size){
        arr[index] = value;
    } else {
        cout << "Index out of bounds." << endl;
    }
}
int main(){
    int n;
    cout << "Enter the number of elements in the array: ";
    cin >> n;
    int arr[n];
    cout << "Enter the elements of the array: ";
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    int index, value;
    cout << "Enter the index of the element to set: ";
    cin >> index;
    cout << "Enter the new value: ";
    cin >> value;
    SetElement(arr, n, index, value);
    cout << "Array elements after setting new value are: ";
    for(int j = 0; j < n; j++){
        cout << arr[j] << " ";
    }
    return 0;
}
//Output:
//Enter the number of elements in the array: 3
//Enter the elements of the array: 5 10 15
//Enter the index of the element to set: 1
//Enter the new value: 20
//Array elements after setting new value are: 5 20 15

//Max element using function with user input
#include <iostream>
using namespace std;
int MaxElement(int arr[], int size){
    int max = arr[0];
    for(int i = 1; i < size; i++){
        if(arr[i] > max){
            max = arr[i];
        }
    }
    return max;
}
int main(){
    int n;
    cout << "Enter the number of elements in the array: ";
    cin >> n;
    int arr[n];
    cout << "Enter the elements of the array: ";
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    int max = MaxElement(arr, n);
    cout << "Maximum element in the array is: " << max << endl;
    return 0;
}
//Output:
//Enter the number of elements in the array: 4
//Enter the elements of the array: 12 45 7 23
//Maximum element in the array is: 45

//Min element using function with user input
#include <iostream>
using namespace std;
int MinElement(int arr[], int size){
    int min = arr[0];
    for(int i = 1; i < size; i++){
        if(arr[i] < min){
            min = arr[i];
        }
    }
    return min;
}
int main(){
    int n;
    cout << "Enter the number of elements in the array: ";
    cin >> n;
    int arr[n];
    cout << "Enter the elements of the array: ";
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    int min = MinElement(arr, n);
    cout << "Minimum element in the array is: " << min << endl;
    return 0;
}
//Output:
//Enter the number of elements in the array: 5
//Enter the elements of the array: 34 12 5 67 23
//Minimum element in the array is: 5

//Reverse array using function with user input
#include <iostream>
using namespace std;
void ReverseArray(int arr[], int size){
    int start = 0;
    int end = size - 1;
    while(start < end){
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}
int main(){
    int n;
    cout << "Enter the number of elements in the array: ";
    cin >> n;
    int arr[n];
    cout << "Enter the elements of the array: ";
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    ReverseArray(arr, n);
    cout << "Array elements after reversal are: ";
    for(int j = 0; j < n; j++){
        cout << arr[j] << " ";
    }
    return 0;
}
//Output:
//Enter the number of elements in the array: 4
//Enter the elements of the array: 1 2 3 4
//Array elements after reversal are: 4 3 2 1

//Shift left using function with user input
#include <iostream>
using namespace std;
void ShiftLeft(int arr[], int size){
    int first = arr[0];
    for(int i = 0; i < size - 1; i++){
        arr[i] = arr[i + 1];
    }
    arr[size - 1] = first;
}
int main(){
    int n;
    cout << "Enter the number of elements in the array: ";
    cin >> n;
    int arr[n];
    cout << "Enter the elements of the array: ";
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    ShiftLeft(arr, n);
    cout << "Array elements after left shift are: ";
    for(int j = 0; j < n; j++){
        cout << arr[j] << " ";
    }
    return 0;
}
//Output:
//Enter the number of elements in the array: 5
//Enter the elements of the array: 10 20 30 40 50
//Array elements after left shift are: 20 30 40 50 10

//Rotate using function with user input
#include <iostream>
using namespace std;
void Rotate(int arr[], int size){
    int first = arr[0];
    for(int i = 0; i < size - 1; i++){
        arr[i] = arr[i + 1];
    }
    arr[size - 1] = first;
}
int main(){
    int n;
    cout << "Enter the number of elements in the array: ";
    cin >> n;
    int arr[n];
    cout << "Enter the elements of the array: ";
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    Rotate(arr, n);
    cout << "Array elements after rotation are: ";
    for(int j = 0; j < n; j++){
        cout << arr[j] << " ";
    }
    return 0;
}
//Output:
//Enter the number of elements in the array: 4
//Enter the elements of the array: 1 2 3 4
//Array elements after rotation are: 2 3 4 1

//Check if an array is sorted  using function with user input
#include <iostream>
using namespace std;
bool IsSorted(int arr[], int size){
    for(int i = 0; i < size - 1; i++){
        if(arr[i] > arr[i + 1]){
            return false;
        }
    }
    return true;
}
int main(){
    int n;
    cout << "Enter the number of elements in the array: ";
    cin >> n;
    int arr[n];
    cout << "Enter the elements of the array: ";
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    if(IsSorted(arr, n)){
        cout << "The array is sorted." << endl;
    } else {
        cout << "The array is not sorted." << endl;
    }
    return 0;
}
//Output:
//Enter the number of elements in the array: 5
//Enter the elements of the array: 10 20 30 40 50
//The array is sorted.

// Merge arrays using function with user input
#include <iostream>
using namespace std;
void MergeArrays(int arr1[], int size1, int arr2[], int size2, int result[]){
    int i = 0, j = 0, k = 0;
    while(i < size1 && j < size2){
        if(arr1[i] < arr2[j]){
            result[k++] = arr1[i++];
        } else {
            result[k++] = arr2[j++];
        }
    }
    while(i < size1){
        result[k++] = arr1[i++];
    }
    while(j < size2){
        result[k++] = arr2[j++];
    }
}
int main(){
    int n1, n2;
    cout << "Enter the number of elements in the first sorted array: ";
    cin >> n1;
    int arr1[n1];
    cout << "Enter the elements of the first sorted array: ";
    for(int i = 0; i < n1; i++){
        cin >> arr1[i];
    }
    cout << "Enter the number of elements in the second sorted array: ";
    cin >> n2;
    int arr2[n2];
    cout << "Enter the elements of the second sorted array: ";
    for(int j = 0; j < n2; j++){
        cin >> arr2[j];
    }
    int result[n1 + n2];
    MergeArrays(arr1, n1, arr2, n2, result);
    cout << "Merged array elements are: ";
    for(int k = 0; k < n1 + n2; k++){
        cout << result[k] << " ";
    }
    return 0;
}
//Output:
//Enter the number of elements in the first sorted array: 3
//Enter the elements of the first sorted array: 1 4 7
//Enter the number of elements in the second sorted array: 4
//Enter the elements of the second sorted array: 2 3 5 6
//Merged array elements are: 1 2 3 4 5 6 7

//Union of arrays using function with user input
#include <iostream>
using namespace std;
void UnionArrays(int arr1[], int size1, int arr2[], int size2, int result[], int& resultSize){
    int i = 0, j = 0;
    resultSize = 0;
    while(i < size1 && j < size2){
        if(arr1[i] < arr2[j]){
            result[resultSize++] = arr1[i++];
        } else if(arr2[j] < arr1[i]){
            result[resultSize++] = arr2[j++];
        } else {
            result[resultSize++] = arr1[i++];
            j++;
        }
    }
    while(i < size1){
        result[resultSize++] = arr1[i++];
    }
    while(j < size2){
        result[resultSize++] = arr2[j++];
    }
}
int main(){
    int n1, n2;
    cout << "Enter the number of elements in the first sorted array: ";
    cin >> n1;
    int arr1[n1];
    cout << "Enter the elements of the first sorted array: ";
    for(int i = 0; i < n1; i++){
        cin >> arr1[i];
    }
    cout << "Enter the number of elements in the second sorted array: ";
    cin >> n2;
    int arr2[n2];
    cout << "Enter the elements of the second sorted array: ";
    for(int j = 0; j < n2; j++){
        cin >> arr2[j];
    }
    int result[n1 + n2];
    int resultSize;
    UnionArrays(arr1, n1, arr2, n2, result, resultSize);
    cout << "Union array elements are: ";
    for(int k = 0; k < resultSize; k++){
        cout << result[k] << " ";
    }
    return 0;
}
//Output:
//Enter the number of elements in the first sorted array: 4
//Enter the elements of the first sorted array: 1 2 4 5
//Enter the number of elements in the second sorted array: 5
//Enter the elements of the second sorted array: 2 3 5 6 7
//Union array elements are: 1 2 3 4 5 6 7

//Intersection of arrays using function with user input
#include <iostream>
using namespace std;
void IntersectionArrays(int arr1[], int size1, int arr2[], int size2, int result[], int& resultSize){
    int i = 0, j = 0;
    resultSize = 0;
    while(i < size1 && j < size2){
        if(arr1[i] < arr2[j]){
            i++;
        } else if(arr2[j] < arr1[i]){
            j++;
        } else {
            result[resultSize++] = arr1[i++];
            j++;
        }
    }
}
int main(){
    int n1, n2;
    cout << "Enter the number of elements in the first sorted array: ";
    cin >> n1;
    int arr1[n1];
    cout << "Enter the elements of the first sorted array: ";
    for(int i = 0; i < n1; i++){
        cin >> arr1[i];
    }
    cout << "Enter the number of elements in the second sorted array: ";
    cin >> n2;
    int arr2[n2];
    cout << "Enter the elements of the second sorted array: ";
    for(int j = 0; j < n2; j++){
        cin >> arr2[j];
    }
    int result[min(n1, n2)];
    int resultSize;
    IntersectionArrays(arr1, n1, arr2, n2, result, resultSize);
    cout << "Intersection array elements are: ";
    for(int k = 0; k < resultSize; k++){
        cout << result[k] << " ";
    }
    return 0;
}
//Output:
//Enter the number of elements in the first sorted array: 5
//Enter the elements of the first sorted array: 1 2 3 4 5
//Enter the number of elements in the second sorted array: 4
//Enter the elements of the second sorted array: 3 4 5 6
//Intersection array elements are: 3 4 5

//writing a function for finding single element in an array 
#include <iostream>
using namespace std;
int FindSingleElement(int arr[], int size){
    int result = 0;
    for(int i = 0; i < size; i++){
        result ^= arr[i];
    }
    return result;
}
int main(){
    int n;
    cout << "Enter the number of elements in the array: ";
    cin >> n;
    int arr[n];
    cout << "Enter the elements of the array (all elements except one appear twice): ";
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    int singleElement = FindSingleElement(arr, n);
    cout << "The single element in the array is: " << singleElement << endl;
    return 0;
}
//Output:
//Enter the number of elements in the array: 7
//Enter the elements of the array (all elements except one appear twice): 2 3 5 4 5 3 2
//The single element in the array is: 4

//write a function for finding multiple elements in an array
#include <iostream>
using namespace std;
void FindMultipleElements(int arr[], int size, int result[], int& resultSize){
    bool found[100] = {false}; 
    resultSize = 0;
    for(int i = 0; i < size; i++){
        if(!found[arr[i]]){
            found[arr[i]] = true;
            result[resultSize++] = arr[i];
        }
    }
}
int main(){
    int n;
    cout << "Enter the number of elements in the array: ";
    cin >> n;
    int arr[n];
    cout << "Enter the elements of the array: ";
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    int result[n];
    int resultSize;
    FindMultipleElements(arr, n, result, resultSize);
    cout << "The unique elements in the array are: ";
    for(int j = 0; j < resultSize; j++){
        cout << result[j] << " ";
    }
    return 0;
}
//Output:
//Enter the number of elements in the array: 8
//Enter the elements of the array: 1 2 2 3 4 4 5 1
//The unique elements in the array are: 1 2 3 4 5

//writing a function for finding duplicates in a sorted array
#include <iostream>
using namespace std;
void FindDuplicates(int arr[], int size, int result[], int& resultSize){
    resultSize = 0;
    for(int i = 1; i < size; i++){
        if(arr[i] == arr[i - 1]){
            if(resultSize == 0 || result[resultSize - 1] != arr[i]){
                result[resultSize++] = arr[i];
            }
        }
    }
}
int main(){
    int n;
    cout << "Enter the number of elements in the sorted array: ";
    cin >> n;
    int arr[n];
    cout << "Enter the elements of the sorted array: ";
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    int result[n];
    int resultSize;
    FindDuplicates(arr, n, result, resultSize);
    cout << "The duplicate elements in the array are: ";
    for(int j = 0; j < resultSize; j++){
        cout << result[j] << " ";
    }
    return 0;
}
//Output:
//Enter the number of elements in the sorted array: 10
//Enter the elements of the sorted array: 1 2 2 3 4 4 5 5 6 7

//writing a function for finding duplicates in an unsorted array
#include <iostream>
using namespace std;
void FindDuplicatesUnsorted(int arr[], int size, int result[], int& resultSize){
    bool found[100] = {false}; 
    bool added[100] = {false}; 
    resultSize = 0;
    for(int i = 0; i < size; i++){
        if(found[arr[i]]){
            if(!added[arr[i]]){
                result[resultSize++] = arr[i];
                added[arr[i]] = true;
            }
        } else {
            found[arr[i]] = true;
        }
    }
}
int main(){
    int n;
    cout << "Enter the number of elements in the unsorted array: ";
    cin >> n;
    int arr[n];
    cout << "Enter the elements of the unsorted array: ";
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    int result[n];
    int resultSize;
    FindDuplicatesUnsorted(arr, n, result, resultSize);
    cout << "The duplicate elements in the array are: ";
    for(int j = 0; j < resultSize; j++){
        cout << result[j] << " ";
    }
    return 0;
}
//Output:
//Enter the number of elements in the unsorted array: 9
//Enter the elements of the unsorted array: 3 5 2 3 8 5 6 2 9

//writing a function for finding a pair of elements with sum k in sorted array
#include <iostream>
using namespace std;
bool FindPairWithSum(int arr[], int size, int k, int& first, int& second){
    int left = 0;
    int right = size - 1;
    while(left < right){
        int sum = arr[left] + arr[right];
        if(sum == k){
            first = arr[left];
            second = arr[right];
            return true;
        } else if(sum < k){
            left++;
        } else {
            right--;
        }
    }
    return false;
}
int main(){
    int n, k;
    cout << "Enter the number of elements in the sorted array: ";
    cin >> n;
    int arr[n];
    cout << "Enter the elements of the sorted array: ";
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    cout << "Enter the sum k: ";
    cin >> k;
    int first, second;
    if(FindPairWithSum(arr, n, k, first, second)){
        cout << "Pair found: " << first << " and " << second << endl;
    } else {
        cout << "No pair found with the given sum." << endl;
    }
    return 0;
}
//Output:
//Enter the number of elements in the sorted array: 6
//Enter the elements of the sorted array: 1 2 3 4 5 6
//Enter the sum k: 9
//Pair found: 3 and 6

//writing a function for finding a pair of elements with sum k 
#include <iostream>
using namespace std;
bool FindPairWithSumUnsorted(int arr[], int size, int k, int& first, int& second){
    bool found[100] = {false}; 
    for(int i = 0; i < size; i++){
        int complement = k - arr[i];
        if(complement >= 0 && found[complement]){
            first = arr[i];
            second = complement;
            return true;
        }
        found[arr[i]] = true;
    }
    return false;
}
int main(){
    int n, k;
    cout << "Enter the number of elements in the unsorted array: ";
    cin >> n;
    int arr[n];
    cout << "Enter the elements of the unsorted array: ";
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    cout << "Enter the sum k: ";
    cin >> k;
    int first, second;
    if(FindPairWithSumUnsorted(arr, n, k, first, second)){
        cout << "Pair found: " << first << " and " << second << endl;
    } else {
        cout << "No pair found with the given sum." << endl;
    }
    return 0;
}
//Output:
//Enter the number of elements in the unsorted array: 7
//Enter the elements of the unsorted array: 4 1 5 3 7 2 8
//Enter the sum k: 10


//writing a function for finding max and min in a single scan
#include <iostream>
using namespace std;
void FindMaxMin(int arr[], int size, int& max, int& min){
    max = arr[0];
    min = arr[0];
    for(int i = 1; i < size; i++){
        if(arr[i] > max){
            max = arr[i];
        }
        if(arr[i] < min){
            min = arr[i];
        }
    }
}
int main(){
    int n;
    cout << "Enter the number of elements in the array: ";
    cin >> n;
    int arr[n];
    cout << "Enter the elements of the array: ";
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    int max, min;
    FindMaxMin(arr, n, max, min);
    cout << "Maximum element is: " << max << endl;
    cout << "Minimum element is: " << min << endl;
    return 0;
}
//Output:
//Enter the number of elements in the array: 6
//Enter the elements of the array: 15 22 8 19 31 5
//Maximum element is: 31
//Minimum element is: 5

//Display the elements of a linked list without user input
#include <iostream>
using namespace std;
struct Node{
    int data;
    Node* next;
};
void Display(Node* head){
    Node* current = head;
    cout << "Linked list elements are: ";
    while(current != nullptr){
        cout << current->data << " ";
        current = current->next;
    }
}
int main(){
    Node* head = new Node{10, nullptr};
    head->next = new Node{20, nullptr};
    head->next->next = new Node{30, nullptr};
    head->next->next->next = new Node{40, nullptr};
    Display(head);
    // Free allocated memory
    Node* current = head;
    while(current != nullptr){
        Node* nextNode = current->next;
        delete current;
        current = nextNode;
    }
    return 0;
}
//Output:
//Linked list elements are: 10 20 30 40

//count and sum the nodes of a linked list without user input
#include <iostream>
using namespace std;
struct Node{
    int data;
    Node* next;
};
void CountAndSum(Node* head, int& count, int& sum){
    count = 0;
    sum = 0;
    Node* current = head;
    while(current != nullptr){
        count++;
        sum += current->data;
        current = current->next;
    }
}
int main(){
    Node* head = new Node{5, nullptr};
    head->next = new Node{10, nullptr};
    head->next->next = new Node{15, nullptr};
    head->next->next->next = new Node{20, nullptr};
    int count, sum;
    CountAndSum(head, count, sum);
    cout << "Number of nodes: " << count << endl;
    cout << "Sum of node values: " << sum << endl;
    // Free allocated memory
    Node* current = head;
    while(current != nullptr){
        Node* nextNode = current->next;
        delete current;
        current = nextNode;
    }
    return 0;
}
//Output:
//Number of nodes: 4    
//Sum of node values: 50


//search for a key element in a linked list without user input
#include <iostream>
using namespace std;
struct Node{
    int data;
    Node* next;
};
bool SearchKey(Node* head, int key){
    Node* current = head;
    while(current != nullptr){
        if(current->data == key){
            return true;
        }
        current = current->next;
    }
    return false;
}
int main(){
    Node* head = new Node{7, nullptr};
    head->next = new Node{14, nullptr};
    head->next->next = new Node{21, nullptr};
    head->next->next->next = new Node{28, nullptr};
    int key = 21;
    if(SearchKey(head, key)){
        cout << "Element " << key << " found in the linked list." << endl;
    } else {
        cout << "Element " << key << " not found in the linked list." << endl;
    }
    // Free allocated memory
    Node* current = head;
    while(current != nullptr){
        Node* nextNode = current->next;
        delete current;
        current = nextNode;
    }
    return 0;
}
//Output:
//Element 21 found in the linked list.

//Delete an element from a linked list without user input
#include <iostream>
using namespace std;
struct Node{
    int data;
    Node* next;
};
Node* DeleteElement(Node* head, int key){
    if(head == nullptr){
        return head;
    }
    if(head->data == key){
        Node* temp = head->next;
        delete head;
        return temp;
    }
    Node* current = head;
    while(current->next != nullptr && current->next->data != key){
        current = current->next;
    }
    if(current->next != nullptr){
        Node* temp = current->next;
        current->next = current->next->next;
        delete temp;
    }
    return head;
}
int main(){
    Node* head = new Node{3, nullptr};
    head->next = new Node{6, nullptr};
    head->next->next = new Node{9, nullptr};
    head->next->next->next = new Node{12, nullptr};
    int key = 9;
    head = DeleteElement(head, key);
    cout << "Linked list after deleting element " << key << ": ";
    Node* current = head;
    while(current != nullptr){
        cout << current->data << " ";
        current = current->next;
    }
    // Free allocated memory
    current = head;
    while(current != nullptr){
        Node* nextNode = current->next;
        delete current;
        current = nextNode;
    }
    return 0;
}
//Output:
//Linked list after deleting element 9: 3 6 12

//check if a linked list is sorted without user input
#include <iostream>
using namespace std;
struct Node{
    int data;
    Node* next;
};
bool IsSorted(Node* head){
    if(head == nullptr || head->next == nullptr){
        return true;
    }
    Node* current = head;
    while(current->next != nullptr){
        if(current->data > current->next->data){
            return false;
        }
        current = current->next;
    }
    return true;
}
int main(){
    Node* head = new Node{2, nullptr};
    head->next = new Node{4, nullptr};
    head->next->next = new Node{6, nullptr};
    head->next->next->next = new Node{8, nullptr};
    if(IsSorted(head)){
        cout << "The linked list is sorted." << endl;
    } else {
        cout << "The linked list is not sorted." << endl;
    }
    // Free allocated memory
    Node* current = head;
    while(current != nullptr){
        Node* nextNode = current->next;
        delete current;
        current = nextNode;
    }
    return 0;
}
//Output:
//The linked list is sorted.

//Merge two linked lists without user input
#include <iostream>
using namespace std;
struct Node{
    int data;
    Node* next;
};
Node* MergeLists(Node* head1, Node* head2){
    if(head1 == nullptr) return head2;
    if(head2 == nullptr) return head1;
    Node* mergedHead = nullptr;
    if(head1->data < head2->data){
        mergedHead = head1;
        head1 = head1->next;
    } else {
        mergedHead = head2;
        head2 = head2->next;
    }
    Node* current = mergedHead;
    while(head1 != nullptr && head2 != nullptr){
        if(head1->data < head2->data){
            current->next = head1;
            head1 = head1->next;
        } else {
            current->next = head2;
            head2 = head2->next;
        }
        current = current->next;
    }
    if(head1 != nullptr){
        current->next = head1;
    } else {
        current->next = head2;
    }
    return mergedHead;
}
int main(){
    Node* head1 = new Node{1, nullptr};
    head1->next = new Node{3, nullptr};
    head1->next->next = new Node{5, nullptr};
    Node* head2 = new Node{2, nullptr};
    head2->next = new Node{4, nullptr};
    head2->next->next = new Node{6, nullptr};
    Node* mergedHead = MergeLists(head1, head2);
    cout << "Merged linked list elements are: ";
    Node* current = mergedHead;
    while(current != nullptr){
        cout << current->data << " ";
        current = current->next;
    }
    // Free allocated memory
    current = mergedHead;
    while(current != nullptr){
        Node* nextNode = current->next;
        delete current;
        current = nextNode;
    }
    return 0;
}
//Output:
//Merged linked list elements are: 1 2 3 4 5 6

//Concatenate two linked lists without user input
#include <iostream>
using namespace std;
struct Node{
    int data;
    Node* next;
};
Node* ConcatenateLists(Node* head1, Node* head2){
    if(head1 == nullptr) return head2;
    Node* current = head1;
    while(current->next != nullptr){
        current = current->next;
    }
    current->next = head2;
    return head1;
}
int main(){
    Node* head1 = new Node{10, nullptr};
    head1->next = new Node{20, nullptr};
    head1->next->next = new Node{30, nullptr};
    Node* head2 = new Node{40, nullptr};
    head2->next = new Node{50, nullptr};
    head2->next->next = new Node{60, nullptr};
    Node* concatenatedHead = ConcatenateLists(head1, head2);
    cout << "Concatenated linked list elements are: ";
    Node* current = concatenatedHead;
    while(current != nullptr){
        cout << current->data << " ";
        current = current->next;
    }
    // Free allocated memory
    current = concatenatedHead;
    while(current != nullptr){
        Node* nextNode = current->next;
        delete current;
        current = nextNode;
    }
    return 0;
}
//Output:
//Concatenated linked list elements are: 10 20 30 40 50 60

//Reverse the elements of a linked list without user input
#include <iostream>
using namespace std;
struct Node{
    int data;
    Node* next;
};
Node* ReverseList(Node* head){
    Node* prev = nullptr;
    Node* current = head;
    Node* next = nullptr;
    while(current != nullptr){
        next = current->next;
        current->next = prev;
        prev = current;
        current = next;
    }
    return prev;
}
int main(){
    Node* head = new Node{1, nullptr};
    head->next = new Node{2, nullptr};
    head->next->next = new Node{3, nullptr};
    head->next->next->next = new Node{4, nullptr};
    head->next->next->next->next = new Node{5, nullptr};
    head = ReverseList(head);
    cout << "Reversed linked list elements are: ";
    Node* current = head;
    while(current != nullptr){
        cout << current->data << " ";
        current = current->next;
    }
    // Free allocated memory
    current = head;
    while(current != nullptr){
        Node* nextNode = current->next;
        delete current;
        current = nextNode;
    }
    return 0;
}
//Output:
//Reversed linked list elements are: 5 4 3 2 1

//Create and display a circular linked list without user input
#include <iostream>
using namespace std;
struct Node{
    int data;
    Node* next;
};
void DisplayCircularList(Node* head){
    if(head == nullptr) return;
    Node* current = head;
    cout << "Circular linked list elements are: ";
    do{
        cout << current->data << " ";
        current = current->next;
    } while(current != head);
}
int main(){
    Node* head = new Node{100, nullptr};
    head->next = new Node{200, nullptr};
    head->next->next = new Node{300, nullptr};
    head->next->next->next = head; // Making it circular
    DisplayCircularList(head);
    // Free allocated memory
    Node* current = head->next;
    head->next = nullptr; // Break the circular link
    while(current != nullptr){
        Node* nextNode = current->next;
        delete current;
        current = nextNode;
    }
    delete head;
    return 0;
}
//Output:
//Circular linked list elements are: 100 200 300

//Create a doubly linked list , insert in a doubly linked list and reverse a doubly linked list without user input
#include <iostream>
using namespace std;
struct Node{
    int data;
    Node* next;
    Node* prev;
};
void InsertEnd(Node** head, int value){
    Node* newNode = new Node{value, nullptr, nullptr};
    if(*head == nullptr){
        *head = newNode;
        return;
    }
    Node* current = *head;
    while(current->next != nullptr){
        current = current->next;
    }
    current->next = newNode;
    newNode->prev = current;
}
void ReverseDoublyList(Node** head){
    Node* current = *head;
    Node* temp = nullptr;
    while(current != nullptr){
        temp = current->prev;
        current->prev = current->next;
        current->next = temp;
        current = current->prev;
    }
    if(temp != nullptr){
        *head = temp->prev;
    }
}
void DisplayDoublyList(Node* head){
    Node* current = head;
    cout << "Doubly linked list elements are: ";
    while(current != nullptr){
        cout << current->data << " ";
        current = current->next;
    }
}
int main(){
    Node* head = nullptr;
    InsertEnd(&head, 10);
    InsertEnd(&head, 20);
    InsertEnd(&head, 30);
    InsertEnd(&head, 40);
    DisplayDoublyList(head);
    cout << endl;
    ReverseDoublyList(&head);
    cout << "Reversed doubly linked list elements are: ";
    DisplayDoublyList(head);
    // Free allocated memory
    Node* current = head;
    while(current != nullptr){
        Node* nextNode = current->next;
        delete current;
        current = nextNode;
    }
    return 0;
}
//Output:
//Doubly linked list elements are: 10 20 30 40
//Reversed doubly linked list elements are: 40 30 20 10

