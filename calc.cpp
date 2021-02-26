#include <iostream>
using namespace std;
char awnser;
int main() {
start:
  cout << "hi and welcome to calculator press c for controls\n";
  cout << "please do not use capital letters\n";
  cin>>awnser;
  bool v_or_c = false;
 float multia = 0;
float multi1 = 0;
 float multi2 = 0;
float adda = 0;
float  add1 = 0;
float  add2 = 0;
float  suba = 0;
 float sub1 = 0;
 float sub2 = 0;
 float diva = 0;
 float div1 = 0;
float  div2 = 0;
char restart;
 if (awnser == 'm'){
         cout<< "first number";
         cin>>multi1;
         cout<< "second number";
         cin>>multi2;
         multia = multi1*multi2;
         cout<<multia;
 }
 if (awnser == 'd'){
         cout<< "first number";
         cin>>div1;
         cout<< "second number";
         cin>>div2;
         diva = div1/div2;
         cout<<diva;
 }
  if (awnser == 'a'){
         cout<< "first number";
         cin>>add1;
         cout<< "second number";
         cin>>add2;
         adda = add1+add2;
         cout<<adda;
 }
 if (awnser == 's'){
         cout<< "first number";
         cin>>sub1;
         cout<< "second number";
         cin>>sub2;
         suba = sub1-sub2;
         cout<<suba;}
if (awnser == 'c'){cout<< "m to multiply a to add   \n";
cout<<"s to subtract d to divide press v for version \n";
v_or_c = true;
}


         if (awnser == 'v'){ cout<< "this is version 2.02 of calculator  \n";
         v_or_c = true;}

        if (v_or_c == false){cout<<" would you like to make another calculation y/n ";
         cin>> restart;}
          if (v_or_c == true){cout<<" would you like to make a calculation y/n ";
         cin>> restart;}
 if ( restart == 'y'){goto start;}

  if (restart == 'n'){ cout<<"thank you for using calculator";}

}
