#include<iostream>

using namespace std;

int main()
{
    int *p;
    try
    {
        p = new int[10];
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    for (int i = 0;i<10;i++)
    {
        p[i] = i;
    }
    for (int i = 0;i<10;i++)
    {
        cout<<p[i]<<endl;
    }
    delete []p;
    try
    {
        delete []p;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    
    
    return 1;
}