#include<iostream>

using namespace std;
class class2;
class frclass;
class class1
{
    int var1;
    public:
    class1(int x)
    {
        this->var1=x;
        //cout<<"In the class1 constructor";
    }
    friend int func1(class1,class2);
    friend class frclass;
};
class class2
{
    int var1;
    public:
    class2(int y)
    {
        this->var1 = y;
        //cout<<"In the class2 constructor";
    }
    friend int func1(class1,class2);
};
int func1(class1 cls1,class2 cls2)
{
    return cls1.var1+cls2.var1;
} 
class frclass
{
    int xyz;
    public:
    frclass(int var1)
    {
        this->xyz = var1;
    }
    void showvalues(class1 ob)
    {
        cout<<"Damn values\t"<<ob.var1+1000<<endl;

    }
};

int main()
{
    class1 obj1(100);
    class2 obj2(200);
    frclass frobj(300);
    int z ;
    z = func1(obj1,obj2);
    frobj.showvalues(obj1);
    cout<<z<<endl;
}
