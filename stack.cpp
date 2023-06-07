#include <iostream>
using namespace std;

class stackW{
    private: 
    int stack[5];
    int tos;
    int data;
    public:
    stackW(){
        tos = -1;
    }
    void push(){
        if(tos == 4){
            cout<<"Stack is full. Stack overflow"<<endl;
        }
        else{
            cout<<"Enter the element to push: ";
            cin >> data;
            stack[++tos] = data;
            cout << "Element " << data << " pushed to the stack." << endl;
        }
    }
    void pop(){
        if (tos == -1){
            cout<<"Stack is empty. Stack underflow"<<endl;
        }
        else{
            int poppedElement = stack[tos--];
            cout << "Element " << poppedElement << " popped from the stack." << endl;
        }
    }
    void show(){
        cout<<"Stack : "<<endl;
        for(int i = tos; i >= 0; i--){
            cout<<stack[i]<<endl;
        }
    }
};

int main(){
    stackW mystack;
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
