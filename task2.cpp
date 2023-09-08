#include<iostream>

using namespace std;

int main(){
    
char op , conti;

int num1;
    
int num2;
    
do{
        
cout<<"Calculator:";
        
cin>>op;
        
cout<<"\n first number:";
        
cin>>num1;
        
cout<<"\n second number:";
        
cin>>num2;
        
switch(op)
{
            
case'+':
                
cout<<"num1"<<"+"<<"num2="<<num1+num2;
                
break;
            
case'-':
                
cout<<"num1"<<"-"<<"num2="<<num1-num2;
                
break;
            
case'*':
                
cout<<"num1"<<"*"<<"num2="<<num1*num2;
                
break;
            
case'/':
                
cout<<"num1"<<"/"<<"num2="<<num1/num2;
                
break;
            
default:
                
break;
        
}
        
cout<<"\n Want to continue?(y/n)=";
        
cin>>conti;
    
}while(conti=='y');
    
return 0;

}