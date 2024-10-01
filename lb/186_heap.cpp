#include <iostream>
using namespace std;

class Heap{
    public:
        int * arr;
        int size;
        int capacity;

        Heap(int capacity){
            this->capacity=capacity;
            this->size=0;
            this->arr= new int[capacity];
        }

    //1 based indexing
        void insert(int data){

            if(size==capacity){
                cout<<"Heap OverFlow"<<endl;
                return;
            }

            size++;
            arr[size]=data;
            int index=size;

            while(index>1){
                int parentindex=index/2;
                if(arr[index]>arr[parentindex]){
                    swap(arr[index], arr[parentindex]);
                    index=parentindex;
                }
                else{
                    break;
                }
            }
        }

            //root only
            int deleteFromHeap(){

                if(size<1){
                    cout<<"No element in Heap"<<endl;
                    return -1;
                }

                int ans=arr[1];
                arr[1]=arr[size];
                size--;
                int index=1;

                while(index<size){
                    int leftChild=index*2;
                    int rightChild=index*2+1;
                    int largest=index;

                    if(leftChild<size && arr[leftChild]>arr[largest]){
                        largest=leftChild;
                    }
                    if(rightChild<size && arr[rightChild]>arr[largest]){
                        largest=rightChild;
                    }

                    if(largest!=index){
                        swap(arr[largest], arr[index]);
                        index=largest;
                    }
                    else{
                        break;
                    }
                }
                return ans;
            }

            void printHeap(){
                for(int i =1; i<=size; i++){
                    cout<<arr[i]<<" ";
                }
                cout<<endl;
            }
};

using namespace std;

int main(){

    // Heap* h= new Heap(20);
    // h->insert(10);

    Heap h(10);
    h.insert(10);
    h.printHeap();
    h.insert(20);
    h.printHeap();
    h.insert(30);
    h.printHeap();
    h.insert(40);
    h.printHeap();
    h.insert(50);
    h.printHeap();
    h.insert(60);
    h.printHeap();
    h.insert(70);
    h.printHeap();
    h.insert(80);
    h.printHeap();
    h.insert(90);
    h.printHeap();
    h.insert(100);
    h.printHeap();
    h.insert(100);

    cout<<"---------------------------------"<<endl;

    cout<<"Deleted "<<h.deleteFromHeap()<<endl;
    h.printHeap();
    cout<<"Deleted "<<h.deleteFromHeap()<<endl;
    h.printHeap();
    cout<<"Deleted "<<h.deleteFromHeap()<<endl;
    h.printHeap();
    cout<<"Deleted "<<h.deleteFromHeap()<<endl;
    h.printHeap();
    cout<<"Deleted "<<h.deleteFromHeap()<<endl;
    h.printHeap();
    cout<<"Deleted "<<h.deleteFromHeap()<<endl;
    h.printHeap();
    cout<<"Deleted "<<h.deleteFromHeap()<<endl;
    h.printHeap();
    cout<<"Deleted "<<h.deleteFromHeap()<<endl;
    h.printHeap();
    cout<<"Deleted "<<h.deleteFromHeap()<<endl;
    h.printHeap();
    cout<<"Deleted "<<h.deleteFromHeap()<<endl;
    h.printHeap();
    h.deleteFromHeap();
  return 0;
}