#include<iostream>
using namespace std;
class p{
public:
    void prime(){
    int number;
    cin>>number;
    for(int i=2;i<number;i++){
        if(number%i==0){
            cout<<"Not a prime number"<<endl;
            break;
        }
    }
    }
};
int main(){
    p o;
    o.prime();
    return 0;
}
