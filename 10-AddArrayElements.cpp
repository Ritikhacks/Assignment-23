#include <iostream>
using namespace std;

void inputArray(int *arr, int n)
{
    cout<<"Enter elements of array:";
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    
}
void printArray(int *arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    
}
int sumArrayElements(int *arr, int n)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    return sum;
}
int main()
{
    int n;
    cout<<"Enter length of array: ";
    cin>>n;
    int arr[n];
    inputArray(arr,n);
    cout<<"Sum of each elements of array = "<<sumArrayElements(arr,n)<<endl;
    return 0;
}