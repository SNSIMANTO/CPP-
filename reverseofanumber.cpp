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
        int rev=0;
        // int result=n%10;
        //cout<<result<<endl;
        while(n!=0)
        {
            r = n % 10;
            rev=(rev*10)+r;
            //cout<<r<<endl;
            n=n/10;
        }
        cout<<rev<<endl;
    }
};
int main()
{
    numbers o;
    o.calculation();
    return 0;
}
