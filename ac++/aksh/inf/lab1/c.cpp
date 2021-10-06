#include <iostream>

using namespace std;

class Node {
public:
    int data;
    Node *next, *prev;

    Node(int data) {
        this->data = data;
        this->next = NULL;
        this->prev = NULL;
    }
};

class Deque {
public:
    Node *front, *tail;
    int sz;

    Deque() {
        front = NULL;
        tail = NULL;
        sz = 0;
    }

    void push_back(int data) {
        Node *node = new Node(data);
        if (sz == 0) {
            front = tail = node;
        } else {
            node->prev = tail;
            tail->next = node;
            tail = tail->next;
        }
        sz++;
    }
    void push_front(int data) {
        Node *node = new Node(data);
        if (sz == 0) {
            front = tail = node;
        } else {
            node->next = front;
            front->prev = node;
            front = front->prev;
        }
        sz++;
    }

    void pop_front() {
        if (front != NULL) {
            front = front->next;
            sz--;
        }
    }
    void pop_back() {
        if (tail != NULL) {
            tail = tail->prev;
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
    Deque *st = new Deque();
    string s;

    while (s!="exit"){
        cin>>s;
        int n;
        if (s == "size") cout<<st->size()<<endl;
        else if (s == "push_front") {
            cin>>n;
            st->push_front(n);
            cout<<"ok"<<endl;
        }
        else if (s == "push_back") {
            cin>>n;
            st->push_back(n);
            cout<<"ok"<<endl;
        }
        else if (s == "pop_front"){
            if(st->size()!=0) {
                cout << st->front->data << endl;
                st->pop_front();
            }
            else cout<<"error"<<endl;
        }
        else if (s == "pop_back"){
            if(st->size()!=0) {
                cout << st->tail->data << endl;
                st->pop_back();
            }
            else cout<<"error"<<endl;
        }
        else if (s == "front"){
            if (st->size()!=0) cout << st->front->data << endl;
            else cout<<"error"<<endl;
        }
        else if (s == "back"){
            if (st->size()!=0) cout << st->tail->data << endl;
            else cout<<"error"<<endl;
        }
        else if (s == "clear") {
            cout<<"ok"<<endl;
            while (st->size()>0){
                st->pop_front();
            }
//            Deque* new_st = new Deque();
//            swap(st, new_st);
        }
    }
    cout<<"bye";

    return 0;
}