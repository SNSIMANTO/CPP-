#include<iostream>
using namespace std;

class state
{
    public:
    string name;
    int id;
    double result;
    void printfunc();
};
void state::printfunc()
{
    cout<<"State University";
}
int main(){
state obj;
obj.printfunc();
return 0;
}
