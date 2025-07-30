#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the size of the array: ";
    cin>>n;
    int arr[n];
    int sum=0;
    cout<<"Enter " <<n<< " elements: "<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        sum+=arr[i];
    }
    float average= static_cast<float>(sum)/n;
    cout<<"Sum of the array is: "<<sum<<endl;
    cout<<"Average of the array is: "<<average<<endl;
    return 0;
}
