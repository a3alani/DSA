#include <iostream>
using namespace std;
template <typename T>

class Node {
public:
    T data;
    Node<T>* next;
    Node<T>* prev;

    Node(int value) {
        data = value;
        next = nullptr;
        prev = nullptr;
    }
};

template <typename T>

class LinkedList{
private:
    Node<T>* head;

public:
    LinkedList() {
        head = nullptr;
    }

    /* Main Opertions */

    bool find(int value) {
        Node<T>* curr = head;

        //traverse list
        while(curr != nullptr){

            //check if value found
            if(curr->data == value){
                return true;
            }

            //move to next node
            curr = curr->next;
        }
        return false;
    }

    void insert(int value, int position) {

        //create new node with data
        Node<T>* newNode = new Node<T>(value);

        //check if empty
        if(head == nullptr){
            head = newNode;
            return;
        }

        //check if insert at beginning
        if(position == 0){
            newNode->next = head;
            head->prev = newNode;
            head = newNode;
            return;
        }

        //traverse list to find position
        Node<T>* curr = head;
        int currPos = 0;
        while(currPos < position-1 && curr->next != nullptr){
            curr = curr->next;
            currPos++;
        }

        //check if position is valid
        if(currPos != position-1){
            cout << "Invalid position" << endl;
            return;
        }

        //insert node
        newNode->next = curr->next;
        newNode->prev = curr;
        curr->next = newNode;
        if(newNode->next != nullptr){
            newNode->next->prev = newNode;
        }
    }

    void remove(int value) {

        //check if empty
        if(head == nullptr){
            cout << "List is empty" << endl;
            return;
        }

        //check if remove at beginning
        if(head->data == value){
            Node<T>* temp = head;
            head = head->next;
            delete temp;
            return;
        }

        //traverse list to find node
        Node<T>* curr = head;
        while(curr->next != nullptr && curr->next->data != value){
            curr = curr->next;
        }

        //check if node found
        if(curr->next == nullptr){
            cout << "Node not found" << endl;
            return;
        }

        //remove node
        Node<T>* temp = curr->next;
        curr->next = curr->next->next;
        if(curr->next != nullptr){
            curr->next->prev = curr;
        }
        delete temp;
    }

    /* Helper Opertions */

    void print() {
        Node<T>* curr = head;
        while(curr != nullptr){
            cout << curr->data << " ";
            curr = curr->next;
        }
        cout << endl;
    }

    void printReverse() {
        Node<T>* curr = head;
        while(curr->next != nullptr){
            curr = curr->next;
        }
        while(curr != nullptr){
            cout << curr->data << " ";
            curr = curr->prev;
        }
        cout << endl;
    }

    int size() {
        Node<T>* curr = head;
        int count = 0;
        while(curr != nullptr){
            count++;
            curr = curr->next;
        }
        return count;
    }

    bool isEmpty() {
        return head == nullptr;
    }

    void clear() {
        Node<T>* curr = head;
        while(curr != nullptr){
            Node<T>* temp = curr;
            curr = curr->next;
            delete temp;
        }
        head = nullptr;
    }

    /* Bonus Opertions */

    void insert(int value) {
        insert(value, size());
    }


    void remove() {
        remove(size()-1);
    }

    int get(int position) {
        //traverse list to find position
        Node<T>* curr = head;
        int currPos = 0;
        while(currPos < position && curr->next != nullptr){
            curr = curr->next;
            currPos++;
        }

        //check if position is valid
        if(currPos != position){
            cout << "Invalid position" << endl;
            return -1;
        }

        return curr->data;
    }

    int indexOf(int value) {
        Node<T>* curr = head;
        int currPos = 0;
        while(curr != nullptr){
            if(curr->data == value){
                return currPos;
            }
            curr = curr->next;
            currPos++;
        }
        return -1;
    }

    int lastIndexOf(int value) {
        Node<T>* curr = head;
        int currPos = 0;
        int lastPos = -1;
        while(curr != nullptr){
            if(curr->data == value){
                lastPos = currPos;
            }
            curr = curr->next;
            currPos++;
        }
        return lastPos;
    }

    bool contains(int value) {
        return indexOf(value) != -1;
    }

    void set(int value, int position) {
        //traverse list to find position
        Node<T>* curr = head;
        int currPos = 0;
        while(currPos < position && curr->next != nullptr){
            curr = curr->next;
            currPos++;
        }

        //check if position is valid
        if(currPos != position){
            cout << "Invalid position" << endl;
            return;
        }

        curr->data = value;
    }

    void reverse() {
        Node<T>* curr = head;
        Node<T>* prev = nullptr;
        Node<T>* next = nullptr;
        while(curr != nullptr){
            next = curr->next;
            curr->next = prev;
            curr->prev = next;
            prev = curr;
            curr = next;
        }
        head = prev;
    }

    void sort() {
        Node<T>* curr = head;
        while(curr != nullptr){
            Node<T>* min = curr;
            Node<T>* temp = curr->next;
            while(temp != nullptr){
                if(temp->data < min->data){
                    min = temp;
                }
                temp = temp->next;
            }
            int tempData = curr->data;
            curr->data = min->data;
            min->data = tempData;
            curr = curr->next;
        }
    }

    void removeDuplicates() {
        Node<T>* curr = head;
        while(curr != nullptr){
            Node<T>* temp = curr->next;
            while(temp != nullptr && temp->data == curr->data){
                Node<T>* temp2 = temp;
                temp = temp->next;
                remove(temp2->data);
            }
            curr = curr->next;
        }
    }

};  


