/**
* Singly Linked List
* - Dynamic size
* - Ease of insertion/deletion
* - Extra memory space for a pointer is required with each element of the list
* - Not cache friendly. Since array elements are contiguous locations, there is locality of reference which is not there in case of linked lists.
* - Reverse traversing is difficult in singly linked list. We can overcome this by using doubly linked list.
* - Singly linked list can be traversed only in one direction. Doubly linked list can be traversed in both the directions.
* - The delete operation in singly linked list is more complicated. We need to modify the next pointer of the previous node. In doubly linked list, we can get the previous node using previous pointer.
* - Insertion and deletion take more time.
* - Singly linked list is preferred over doubly linked list when there is memory constraint.

* Time Complexity: 
* - Access: O(n)
* - Search: O(n)
* - Insertion: O(1)
* - Deletion: O(1)
* - Space: O(n)


* Applications:
* - Dynamic memory allocation
* - Implemented in stack and queue
* - Hash tables, Graphs
* - Implemented in adjacency list of graphs
* - Implemented in separate chaining which is present certain implementations of hash tables
* 

* Class vs Struct in C++
* The only difference between struct and class keyword is that 
* members of struct are public by default and members of class are private by default.
 
*/

#include <iostream>
using namespace std;
template <typename T>

class Node {
public:
    T data;
    Node<T>* next;

    Node(int value) {
        data = value;
        next = nullptr;
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
            head = newNode;
            return;
        }    

        //find position
        Node<T>* curr = head;
        for(int i = 0; i < position - 1; i++){
            curr = curr->next;
        }

        //check if insert at end
        if(curr->next == nullptr){
            curr->next = newNode;
            return;
        }

        //insert in middle
        newNode->next = curr->next;
        curr->next = newNode;        
    }

    void remove(int position){
        //check if empty
        if(head == nullptr){
            return;
        }

        //check if remove at beginning
        if(position == 0){
            Node<T>* curr = head;
            head = head->next;
            delete curr;
            return;
        }

        //find position
        Node<T>* curr = head;
        for(int i = 0; i < position - 1; i++){
            curr = curr->next;
        }

        //check if remove at end
        if(curr->next == nullptr){
            return;
        }

        //remove in middle
        Node<T>* temp = curr->next;
        curr->next = curr->next->next;
        delete temp;
    }

    T access(int position){
        //check if empty
        if(head == nullptr){
            return T(); //return default value
        }

        //check if access at beginning
        if(position == 0){
            return head->data;
        }

        //find position
        Node<T>* curr = head;
        for(int i = 0; i < position; i++){
            curr = curr->next;
        }

        //check if access at end
        if(curr->next == nullptr){
            return T();
        }

        //access in middle
        return curr->data;
    }

    /* Side Operations */

    void display() {
        Node<T>* curr = head;

        while(curr != nullptr){
            cout << curr->data << " ";
            curr = curr->next;
        }
    }   

    void reverse() {
        Node<T>* curr = head;
        Node<T>* prev = nullptr;

        while(curr != nullptr){
            next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }

        head = prev;
    }

    void sort() {
        Node<T>* curr = head;
        Node<T>* index = nullptr;

        while(curr != nullptr){
            index = curr->next;

            while(index != nullptr){
                if(curr->data > index->data){
                    int temp = curr->data;
                    curr->data = index->data;
                    index->data = temp;
                }
                index = index->next;
            }
            curr = curr->next;
        }
    }

    void clear() {
        Node<T>* curr = head;
        Node<T>* next = nullptr;

        while(curr != nullptr){
            next = curr->next;
            delete curr;
            curr = next;
        }

        head = nullptr;
    }
 
};

int main() {

    LinkedList<int> list;  

  

    list.display();
}



  