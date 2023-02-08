#include<iostream>
# define N 10
using namespace std;
int arr[N];
    int front=-1;
    int rear=-1;
void push(int val)
{
    if (front==-1)
    {
        front++;
        arr[front]=val;
        rear++;
    }
    else
     arr[++rear]=val;

}
void pop()
{
    if(front!=-1)
      front++;
 if(front>rear||front ==-1)
    {
    cout<<"arr is empty";
    front=rear=-1;
    }
}
 void isempty()
{
    if(front==-1)
    cout<<"queue is empty";
    else
    cout<<"no"<<endl;
}
void isfull()
{
    if(rear==N)
    cout<<"queue is full";
    else
    cout<<"no"<<endl;
}
int main()
{
    //implementation of queue from array
    push(3);
    push(5);
    push(8);
    pop();
    pop();
    isempty();
    pop();
    isempty();

for(int i=front;i<=rear;i++)
cout<<arr[i];


}