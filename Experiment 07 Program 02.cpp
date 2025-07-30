#include <iostream>
using namespace std;

int main()
{
    int n;

    cout << "Enter the number of elements in the array: ";
    cin >> n;

    int arr[n]; 

    cout << "Enter " << n << " elements:\n";
    for (int i = 0; i < n; i++) 
    {
        cout << "Element " << i + 1 << ": ";
        cin >> arr[i];
    }

     cout << "\nArray elements are:\n";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

 int search;
    cout << "\n\nEnter the element that needs to be searched: ";
    cin >> search;

    bool found = false;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == search)
        {
            cout << "Element found at index " << i << " (Element: " << arr[i] << ")" << endl;
            found = true;
            break;
        }
    }

    if (!found)
    {
        cout << "Element not found." << endl;
    }

    return 0;
}
