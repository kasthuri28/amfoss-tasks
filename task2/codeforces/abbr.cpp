#include <iostream>
#include<string.h>
using namespace std;
struct word
{
  char ch[100];
};


int main()
 {
    int n;
	word w[10];
	cin>>n;
	for(int i=0;i<n;i++) 
	   cin>>w[i].ch;
	for(int j=0;j<n;j++)
	  {
	    if(strlen(w[j].ch)>10)
	     cout<<w[j].ch[0]<<strlen(w[j].ch)-2<<w[j].ch[strlen(w[j].ch)-2];
	    else
	     cout<<w[j].ch;
	  }
	  
	return 0;
}
