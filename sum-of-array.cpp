#include <iostream.h>
#include <conio.h>

void main() {
    int arr[10], n, sum = 0;
    
    cout << "Enter the size of array: ";
    cin >> n;
    
    cout << "Enter the elements of array: ";
    for(int i=0; i<n; i++) {
        cin >> arr[i];
        sum += arr[i];
    }
    
    cout << "The sum of elements of array is: " << sum;
    
}
