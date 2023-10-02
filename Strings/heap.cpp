#include<iostream>
#include<queue>
using namespace std;

void printMinHeap(priority_queue<int, vector<int>, greater<int>> minHeap)
{
    while(!minHeap.empty() ){
        

    }
}

int main() {
    int k=3;
    priority_queue<int, vector<int>, greater<int>> minHeap;

    int data;
    for(int i=0; i<k; i++ ){
        cin>>data;
        minHeap.push(data);
    }

    while(true) {
        cin>>data;
        if(data==0) {
            //stream has ended
            break;
        }
        if(data==-1) {
            //print the content of minHeap

        }
        else{
            if(data>minHeap.top()) {
                minHeap.pop();
                minHeap.push(data);
            }
        }
    }

    return 0;

}