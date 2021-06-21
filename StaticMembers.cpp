#include<iostream>
using namespace std;

class sampleclass
{
    public:
    sampleclass()
    {
        cout<<"In the base class constructor"<<endl;
    }
    void setvalue(int vl)
    {
        ivar1 = vl;
    }
    int ivar2;
    static int stfunc(int var2);
    static int ivar1;
};
int sampleclass::ivar1;
int sampleclass::stfunc(int var2)
{
   ivar1 = var2;
   return ivar1;
}
int main()
{
    sampleclass sc,sc2;
    sc.setvalue(100);
    cout<<sc.ivar1<<endl;
    sampleclass::ivar1 = 1111;
     cout<<sc.ivar1<<endl;
    sampleclass::stfunc(2222);
    cout<<sc.ivar1<<endl;
    cout<<"Another object\t"<<sc2.ivar1<<endl;
    return 0;
}