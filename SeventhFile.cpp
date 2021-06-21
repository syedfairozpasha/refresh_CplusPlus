#include<iostream>
using namespace std;

int abs(int i);
int abs(double d);
//int abs(int i,int j);
//int abs(double f);
//double abs(double d,int j);

int main()
{
    int num1,num2,res;
    num1 = 100;
    num2 = -500;
    res=abs(num2);
    cout<<"Resulst is "<<res<<endl;
    res = abs(45.678);
    cout<<"Result of abs is\t"<<res<<endl;
   // res = abs(num2,100);
    //cout<<"second result is\t"<<res<<endl;
}
int abs(int n)
{
 return n<0 ? -n : n;
}
int abs(double d)
{
    return d<0 ? -d : d;
}

/*
int abs(double n)
{
 return n<0 ? -n : n;
}
int abs(int n,int o)
{
 return n<0 ? -n : n;
}*/