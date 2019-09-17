#include <iostream>
using namespace std;
class time{
public:
    int a;
    float b;
     double int  c;

    void read()
    {
        cout<<"enter a ";
        cin>>a;
        cout<<"enter b ";
        cin>>b;

    }
    int show(int aa)
    {
        cout<<"a+b is "<<aa;
        return 0;
    }
    int add()
    {
        c=a+b;
        return c;
    }

};
int main()
{
    time t;
    t.read();
    t.add();
    t.show(c);
    return 1;
}
