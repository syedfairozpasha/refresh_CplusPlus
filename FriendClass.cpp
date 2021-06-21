#include<iostream>

using namespace std;

class mainclass
{
private:
 int private_var1=100;
protected:
 int prot_var=200;
public:
mainclass()
{
    cout<<"in the the base class constructor"<<endl;
}
friend class frclass;
friend void frfunc(mainclass mc);
};
void frfunc(mainclass mx)
{
    cout<<mx.private_var1<<endl;
}
class frclass
{
  public:
  
  frclass()
  {
      cout<<"In the constructor of friend class"<<endl;
  }
  int addvalues(mainclass mc)
  {
      return mc.private_var1+mc.prot_var;
  }
};
int main()
{
    mainclass mc;
    frclass fc;
    int res = fc.addvalues(mc);
    cout<<"The result is \t"<<res;
}