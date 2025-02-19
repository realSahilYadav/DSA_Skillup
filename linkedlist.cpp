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

class List {
    Node* head;
    Node* tail;

public:
    List() {
        head = tail = NULL;
    }

    void push_front(int val) {
        Node* newNode = new Node(val);
        if(head == NULL) {
            head = tail = newNode;
            return;
        } else {
            newNode->next = head;
            head = newNode;
        }
    }

    void push_back(int val) {
        Node *newNode = new Node(val);
        if (head == NULL) {
            head = tail = newNode;
            return;
        } else {
            tail->next = newNode;
            tail = newNode;
        }
    }

    void pop_front() {
        if (head == NULL) {
            cout<<"LL is empty"<<endl;
            return;
        } else {
            Node* temp = head;
            head = head->next;
            temp->next = NULL;
            delete temp;
        }
    }

    void pop_back(){
        if (head == NULL) {
            cout<<"LL is empty"<<endl;
            return;
        } else {
            Node* temp = head;
            while(temp->next != tail) {
                temp = temp->next;
            }

            temp->next = NULL;
            delete tail;
            tail = temp;
        }
    }

    void insert(int val, int pos) {
        if (pos < 0) {
            cout<<"Invalid position"<<endl;
            return;
        } else if (pos == 0) {
            push_front(val);
        } else {
            Node* temp = head;
            for(int i = 0; i < pos - 1; i++) {
                if(temp == NULL) {
                    cout<<"Invalid Position"<<endl;
                    return;
                }
                temp = temp->next;
            }

            Node *newNode = new Node(val);
            newNode->next = temp->next;
            temp->next = newNode;
        }
    }

    bool search(int val) {
        Node* temp = head;

        while (temp != NULL) {
            if(temp->data == val) {
                return true;
            } else {
                temp = temp->next;
            }
        }
        return false;
    }

    void printLL() {
        Node* temp = head;

        while(temp != NULL) {
            cout<<temp->data<<"->";
            temp = temp->next;
        }
        cout<<endl;
    }
};


int main() {
    List ll;

    ll.push_front(3);
    ll.push_front(2);
    ll.push_front(1);
    ll.push_front(0);
    ll.printLL();

    ll.pop_front();
    ll.push_back(4);
    ll.push_back(5);
    ll.push_back(6);
    ll.push_back(7);
    ll.printLL();

    ll.pop_back();
    ll.printLL();

    return 0;
}