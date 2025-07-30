#include <iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the size of the array: ";
    cin>>n;
    int numbers[n];
    for (int i=0;i<n;i++)
    {
        cout<<"Enter element of the array: ";
        cin>>numbers[i];
    }
    cout<<"The reversed array is: "<<endl;
    for(int j = n-1;j >= 0;j--)
    {
        cout<<numbers[j]<<" ";
    }
}
