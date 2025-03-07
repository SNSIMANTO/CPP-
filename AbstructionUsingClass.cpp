#include<iostream>
using namespace std;
class abstruct
{
private:
    int a,b;
public:
    void set(int x,int y)
    {
        a=x;
        b=y;
    }
    void display()
    {
        cout<<"a="<<a<<endl;
        cout<<"b="<<b<<endl;
    }
};
int main()
{
    abstruct o;
    o.set(4,5);
    o.display();
    return 0;
}
