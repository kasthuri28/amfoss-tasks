#include <iostream>
#include<string.h>
using namespace std;

int main() {
    int hh,mm,ss;
    char ch[2];
    cin>>hh;
    cout<<":";
    cin>>mm;
    cout<<":";
    cin>>ss;
    cin.getline(ch,2);
    if(strcmp(ch,"am")==0)
      cout<<hh<<":"<<mm<<":"<<ss;
    else
     {
        hh=hh+12;
        cout<<hh<<":"<<mm<<":"<<ss;
     }
	return 0;
}
