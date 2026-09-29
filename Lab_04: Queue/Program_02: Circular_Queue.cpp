#include <iostream>
using namespace std;

class circularQueue{
    private:
    int *arr;
    int front, rear, size;

    public:
    circularQueue(int s){
        size = s;
        arr = new int[s];
        front = -1;
        rear = -1;
    }

    int enQueue(int value){
        if((rear + 1) % size == front){
            cout << "Queue is Full" << endl;
        } else if(front == -1){
            front = rear = 0;
            arr[rear] = value;
        } else {
            rear = (rear + 1) % size;
            arr[rear] = value;
        }
        return 0;
    }

    int deQueue(){
        if(front == -1){
            cout << "Queue is Empty" << endl;
        } else if(front == rear){
            front = rear = -1;
        } else {
            front = (front + 1) % size;
        }
        return 0;
    }

    void display(){
        if(front == -1){
            cout << "Queue is Empty" << endl;
        } else {
            int i = front;
            while(i != rear){
                cout << arr[i] << " ";
                i = (i + 1) % size;
            }
            cout << arr[rear] << endl;
        }
    }
};

int main(){
    circularQueue q(5);
    q.enQueue(1);
    q.enQueue(2);
    q.enQueue(3);
    q.enQueue(4);
    q.enQueue(5);
    q.display();
    q.deQueue();
    q.display();
    q.enQueue(6);
    q.display();
    return 0;
}
