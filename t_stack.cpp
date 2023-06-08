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
    void showI(){
        cout<<"Stack : "<<endl;
        for (int i = tos; i>0;i--){
           cout<<stackI[i]<<endl;; 
        }
    }
    void revStack(){
        for (int i = 0; i<tos; i++){
            for (int j = tos; j>0; j--){
                stackI[i]=stackJ[j];
            }
        }
    }
    void showJ(){
        cout<<"Reversed Stack : "<<endl;
        for(int k=tos;k<0;k--){
            cout<<stackJ[k]<<endl;
        }
    }
 };
 int main(){
    stackW myStack;
    int en;
    while(true){
    cout<<"Press 1 to push\nPress 2 to pop\nPress 3 to view the stack\nPress 4 to reverse the stack\nPress 5 to display reversed stack\nPress 6 to exit"<<endl;
    cin>>en;
    switch (en){
    case 1:
        myStack.pushI();
        break;
    case 2:
        myStack.popI();
        break;
    case 3:
        myStack.showI();
        break;
    case 4:
        myStack.revStack();
        break;
    case 5: 
        myStack.showJ();
        break;
    case 6:
        exit(1);
    default:
        cout<<"Invalid input. Try again. "<<endl;
        break;
    }
 }
 }