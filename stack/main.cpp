#include <iostream>

#define MAX 3        // MAXIMUM STACK CONTENT

using namespace std;

class stack
{

  private:
    int arr[MAX];
    int top;

  public:
	 stack()         //Constructor
	 {
	    top=-1;      //Sets the Top Location to -1 indicating an empty stack
	 }

	 void push(int a)  // Push ie. Add Value Function
	 {
		if(top == MAX -1)
		 {
		     cout<<"STACK FULL!!"<<endl;

		 }
		 else
		 {
		    top++;        // increment to by 1
			arr[top]=a;  //If Stack is Vacant store Value in Array
			cout<<a << " is pushed\n";
		 }
	 }

	void pop()                  // Delete Item
	{
		if(top==-1)
		{
			cout<<"STACK IS EMPTY!!!"<<endl;
			//return NULL;
		}
		else
		{
			int data=arr[top];     //Set Topmost Value in data
			arr[top]=NULL;       //Set Original Location to NULL
			top--;               // Decrement top by 1
			cout<< data <<" is Popped\n";

		}
	 }
};


int main()
{
 stack a;
 a.push(3);
 a.push(10);
 a.push(1);
 a.push(10);
 a.push(30);
 a.push(25);

 a.pop();

 a.pop();

a.pop();

a.pop();

a.pop();

a.pop();

a.pop();

 a.pop();
 a.push(30);
 a.push(25);
 a.pop();
 a.pop();
 a.pop();
 a.pop();
 a.pop();
 a.push(10);
 a.pop();
 a.push(30);
 a.push(25);
 a.pop();
 a.pop();
 a.pop();
 a.pop();
 a.pop();
 return 0;
}
