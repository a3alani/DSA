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
    vector<int> vec;

    //initialize a vector
    vector<int> v1 = {1,2,3};

    //access element
    vec.front(); //first
    vec.back(); //last

    //add element
    vec.push_back(4);
    vec.push_back(5);
    vec.push_back(6);

    //remove last element
    vec.pop_back();

    //shrink (capacity = size)
    vec.shrink_to_fit();

    //insert at 3rd index
    vec.insert(vec.begin() + 2, 3);

    //remove element at index
    vec.erase(vec.begin()  + 1);

     //clear vector
    vec.clear();

    //access element
    int first_index = vec[0];
    
    //size (how many elements)
    int size = vec.size();

    //capacity (how much can hold)
    int capacity = vec.capacity();
    
    //traverse
    for(int i = 0; i < size; i++){
        cout << vec[i] << "\n";
    }

    // Check if the vector is empty
    bool check = vec.empty();

    //resize
    vec.resize(10);

    //resize and fill
    vec.resize(10, 1);
  
    //sort
    sort(vec.begin(), vec.end());

    //reverse
    reverse(vec.begin(), vec.end());

    //find
    auto it = find(vec.begin(), vec.end(), 2);

    //find index
    int index = distance(vec.begin(), it);

    //find max element
    int max = *max_element(vec.begin(), vec.end());

    //find min element
    int min = *min_element(vec.begin(), vec.end());

    //find sum of elements
    int sum = accumulate(vec.begin(), vec.end(), 0);

    //find average of elements
    int average = sum / vec.size();

    //find frequency of element
    int freq = count(vec.begin(), vec.end(), 2);

    //find frequency of element
    int freq = count(vec.begin(), vec.end(), 2);
}