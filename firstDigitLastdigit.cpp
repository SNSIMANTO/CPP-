#include<iostream>
using namespace std;
class numbers{
    public:
    void calculation()
    {
        int n; cin>>n;
        int result=n%10;
        cout<<result<<endl;
    }
};
int main()
{
    numbers o; o.calculation();
    return 0;
}
