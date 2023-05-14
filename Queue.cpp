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
