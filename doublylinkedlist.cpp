#include<iostream>
using namespace std;

class Node{
public:
    int data;
    Node* next;
    Node* prev;

    Node(int val){
        data = val;
        next = prev = NULL;
    }
};

class DoublyList{
    Node* head;
    Node* tail;

public:
    DoublyList(){
        head = tail = NULL;
    }

    void push_front(int val) {
        Node* newNode = new Node(val);

        if (head == NULL) {
            head = tail = newNode;
        } else {
            newNode->next = head;
            head->prev = newNode;
            head = newNode;
        }
    }

    void push_back(int val) {
        Node* newNode = new Node(val);
        
        if (head == NULL) {
            head = tail = newNode;
        } else {
            tail->next = newNode;
            newNode->prev = tail;
            tail = newNode;
        }
    }

    void pop_front() {
        if (head == NULL) {
            cout<<"Invalid Operation"<<endl;
        } else if(head == tail){
            delete head;
            head = tail = NULL;
        } else {
            Node* temp = head;
            head = head->next;
            head->prev = NULL;
            temp->next = NULL;
            delete temp;
        }
    }

    void pop_back() {
        if (head == NULL) {
            cout<<"Invalid Operation"<<endl;
        } else if(head == tail) {
            delete head;
            head = tail = NULL;
        } else {
            Node* temp = tail;
            tail = tail->prev;
            tail->next = NULL;
            temp->prev = NULL;
            delete temp;
        }
    }

    void print() {
        Node* temp = head;

        while (temp != NULL) {
            int val = temp->data;
            cout<<val<<"->";
            temp = temp->next;
        }
        cout<<"NULL\n";
    }
};

int main() {
    DoublyList dll;
    dll.push_front(3);
    dll.push_front(2);
    dll.push_front(1);
    dll.push_front(0);

    dll.push_back(4);
    dll.push_back(5);
    dll.push_back(6);
    dll.push_back(7);

    dll.print();

    dll.pop_front();
    dll.print();

    dll.pop_back();
    dll.print();

    return 0;
}