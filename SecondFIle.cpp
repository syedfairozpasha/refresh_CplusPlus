#include<iostream>

using namespace std;

int main()
{
    int *ptr;
    int var = 200;
    ptr = &var;
    int arr[3] = {10,20,30};
    int arr2[3] = {40,50,60};

    int *arrptr = arr;
    cout<<"ptr value \t"<<ptr<<endl;
    cout<<"ptr contents \t"<<*ptr<<endl;
    cout<<*arrptr<<endl;
    arrptr++;
    cout<<*arrptr<<endl;

    return 0;
}

