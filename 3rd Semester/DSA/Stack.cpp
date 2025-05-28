
#include<iostream>

using namespace std;

int size=20;
int stack[20];
int top=-1;

int push(int data)
{
    // check is_full():
    if(top==size-1)
    {
        cout<<" Stack is Full"<<endl;
    }
    else
    {
        top=top+1;
        stack[top]=data;
    }
}

int pop()
{
    // check is_empty():
    if(top==-1)
    {
        cout<<"Stack is empty"<<endl;
    }
    else
    {
        top=top-1;
    }

}

int peek()
{
    cout<<"The Top Element is:"<< stack[top]<<endl;
}






int main()
{
    int n;
    cout<<"Enter the number of elements:"<<endl;
    cin>>n;

    for(int i=0; i<n; i++)
    {
        int data;

        cout<<"Enter the data:"<<endl;
        cin>>data;

        push(data);
    }

    //push(5);
   // push(7);
    //push(9);

    cout<<"Elements of the Stack:"<<endl;
    for(int i=top; i>=0; i--)
    {
        cout<<stack[i]<<endl;
    }

    pop();

    cout<<"Elements of the Stack sfter pop:"<<endl;
    for(int i=top; i>=0; i--)
    {
        cout<<stack[i]<<endl;
    }

    peek();


    return 0;

}
