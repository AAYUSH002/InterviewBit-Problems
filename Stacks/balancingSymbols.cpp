#include<bits/stdc++.h>
using namespace std;

#define MAX 10

struct createStack
{
    int top = -1;
    int a[MAX];
}*S;
int isEmptyStack(){
    return (S->top == -1);
}

int isFullStack(){
    return (S->top == MAX-1);
}

void pushInStack(int item){
    cout<<item<< " ";
    if(isFullStack()){
        cout<<"Stack is full !!!"<<" ";
        return;
    }
    S->top++;
    S->a[S->top] = item;
}

void popFromStack(){
    if(isEmptyStack()){
        cout<<"Stack is Empty !!!"<<" ";
        return;
    }
    S->top--;
}


// top operations
// pop operation
// push operation

int main(){
    // create a stack
    int arr[10]={34,10,6,17,88,97,34,89,4,55};
    // cout<<arr[0];
    // for(int i=0;i<MAX;i++){
    //     cout<<arr[i];
    //     pushInStack(arr[i]);
    // }


    return 0;
}