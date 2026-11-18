#include <iostream>
#include <vector>
using namespace std;
void insert(vector<int> &heap, int val){
    heap.push_back(val);
    int n = heap.size();

    int i = n - 1;
    while(i > 0){
        int parent = (i -1)/2;
        if(heap[parent] < heap[i]){
            swap(heap[parent], heap[i]);
        }else break;
        i = parent;
    }
}

int main(){
    vector<int> heap;
    insert(heap,10);    
    insert(heap,15);
    insert(heap,8);
    insert(heap,14);
    insert(heap,9);
    insert(heap,12);
    insert(heap,6);
    for(int i = 0;i < heap.size();i++){
        cout << heap[i] <<" ";
    }

}
