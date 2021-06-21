#include<iostream>

using namespace std;
int func1(int &arrp,int size)
{
 for(int i=1; i<size;i++)
 {
     (arrp) = 100;
     arrp++;
 }
 //arrp++;
 //*arrp = 100;


 return 1;
}

int main()
{
    int ar[5] ;
    int z;
    z = func1(*ar,5);
    cout<<ar[1]<<endl<<ar[2]<<endl<<ar[3];
    return 0;
}
