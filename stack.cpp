#include <iostream>
#include <stack>

using namespace std;

void printStack(stack <int> myStack){
	stack <int> ms = myStack;
	if(myStack.empty()){
		cout << "Error: stack kosong";
	}
	else{
		while(!myStack.empty()){
			cout << "[>]" << myStack.top() << endl;
			myStack.pop();
		}
		cout << endl;
	}
}
int main(){
	stack<int> myStack;
	
	myStack.push(10);
	myStack.push(20);
	myStack.push(30); 
	
	printStack(myStack);
	
	cout << "Top element: " << myStack.top() << endl;
	
	myStack.pop();
	cout << endl;
	
	printStack(myStack);
	
	cout << "Top element after pop: " << myStack.top() << endl;
	
	cout << "Stack size: " << myStack.size() << endl;
	
	//fungsi clear stack
	while(!myStack.empty()){
		myStack.pop();
	}
	
	printStack(myStack);
	return 0;
}
