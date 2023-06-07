#include <stdio.h>
#include <stdlib.h>
#define true 1
#define false 2
int stack[10];
int tos = -1;
int pushedData;
int poppedData;
int val;
void push(){
    if(tos == 9){
        printf("\nStack overlflow!\n");
    }
    else{
        printf("Enter the data to push : ");
        scanf("%d", &pushedData);
        tos++;
    }
}
void pop(){
    if (tos == -1){
        printf("\nStack Underflow!\n");
    }
    else {
        poppedData = stack[tos--];
        printf("Popped %d from the stack.",poppedData);
    }
}
void show(){
    printf("Stack : \n");
    for (int i = tos; i>0; i--){
        printf("%d",stack[i]);
    }
}
void main(){
while (true) {
    printf("Press 1 to push\nPress 2 to pop\nPress 3 to show the stack\nPress 4 to exit\n");
    scanf("%d",&val);
    switch(val){
        case 1:
        push();
        break;
        
        case 2: 
        pop();
        break;

        case 3: 
        show();
        break;

        case 4:
        exit(0);
        break;
    }
    }
}
