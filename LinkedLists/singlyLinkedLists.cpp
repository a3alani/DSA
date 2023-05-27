// Purpose: To study the implementation of singly linked lists
/**
* Singly Linked List
* Pros:
* 1. Dynamic size
* 2. Ease of insertion/deletion
* 3. Ease of implementation
* 4. Random access is not allowed
* 5. Extra memory space for a pointer is required with each element of the list
* Cons:
* 1. Random access is not allowed
* 2. Extra memory space for a pointer is required with each element of the list
* 3. Not cache friendly. Since array elements are contiguous locations, there is locality of reference which is not there in case of linked lists.
* 4. Reverse traversing is difficult in singly linked list. We can overcome this by using doubly linked list.
* 5. Singly linked list requires less memory than doubly linked list.
* 6. Singly linked list can be traversed only in one direction. Doubly linked list can be traversed in both the directions.
* 7. The delete operation in singly linked list is more complicated. We need to modify the next pointer of the previous node. In doubly linked list, we can get the previous node using previous pointer.
* 8. Insertion and deletion take more time.
* 9. Singly linked list is preferred over doubly linked list when there is memory constraint.

* Operations:
* 1. Insertion
* 2. Deletion
* 3. Traversal
* 4. Searching
* 5. Sorting
* 6. Merging
* 7. Reversing
* 8. Copying
* 9. Concatenation
* 10. Splitting
* 11. Circular Singly Linked List
* 12. Circular Doubly Linked List
* 13. Doubly Linked List
* 14. Circular Doubly Linked List
* 15. Circular Singly Linked List
* 16. Circular Doubly Linked List
*

* Applications:
* 1. Dynamic memory allocation
* 2. Implemented in stack and queue
* 3. In undo functionality of softwares
* 4. Hash tables, Graphs
* 5. Implemented in adjacency list of graphs
* 6. Implemented in separate chaining which is present certain implementations of hash tables
* 7. Implemented in maintaining directory of names
* 8. Implemented in performing arithmetic operations on long integers
* 9. Implemented in performing arithmetic operations on polynomials
* 10. Implemented in performing arithmetic operations on sparse matrices
* 11. Implemented in performing arithmetic operations on polynomials
* 
*
* References:
* 1. https://www.geeksforgeeks.org/data-structures/linked-list/
* 2. https://www.geeksforgeeks.org/linked-list-set-1-introduction/
* 3. https://www.geeksforgeeks.org/linked-list-set-2-inserting-a-node/
* 4. https://www.geeksforgeeks.org/linked-list-set-3-deleting-node/
* 5. https://www.geeksforgeeks.org/linked-list-set-4-inserting-a-node/
* 
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



  