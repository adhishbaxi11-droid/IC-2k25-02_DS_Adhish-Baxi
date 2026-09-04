    #include <iostream>
#include <vector>
using namespace std;

class ArrayOp{
    int p;
    int n;
    int pos;
 
    
public:
    ArrayOp(){
        cout<<"Enter value of p: ";
        cin>> p;
        int arr[p];
        for(int i = 0; i<p; i++){
        cin>> arr[i];
        }
    }
    
    void deleteEl(){
        int arr[p];
        cout<<"Enter value of n: ";
        cin>> n;
        cout<<"Enter value of pos: ";
        cin>> pos;
        
    if(n<=p){
        for(int i = pos; i < n-1; i++ ){
        arr[i] = arr[i + 1];
        }
        p--;
      
    }
        else{
        cout<< "Invalid.\n";
        }
    }
    
    void insterEl(){
        int arr[p];
        cout<<"Enter value of n: ";
        cin>> n;
        cout<<"Enter value of pos: ";
        cin>> pos;
        
        if(n <= p && pos >= 0 && pos <= n){
            for(int i = n; i > pos; i--)
            {
                arr[i] = arr[i - 1];
            }
            
            cout<<"Enter new element: ";
            cin>> arr[pos];
            n++;
            p++;
            cout<< "Element inserted.\n";
        }
        
        else{
            cout<< "Invalid\n";
        }
    }
    
    void searchEl(){
        int arr[p];
        cout<< "Enter the position of element to be searched: ";
        cin>> pos;
        
        if(pos >= 0 && pos < p){
            cout<< "The element on " << pos << " place is: " << arr[pos] << endl;
        }
        
         else{
            cout<< "Invalid position.\n";
         }
    }
    
    void display(){
        int arr[p];
        for(int i=0; i<p; i++) {
            cout<< arr[i];
        }
    }
};
 
int main() {
    ArrayOp a;
    a.searchEl();
    a.display();
 
    
    return 0;
}