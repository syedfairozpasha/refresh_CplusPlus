#include<iostream>

using namespace std;

int main()
{
    int *intptr;
    float *fltptr;
    int p[3] = {1,2,3};
    float f[3] = {11.11,22.22,33.33};
    cout<<sizeof(intptr)<<endl;
    cout<<sizeof(fltptr)<<endl;
    intptr = (int*)f;
    fltptr = (float*)p;
    //cout<<intptr[1]<<endl<<fltptr[1];
    cout<<sizeof(intptr)<<endl;
    cout<<sizeof(fltptr)<<endl;
    return 0;
}