/*
 * Pros: dynamic size array, check for bounds, ADT operations
 * Cons: memeory and runtime cost, indirect memeory access

 * Dynamic Size: 
    add: push_back()
    remove: pop_back() or erase()
    auto memory allocation and resizing

 * Size and Capacity: size(), capacity()

 * Clearing a Vector: clear()

 * Empty Vector: empty()
 */
#include <iostream>
#include <vector>

using namespace std;

int main(){

    //declare a vector
    vector<int> my_vec;

    //initialize a vector
    vector<int> my_vec = {1,2,3};

    vec.push_back(4);
    vec.push_back(5);
    vec.push_back(6);

    //access element
    int index_1 = vec[0];
    
    //size
    int size = vec.size();
    
    //traverse
    for(int i = 0; i < size; i++){
        cout << vec[i] << "\n";
    }

    //clear vector
    vec.clear();

    // Check if the vector is empty
    bool check = vec.empty();
}