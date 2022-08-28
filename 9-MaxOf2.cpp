#include <iostream>
using namespace std;
int maxi(int a, int b)
{
    if(a > b)
        return a;
    else 
        return b;
}
int main()
{
    int a,b;
    cout<<"Enter two numbers a & b: ";
    cin>>a>>b;
    cout<<"Maximum value entered = "<<maxi(a,b)<<endl;
    return 0;
}