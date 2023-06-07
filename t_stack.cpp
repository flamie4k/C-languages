//Stack for strings 
#include <iostream>
#include <cstring>
using namespace std;
class stack{
    private:
    string stack[5];
    int tos =  -1;
    string data;
    string popEle;
    public:
    void push(){
        if(tos == 4){
            cout<<"Stack if full!! Stack overflow."<<endl;
        }
        else{
            cout<<"Enter the string to push : ";
            cin>>data;
            stack[tos++]=data;
            cout<<"String "<<data<<" pushed onto the stack. "<<endl;
        }
    }
    void pop(){
        if(tos==-1){
            cout<<"Stack is empty!! Stack underflow."<<endl;
        }
        else{
        popEle = stack[tos--];
        cout<<"String "<<popEle<<" popped from the stack.";
        }
    }
    void show(){
        cout<<"Stack : \n";
        for (int i = tos; i>tos; i--){
            cout<<stack[i]<<" "<<endl;
        }
    }
};
int main(){
    stack mystack;
    int ch;
    while(true){
        cout<<"Press 1 to push, 2 to pop, 3 to display the stack, and 4 to exit: ";
        cin >> ch;
        
        switch (ch){
            case 1:
                mystack.push();
                break;
            case 2:
                mystack.pop();
                break;
            case 3: 
                mystack.show();
                break;
            case 4:
                exit(1);
            default:
                cout<<"Invalid choice. Please try again."<<endl;
                break;
        }
    }
    
    return 0;
}
