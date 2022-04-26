#include<stdio.h>
#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int a,b,c,big=0;
    cout<<"enter value for A:";
    cin>>a;
    cout<<"enter value for B:";
    cin>>b;
    cout<<"enter value for C:";
    cin>>c;
    if(a>big)
    big=a;
    if(b>big)
    big=b;
    if(c>big)
    big=c;
    cout<<"Biggest of above given three number is"<<big;
    
    
    
    
    return 0;
}