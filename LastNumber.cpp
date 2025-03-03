//Write a program for getting an output of the first digit of a number
#include<iostream>
using namespace std;
class numbers
{
public:
    void calculation()
    {
        int n;
        cin>>n;
        int r;
        // int result=n%10;
        //cout<<result<<endl;
        while(n!=0)
        {
            r = n % 10;
            //cout<<r<<endl;
            n=n/10;
        }
        cout<<r<<endl;
    }
};
int main()
{
    numbers o;
    o.calculation();
    return 0;
}

