#include <iostream>
#include <cstring>
using namespace std;
 
 class stackW{
    private:
    int stackI[5];
    int stackJ[5];
    int data;
    int tos = -1;
    int pop;
    public:
    void pushI(){
        if(tos==5-1){
            cout<<"Stack is full. "<<endl;
        }
        else{
            cout<<"Enter the element to push onto first stack : ";
            cin>>data;
            stackI[++tos]=data;
            }
    }
    void popI(){
        if(tos==-1){
            cout<<"Stack empty. "<<endl;
        }
        else{
            int pop=stackI[tos--];
            cout<<"Popped "<<pop<<" from the stack. "<<endl;
        }
    }
 };
