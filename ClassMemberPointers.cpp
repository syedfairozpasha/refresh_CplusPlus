#include<iostream>
using namespace std;

class cl
{
    public:
    int ivar;
    cl(int xyz)
    {
        this->ivar = xyz;
    }
    int clfunc()
    {
        cout<<"inside the function"<<endl;
        return 0;
    }
};
int main()
{
    cl obj(1111);
    int cl::*datamember;
    int (cl::*funcptr)();
    int cl::*data;
    int (cl::*func)();
    data = &cl::ivar;
    func = &cl::clfunc;
    cout<< obj.*data <<endl;
    cout<<(obj.*func)();
}