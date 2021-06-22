#include<iostream>

using namespace std;

class cls
{
int x,y,z;
public:
  cls(int n1)
  {
      this->x = n1;
      cout<<"In the 1 arg constructor"<<endl;
  }
   cls(int n1,int n2)
  {
      this->x = n1;
      this->y = n2;
      cout<<"In the 2 arg constructor"<<endl;
  }
  cls(int n1,int n2,int n3)
  {
      this->x = n1;
      this->y = n2;
      this->z  = n3;
      cout<<"In the 3 arg constructor"<<endl;
  }
  void displayvalues()
  {
      cout<<this->x<<endl;
      cout<<this->y<<endl;
      cout<<this->z<<endl;
  }
};
int main()
{
    cls obj[2] ={cls(1,2,3),cls(4,5,6)};
    cls *ptrobj;
    ptrobj = obj;
    ptrobj->displayvalues();
    ptrobj++;
    ptrobj->displayvalues();
}