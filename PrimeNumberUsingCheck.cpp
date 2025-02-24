#include<iostream>
using namespace std;
class p{
public:
    void prime(){
    int number;
    int check=1;
    cin>>number;
    for(int i=2;i<number;i++){
        if(number%i==0){
            check=0;
            cout<<"Not a prime number"<<endl;
            break;
        }
    }
    if(check==1){
        cout<<"Prime Number"<<endl;
    }
}
};
int main(){
    p o;
    o.prime();
    return 0;
}
