#include<iostream>
using namespace std;
class Encapsulation
{
private:
    int x;
public:
    void set(int a)
    {
        x=a;
    }
    int get()
    {
        return x;
    }
};
int main()
{
    Encapsulation o;
    o.set(5);
    cout<<o.get()<<endl;
    return 0;
}
