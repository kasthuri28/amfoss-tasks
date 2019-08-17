#include <iostream>
using namespace std;

int main() {
    int i,j,k;
    int n;
    cin>>n;
    for(i=n;i>0;i--)
    {
     for(j=i;j>0;j--)
      cout<<" ";
     for(k=i;k<=n;k++)
     cout<<"#";
     cout<<"\n";
    }
	// your code goes here
	return 0;
}
