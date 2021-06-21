#include<iostream>
using namespace std;

struct st
{
  int num1,num2;
  int addnum(int n1,int n2);
};
int st::addnum(int n1,int n2)
{
  return n1+n2+num1+num2;
}
union ut
{
    int num1,num2;
    int subnum(int n1,int n2);
};
int ut::subnum(int n1,int n2)
{
    return n1-n2;
}
int main()
{
    st st1 ;
    st1.num1 = 100;
    st1.num2 = 200;
    int res;
    res = st1.addnum(100,200);
    cout<<"Addition Result is \t"<<res<<endl;
    ut ut1;
    ut1.num1 = 100;
    ut1.num2 = 200;
    int res1;
    res1 = ut1.subnum(400,200);
    cout<<"Subtraction result is \t"<<res1<<endl;

}
