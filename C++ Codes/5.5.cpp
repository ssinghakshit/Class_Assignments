/*
Tasnimur Rahman Anas
C++ Program to marge to marge 2 different arrays and find max number
*/

#include <iostream>
using namespace std;
int main()
{
    int m,n,i,j,k,max;
    cout<<"Input how many numbers you want to input in array 1: ";
    cin>>m;
    int a[m];
    
    for (i=1;i<=m;i++)
        {cout<<"input "<<i<<"th number: ";
        cin>>a[i-1];
		}
    cout<<"Input how many numbers you want to input in array 2: ";
    cin>>n;
    int b[n];
    for (i=1;i<=n;i++)
        {
			cout<<"Input "<<i<<"th number: ";
        	cin>>b[i-1];
		}
    k=m+n;
    int c[k];
    for (i=0;i<=m-1;i++)
        {
			c[i]=a[i];
		}
    for (i=0,j=m;i<=n-1;i++,j++)
        {
			c[j]=b[i];
		}
    cout<<endl<<"Total size of new array is: "<<k<<endl<<endl;
    for (i=0;i<k;i++)
        {
			cout<< i+1 <<"th value of new array: "<<c[i]<<endl;
		}
    max=c[k-1];
    for (i=1;i<=k;i++)
        {
			if (max<c[i-1])
        	max=c[i-1];
		}
    cout<<endl<<"Max number is: "<<max<<endl;
    return 0;
}
