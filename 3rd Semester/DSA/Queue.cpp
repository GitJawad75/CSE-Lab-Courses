#include<iostream>

using namespace std;

int size=20;
int queue[20];
int front=0, rear=0;

int enqueue(int data)
{
    // check is_full():
    if(rear==size-1)
    {
        cout<<"Queue is Full"<<endl;
    }
    else
    {

        queue[rear]=data;
        rear=rear+1;
    }
}

int dequeue()
{
    // check is_empty():
    if(rear==0)
    {
        cout<<"Queue is empty"<<endl;
    }
    else
    {
        front=front+1;
    }

}

int peek()
{
    cout<<"The Top Element is:"<< queue[front]<<endl;
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

        enqueue(data);
    }

    //push(5);
   // push(7);
    //push(9);

    cout<<"Elements of the Queue:"<<endl;
    for(int i=front; i<rear; i++)
    {
        cout<<queue[i]<<endl;
    }

    dequeue();

    cout<<"Elements of the Queue after dequeue:"<<endl;
    for(int i=front; i<rear; i++)
    {
        cout<<queue[i]<<endl;
    }

    peek();


    return 0;

}
