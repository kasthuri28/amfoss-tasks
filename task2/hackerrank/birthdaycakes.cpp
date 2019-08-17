#include <iostream>
using namespace std;
int birthdaycakes(int a[50],int n)
{
    int s=0,k;
    for(int i=0;i<n;i++)
    {
        if(a[0]<a[i])
        {
            k=a[0];
            a[0]=a[i];
            a[i]=k;
        }
    }
   for(int j=0;j<n;j++)
    {
        if(a[0]=a[j])
        s++;
    }
   return s;
}

int main()
{
	int a[50];
	int n;
	cout<<"enter the values of candles";
	cin>>n;
	cout<<"enter the values of heights";
	for(int i=0;i<n;i++)
	cin>>a[i];
	int k = birthdaycakes(a,n);
	cout<<k;
	return 0;
}
	
