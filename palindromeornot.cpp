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
        int num=n;
        while(n!=0)
        {
            r = n % 10;
            rev=(rev*10)+r;
            n=n/10;
        }
        if(num==rev){
        cout<<"Palindrome"<<endl;
        }
        else{
            cout<<"Not Palindrome"<<endl;
        }
    }
};
int main()
{
    numbers o;
    o.calculation();
    return 0;
}

