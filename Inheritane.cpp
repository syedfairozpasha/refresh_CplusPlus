#include<iostream>
using namespace std;

class baseclass
{
private:
 int pr_var1;
 void setvalue(int n)
 {
     this->pr_var1 = n;
 }
public:
 int pub_var1;
 void pub_setvalue(int n)
 {
   this->pub_var1 = n;
   cout<<"In the base class set value func"<<endl;
 }
 baseclass()
 {
     cout<<"In the base class constructor"<<endl;
 }
 virtual void derivfunc()
 {
     cout<<"In the base class"<<endl;
 }
protected:
int prot_var1;
void prot_setvalue(int n)
{
    this->prot_var1 = n;
}
};
class privclass : public baseclass
{
  public:
  privclass()
  {
      cout<<"in the derived constructor"<<endl;
      
  }
  virtual void derivfunc()
  {
      cout<<"IN the derived class function"<<endl;
      pub_setvalue(1000);
  }
  void samplederivfunc()
  {
      cout<<"IN Deriv"<<endl;
  }
};
int main()
{
    baseclass *baseobj = new baseclass();
    privclass *derivobj = new privclass();
    baseobj->pub_setvalue(100);
    baseobj = derivobj;
    baseobj->derivfunc();
    derivobj->samplederivfunc();
    //baseobj->pub_setvalue(100);
}