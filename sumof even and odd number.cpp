#include<iostream>
using namespace std;
class evenodd{
    public:
    void check(){
        int x;
        cin>>x;
        int even = 0;
        int odd = 0;
        for (int i=1; i<=x; i++){
            if(i%2==0){
                even = even+ i;
            }else{
                odd = odd + i;
            }
        }
        cout<<"total even "<<even<<endl;
        cout<<"total odd "<<odd<<endl;
    }
};
int main(){
    evenodd obj;
    obj.check();
    return 0;
}
