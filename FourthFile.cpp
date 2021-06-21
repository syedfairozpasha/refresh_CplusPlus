#include<iostream>

using namespace std;

int main()

{
    int numbr[2] = {1,2};
    int numbarr[2][3] = {{10,20,30},{40,50,60}};
    int *numbrptr = numbr;
    int (*numbrarrptr)[3] = numbarr;
    int (*numbrarrptr2)[3] = &(numbarr[0]);
    int *anotherptr;
    int *dummyptr = nullptr;
    int *dptr ;
    anotherptr = (int*)numbarr;
    cout<<"1d arry address  "<<numbrptr<<endl;
    cout<<"1d array contents    "<<numbrptr[0];
    cout<<"------------------------------"<<endl;
    cout<<"2D array contents arr[0][0]  "<<(*numbrarrptr+1)[0]<<endl;
    cout<<"2D array contents   "<<*(anotherptr+1)<<endl;
    cout<<dummyptr<<endl;
    cout<<*dptr<<endl;
    return 0;
}