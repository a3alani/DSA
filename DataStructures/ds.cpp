#include <iostream>

#include <array>
#include <vector> // Dynamic array
#include <forward_list> // Singly linked list
#include <list>  // Doubly linked list
#include <stack> // LIFO implemented with deque or list
#include <queue> // FIFO implemented with deque or list
#include <deque> // Double ended queue implemented with dynamic array
#include <set> // Binary search tree unique elements (ordered) implemented with red-black tree
#include <unordered_set> // Hash table unique elements 
#include <map> // Binary search tree key-value pairs (ordered) implemented with red-black tree
#include <unordered_map> // Hash table key-value pairs

using namespace std;

int main() {

    int nums[5] = {1, 2, 3, 4, 5};
    // array<int, 5> arr = {1, 2, 3, 4, 5};

    vector<int> vec; // Dynamic array

    list<int> li; // Doubly linked list

    forward_list<int> fl; // Singly linked list

    stack<int> st; // LIFO 

    queue<int> que; // FIFO

    priority_queue<int> pq; // FIFO with priority

    deque<int> deq; // Double ended queue 

    set<int> s; // Binary search tree

    map<int, int> m; // Binary search tree

    unordered_set<int> us; // Hash table

    unordered_map<int, int> um; // Hash table

    multiset<int> ms; // Binary search tree

    multimap<int, int> mm; // Binary search tree

    unordered_multiset<int> ums; // Hash table

    unordered_multimap<int, int> umm; // Hash table

    string str = "Hello";

    return 0;

}
