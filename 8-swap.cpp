#include <iostream>
using namespace std;
void swapNums(int &a, int &b)
{
    a = a + b;
    b = a - b;
    a = a - b;
}
int main()
{
    int a,b;
    cout<<"Enter two numbers a & b: ";
    cin>>a>>b;
    cout<<"Before Swapping"<<endl<<" a = "<<a<<" b = "<<b<<endl;
    swapNums(a,b);
    cout<<"After Swapping"<<endl<<" a = "<<a<<" b = "<<b<<endl;

    return 0;
}