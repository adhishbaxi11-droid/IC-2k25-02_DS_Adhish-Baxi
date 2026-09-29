#include <iostream>
using namespace std;

class dbStack{
    private:
        int *arr;
        int top1;
        int top2;
        int capacity;

    public:
        dbStack(int size){
            capacity = size;
            arr = new int[capacity];
            top1 = -1;
            top2 = capacity;
        }

        int push1(int x){
            if(top1 < top2 - 1){
                arr[++top1] = x;
            } 
            else{
                cout << "Stack Overflow in Stack 1" << endl;
            }
            return 0;
        }

        int push2(int x){
            if(top1 < top2 - 1){
                arr[--top2] = x;
            } 
            else{
                cout << "Stack Overflow in Stack 2" << endl;
            }
            return 0;
        }

        int pop1(){
            if(top1 >= 0){
                return arr[top1--];
            } else {
                cout << "Stack Underflow in Stack 1" << endl;
                return -1;
            }
        }

        int pop2(){
            if(top2 < capacity){
                return arr[top2++];
            } else {
                cout << "Stack Underflow in Stack 2" << endl;
                return -1;
            }
        }
};

int main() {
    dbStack s(10);
    s.push1(5);
    s.push2(10);
    s.push1(15);
    cout << "Popped from Stack 1: " << s.pop1() << endl;
    cout << "Popped from Stack 2: " << s.pop2() << endl;
    return 0;
}
