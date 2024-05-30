#include<iostream>
using namespace std;
class one
{
    public:
    int num[3]={1,2,3};

    void func()
    {
        for(int var:num)
        {
            cout<<var<<endl;
        }
    }
};

int main()
{
    one o1;
    o1.func();
    return 0;
}