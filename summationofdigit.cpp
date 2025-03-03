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
        int sum=0;
        // int result=n%10;
        //cout<<result<<endl;
        while(n!=0)
        {
            r = n % 10;
            sum=sum+r;
            //cout<<r<<endl;
            n=n/10;
        }
        cout<<sum<<endl;
    }
};
int main()
{
    numbers o;
    o.calculation();
    return 0;
}
