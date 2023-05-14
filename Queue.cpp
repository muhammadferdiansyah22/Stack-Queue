#include <iostream>
#include <queue>

using namespace std;

void printQueue(queue <int> myQueue){
	queue <int> mq = myQueue;
	if(myQueue.empty()){
		cout << "Error: queue kosong";
	}
	else{
		while(!myQueue.empty()){
			cout << "[>]" << myQueue.front() << endl;
			myQueue.pop();
		}
		cout << endl;
	}
}
int main(){
	queue<int> myQueue;
	
	myQueue.push(10);
	myQueue.push(20);
	myQueue.push(30); 
	
	printQueue(myQueue);
	
	cout << "Front element: " << myQueue.front() << endl;
	
	myQueue.pop();
	cout << endl;
	
	printQueue(myQueue);
	
	cout << "Front element after pop: " << myQueue.front() << endl;
	
	cout << "Queue size: " << myQueue.size() << endl;
	
	//fungsi clear queue
	while(!myQueue.empty()){
		myQueue.pop();
	}
	
	printQueue(myQueue);
	return 0;
}
