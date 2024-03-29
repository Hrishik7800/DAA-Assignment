#include <iostream>
using namespace std;
#define SIZE 8

int A[SIZE];
int front = -1;
int rear = -1;

bool isempty()
{
 if(front == -1 && rear == -1)
 return true;
 else
 return false;
}

void enqueue ( int value )

{
 if (rear == SIZE-1){
      cout<<"Queue is full \n";
 } 
 else
 {
  if( front == -1){
       front = 0;
  }
  rear++;

  A[rear] = value;

 }
}

void dequeue ( )
{

 if( isempty() ){
    cout<<"Queue is empty\n";
 }
 else if( front == rear ){
      front = rear = -1;
 } 
 else{
      front++;
 }
  
}


void showfront( )
{

 if( isempty())
  cout<<"Queue is empty\n";
 else
  cout<<"element at front is:"<<A[front]<<"\n";


}


void displayQueue()
{

 if(isempty())
  cout<<"Queue is empty\n";
 else
 {
  for( int i=front ; i<= rear ; i++)
   cout<<A[i]<<" ";
  cout<<"\n";
 }

}


int main()
{
 cout<<"Inserting elements in queue\n";

 enqueue(2);
 displayQueue();
 enqueue(3);
 displayQueue();
 enqueue(5);
 displayQueue();
 enqueue(7);
 showfront();
 displayQueue();
 enqueue(8);

 displayQueue();

 enqueue(9);

 showfront();

 cout<<"Removing elements from queue\n";

 dequeue();
 displayQueue();
 dequeue();
 displayQueue();
 dequeue();
 displayQueue();
 dequeue();
 displayQueue();
 dequeue();

 return 0;
}

