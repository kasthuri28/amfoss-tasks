#include <iostream>
using namespace std;

int main() 
{
  int a[50];
  int n,x=0,k=0;
  for(int i=0;i<22;i++)
  {
      cin>>a[i];
     if(a[i]==0)
       k++;
     else 
      x++;
  }
        if(k==7)
        cout<<"YES";
       
      
     
       if(x==7)
       cout<<"YES";
     if((!x==7)||(!k==7))
     cout<<"NO";
     
	return 0;
}
