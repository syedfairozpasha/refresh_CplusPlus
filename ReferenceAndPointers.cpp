#include<iostream>
using namespace std;

void funcwithrefargs(int refparam[],int size)
{
  for (int ivar = 0; ivar<size;ivar++)
  {
     refparam[ivar] = refparam[ivar]+1;
    // refparam++;
  }
} 

void funcwithrefargs2(int (&refparam)[4],int size)
{
  for (int ivar = 0; ivar<size;ivar++)
  {
     refparam[ivar] = refparam[ivar]+1;
    // refparam++;
  }
}

void funcwithrefargs3(int *refparam,int size)
{
  for (int ivar = 0; ivar<size;ivar++)
  {
     refparam[ivar] = refparam[ivar]+1;
    // refparam++;
  }
}
int main()
{
  int arr[4] = {1,2,3,4};
  cout<<"Before\t"<<arr[0]<<endl;
  funcwithrefargs(arr,4);
  cout<<"after \t"<<arr[0]<<endl;
  cout<<"Before\t"<<arr[0]<<endl;
  funcwithrefargs2(arr,4);
  cout<<"after \t"<<arr[0]<<endl;
  cout<<"Before\t"<<arr[0]<<endl;
  funcwithrefargs3(arr,4);
  cout<<"after \t"<<arr[0]<<endl;
}