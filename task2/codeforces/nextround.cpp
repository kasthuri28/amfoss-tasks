#include <iostream>
using namespace std;

int main() 
  {
	int p,f;
   int 	s=0;
	int a[10]; 
	cin>>p>>f;
	for(int i=0;i<p;i++)
	cin>>a[i];
    for(int j=0;j<p;j++)
    {
      if(a[f]>=a[j])
      s++;
    }
    cout<<s;
	return 0;
}
