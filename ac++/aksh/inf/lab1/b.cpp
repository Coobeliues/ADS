#include <iostream>

using namespace std;

class Node {
public:
    int data;
    Node *next;

    Node(int data) {
        this->data = data;
        this->next = NULL;
    }
};

class Queue {
public:
    Node *front, *tail;
    int sz;

    Queue() {
        front = NULL;
        tail = NULL;
        sz = 0;
    }

    void push(int data) {
        Node *node = new Node(data);
        if (sz == 0) {
            front = tail = node;
        } else {
            tail->next = node;
            tail = node;
        }
        sz++;
    }

    void pop() {
        if (front != NULL) {
            front = front->next;
            sz--;
        }
    }

    bool empty() {
        return (front == NULL && tail == NULL);
    }

    int size() {
        return sz;
    }
};

int main() {
    Queue *st = new Queue();
    string s;

    while (s!="exit"){
        cin>>s;
        int n;
        if (s == "size") cout<<st->size()<<endl;
        else if (s == "push") {
            cin>>n;
            st->push(n);
            cout<<"ok"<<endl;
        }
        else if (s == "pop"){
            if(st->size()!=0) {
                cout << st->front->data << endl;
                st->pop();
            }
            else cout<<"error"<<endl;
        }
        else if (s == "front"){
            if (st->size()!=0) cout << st->front->data << endl;
            else cout<<"error"<<endl;
        }
        else if (s == "clear") {
            cout<<"ok"<<endl;
            while (st->size()>0){
                st->pop();
            }
            
        }
    }
    cout<<"bye";

    return 0;
}