#include <iostream>

using namespace std;

class Node {
    public:
    char data;
    Node *next;

    Node(char data) {
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

    void push(char data) {
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
        // if (top == NULL) 
        //     return true;
        // return false;
        return (top == NULL);
    }

    int size() {
        return sz;
    } 
};

bool brackets(string s){
    Stack *t = new Stack();
    for (int i=0; i<s.size(); i++){
        if (s[i]=='(' or s[i]=='[' or s[i]=='{') t->push(s[i]);
        else{
            if (t->empty()) return false;
            else if(t->top()->data=='(' and s[i]!=')') return false;
            else if(t->top()->data=='[' and s[i]!=']') return false;
            else if(t->top()->data=='{' and s[i]!='}') return false;
            t->pop();
        }
    }
    return t->empty();
}


int main(){
    string s; cin>>s;

    if(brackets(s)) cout<<"yes";
    else cout<<"no";

    return 0;
}