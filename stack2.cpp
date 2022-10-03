#include <iostream>
using namespace std;
class Stack{
	private :
		int * arr;
		int size;
		int length;
		int top;
		public:
			Stack(int size){
				this->size=size;
				arr=new int[size];
				top=-1;
			}
			~Stack(){
				delete[]arr;
			}
			void push(int val){
				if(top==size-1){
					cout<<"stack over flow"<<endl;
					return;
				}
				arr[++top]=val;
			}
			int pop(){
				if (top==-1){
					cout<<"stack underflow"<<endl;
					return 0;
				}
				else
				return arr[top--];
			}
			int peek(){
				if(top==-1){
					cout<<"stack underflow"<<endl;
					return 0;
				}
				return arr[top];
			}
			void display(){
				for(int i=top;i>=0;i--)
				cout<<"item :"<<i+1<<" : "<<arr[i]<<endl;
				
			}			
};
int main(){
	Stack stack1(5);\
	stack1.push(1);
	stack1.push(2);
	stack1.push(3);
	stack1.push(4);
	stack1.push(5);
	stack1.push(6);
	stack1.pop();
	stack1.display();
	return 0;
						
}

