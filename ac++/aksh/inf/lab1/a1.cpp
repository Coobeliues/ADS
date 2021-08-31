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

class Stack {
    public:
    Node *top;
    int sz;

    Stack() {
        top = NULL;
        sz = 0;
    }

    void push(int data) {
        Node *new_node = new Node(data);
        new_node->next = top;
        top = new_node;
        sz++;
    }

    void pop() {
        if (top != NULL) {
            top = top->next;
            sz--;
        }
    }

    bool empty() {
        return (top == NULL);
    }

    int size() {
        return sz;
    } 
};

int main() {
    Stack *st = new Stack();
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
                cout<<st->top->data<<endl; 
                st->pop();
            }
            else cout<<"error"<<endl;
        }
        else if (s == "back"){
            if (st->size()!=0) cout<<st->top->data<<endl; 
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