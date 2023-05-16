/*
 * Pros: accessing or reading elements O(1)
 * Cons: static size, searching O(n)
 
 * arrays are passed by reference: pointer to array's first element
 * mo out of bounds check in c++
 * find sort time complexity
 * arrays have sequential memory: eficient access and traversal
 * static size
 * null elements if not assigned a value
 */
#include <iostream>

using namespace std;

int main(){

    //declare an Array
    int nums[5];

    //initialize an Array
    int data[4] = {6,1,9,0};

    /* operations */

    //get element at index
    int first_index = data[0]; 

    //re-assign
    data[1] = 0; //new data array --> {6,0,9,0}

    //size of array
    int length = sizeof(data) / sizeof(*data);

    //traverse each element
    for(int i = 0; i < length; i++){
        cout << data[i] << "\n";
    }

    //reverse an array
    int start = 0;
    int end = length - 1;

    while(start < end){
        int temp = data[start];
        data[start] = data[end];
        data[end] = temp;

        start++;
        end--;
    } 

    //sort
    sort(data, data+length); //memory address (sequential)    

    //nested arrays
    int matrix[2][3] = {
        {1,2,3},
        {4,5,6}
    };

    int rows = sizeof(matrix) / sizeof(*matrix); //matrix[0] = *matrix
    int cols = sizeof(*matrix) / sizeof(**matrix); //matrix[0][0] = **matrix
    for(int i = 0; i < rows; i++){
        for(int j = 0; j < cols; j++){
            cout << matrix[i][j] << "\n";
        }
    }

    //passing array to function
    int sumArray(int arr[], int size){
        return arr[0] + arr[1] + arr[2];
    }
}