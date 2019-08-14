#include<iostream>
class string 
 {
   public: 
   char a[100];
   char  b[4]; 
   void input ()
     {
      cin.getline(a,100);
     }
    void output ()
     {
      if(strlen(a)>10)
     {  b[0]=a[0];
        b[1]=strlen(a)-2;
        b[2]=a[strlen(a)-2];
     } 
     }
 }
 int main()
  {
     string s[10];
     for(int i=0;i<5;i++)
        s[i].input();
      for(int j=0;j<5;j++)
       s[j].output();
       
     return()
  }
