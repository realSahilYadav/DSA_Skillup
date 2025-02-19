#include<iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int val) {
        data = val;
        next = NULL;
    }
};

class CircularList{
    Node* head;
    Node* tail;

public:
    CircularList(){
        head = tail = NULL;
    }

    void insertAtHead(int val) {
        Node* newNode = new Node(val);
        if (tail == NULL) {
            head = tail = newNode;
            tail->next = head;
        } else {
            newNode->next = head;
            head = newNode;
            tail->next = head;
        }
    }

    void insertAtTail(int val) {
        Node* newNode = new Node(val);
        if (tail == NULL) {
            tail = head = newNode;
            tail->next = head;
        } else {
            tail->next = newNode;
            tail = newNode;
            tail->next = head;
        }
    }

    void deleteAtHead() {
        if (head == NULL) {
            cout<<"Invalid Operation"<<endl;
        } else if (head == tail) {
            delete head;
            head = tail = NULL;
        } else {
            Node* temp = head;
            head = head->next;
            tail->next = head;
            temp->next = NULL;
            delete temp;
        }
    }

    void deleteAtTail() {
        if (tail == NULL) {
            cout<<"Invalid Operation"<<endl;
        } else if (head == tail) {
            delete tail;
            tail = head = NULL;
        } else {
            Node* temp = tail;
            Node* prev = head;
            
            while (prev->next != tail) {
                prev = prev->next;
            }
            tail = prev;
            tail->next = head;
            temp->next = NULL;
            delete temp;
        }
    }

    void print() {
        if (head == NULL) {
            cout<<"Invalid Operation"<<endl;
        } else {
            Node* temp = head;
            cout<<temp->data<<"->";
            temp = temp->next;

            while (temp != head) {
                cout<<temp->data<<"->";
                temp = temp->next;
            }
            cout<<head->data<<endl;
        }
    }
};

int main() {
    CircularList cll;

    cll.insertAtHead(3);
    cll.insertAtHead(2);
    cll.insertAtHead(1);
    cll.insertAtHead(0);

    cll.insertAtTail(4);
    cll.insertAtTail(5);
    cll.insertAtTail(6);
    cll.insertAtTail(7);

    cll.print();

    cll.deleteAtHead();
    cll.deleteAtTail();
    
    cll.print();

    return 0;
}