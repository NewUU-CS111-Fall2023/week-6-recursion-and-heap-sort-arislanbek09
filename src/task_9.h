#include <iostream>
#include <vector>
using namespace std;

class Heap {
private:
    vector <int> heap;

    void maxHeapify(int i, int size) {
        int left = 2*i+1;
        int right = 2*i+2;
        int largest = i;

        if (left < size && heap[left] > heap[largest]) {
            largest = left;
        }

        if (right < size && heap[right] > heap[largest]) {
            largest = right;
        }

        if (largest != i) {
            swap(heap[i], heap[largest]);
            maxHeapify(largest, size);
        }
    }

public:
    void buildMaxHeap() {
        int size = heap.size();
        for (int i = size / 2 - 1; i >= 0; i--) {
            maxHeapify(i, size);
        }
    }

    void heapSort() {
        int size = heap.size();
        buildMaxHeap();
        for (int i = size - 1; i > 0; i--) {
            swap(heap[0], heap[i]);
            maxHeapify(0, i);
        }
    }

    void insert(int val) {
        heap.push_back(val);
    }

    void display() {
        for (int i = 0; i < heap.size(); i++) {
            cout << heap[i] << " ";
        }
        cout << endl;
    }
};
