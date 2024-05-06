#include <iostream>

//Nama: Ali Imron Dimyati
//NRP: 5223600003

using namespace std;

class Queue {
private:
    struct Node {
        int value;
        Node* next;
        Node(int v, Node* n) : value(v), next(n) {}
    };

    Node* head = nullptr;
    Node* tail = nullptr;
    int count = 0;

public:
    int size() {
        return count;
    }

    bool Empty() {
        return count == 0;
    }

    void print() {
        Node* temp = head;
        while (temp != nullptr) {
            cout << temp->value << " ";
            temp = temp->next;
        }
    }

    int peek() {
        if (Empty()) {
            throw runtime_error("QueueEmptyException");
        }
        return head->value;
    }

    
};

int main() {
    Queue myQueue;
    myQueue.print(); 

    return 0;
}
