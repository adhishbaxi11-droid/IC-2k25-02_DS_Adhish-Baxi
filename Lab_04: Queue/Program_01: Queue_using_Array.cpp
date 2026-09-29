#include <iostream>
using namespace std;

class Queue{
    private:
        int *arr;
        int front, rear, size;

    public:
        Queue(int s){
            arr = new int[s];
            size = s;
            front = rear = -1;
        }

        int enQueue(int x){
            if((rear + 1) == size){
                cout << "Queue Overflow" << endl;
            } else {
                if(front == -1) front = 0;
                arr[++rear] = x;
            }
            return 0;
        }

        int deQueue(){
            if(front == -1){
                cout << "Queue Underflow" << endl;
            } else {
                int x = arr[front];
                if(front == rear){
                    front = rear = -1;
                } else {
                    front++;
                }
                return x;
            }
        }

        void display(){
            if(front == -1){
                cout << "Queue is empty" << endl;
            } else {
                for(int i = front; i <= rear; i++){
                    cout << arr[i] << " ";
                }
                cout << endl;
            }
        }
};

int main(){
    Queue q(5);
    q.enQueue(1);
    q.enQueue(2);
    q.enQueue(3);
    q.display();
    cout << "Dequeued: " << q.deQueue() << endl;
    q.display();
    return 0;
}
