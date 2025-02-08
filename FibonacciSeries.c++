#include <iostream>
using namespace std;

int main()
{
    int n1, n2, n3, i, number;  // Added missing semicolon
    n1 = 0;
    n2 = 1;
    cout << "Enter the number of elements: ";
    cin >> number;

    // Handle invalid input
    if (number <= 0) {
        cout << "Please enter a positive integer!";
        return 1;
    }

    cout << n1 << " " << n2 << " ";  // Fixed formatting and comment
    for (i = 2; i < number; i++)     // Correct loop for remaining elements
    {
        n3 = n1 + n2;  // Added missing semicolon
        cout << n3 << " ";
        n1 = n2;
        n2 = n3;
    }
    return 0;
}