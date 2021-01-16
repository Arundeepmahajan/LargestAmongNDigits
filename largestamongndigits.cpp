#include <iostream>
using namespace std;
int main()
{int n,i,max;
int a[100000];
    cout<<"Enter the size of the array";
    cin>>n;
    cout<<"Enter the array element";
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    max=a[0];
    for(i=0;i<n;i++)
    {
    if(a[i]>max)
    max=a[i];
    }
    cout<<max;
}