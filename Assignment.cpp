#include<iostream>
using namespace std;

class cls
{
  public:
  int ivar1;
  cls()
  {
      cout<<"In the constructor"<<endl;
  }
  void setvalue(int var)
  {
      this->ivar1 = var;
  }
};
int main()
{
    cls obj1,obj2;
    obj1.setvalue(100);
    obj2 = obj1;
    cout<<"The value of obj2 is "<<obj2.ivar1<<endl;
}
