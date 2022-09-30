#include <iostream>
#include <cstring>

using namespace std;

class Node{
public:
    Node* next;
    int data;
    Node(){
        next = NULL;
        this->data = 0;
    }
    Node(int data){
        next = NULL;
        this->data = data;
    }
};

class SinglyLinkedList{
public:
    int size;
    Node* head;
    Node* tail;

    SinglyLinkedList(){
        size = 0;
        head = NULL;
        tail = NULL;
    }

    void addTail(int data){
        Node* newNode = new Node(data);
        if(size == 0){
            head = newNode;
            tail = newNode;
        }
        else {
            tail->next = newNode;
            tail = newNode;
        }
        size++;
    }

    void removeFront(){
        Node* tmp = head;
        head = head->next;
        delete tmp;
        size--;
    }
};

class Queue{
public:
    SinglyLinkedList* queue;
    int qSize;

    Queue(){
        queue = new SinglyLinkedList();
        qSize = 0;
    }

    void push(int data){
        queue->addTail(data);
        qSize++;
    }
    void pop(){
        queue->removeFront();
        qSize--;
    }
    bool empty(){
        if(qSize == 0) return true;
        return false;
    }

    int size(){ return qSize; }
    int front(){ return queue->head->data; }
    int back(){ return queue->tail->data; }

};

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    Queue* q = new Queue();
    int N = 0;
    cin >> N;

    string cmd;
    while (N--) {
        cmd = "";
        cin >> cmd;
        if(cmd == "push"){
            int data = 0;
            cin >> data;
            q->push(data);
        }
        else if(cmd == "pop"){
            if(q->empty()) cout << "-1\n";
            else {
                cout << q->front() << "\n";
                q->pop();
            }
        }
        else if(cmd == "size") cout << q->size() << "\n";
        else if(cmd == "empty") cout << q->empty() << "\n";
        else if(cmd == "front") {
            if(q->empty()) cout << "-1\n";
            else cout << q->front() << "\n";
        }
        else if(cmd == "back") {
            if(q->empty()) cout << "-1\n";
            else cout << q->back() << "\n";
        }
    }

    return 0;
}