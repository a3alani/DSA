#include <iostream>
#include <queue>

using namespace std;

int main(){
    queue<int> nums;

    nums.push(1);
    nums.push(3);
    nums.push(5);
    nums.push(7);

    /* 1 3 5 7 */
    
    nums.pop(); // pop 1

    cout << "Queue front: " << nums.front() << endl; //expexted 3
    cout << "Queue back: " << nums.back() << endl; //expected 7

    cout << "Queue size: " << nums.size() << endl; //expected 3

    cout << "Queue empty: " << nums.empty() << endl; //expected 0

    while(!nums.empty()){
        cout << nums.front() << endl;
        nums.pop();
    }

    /* 3 5 7 */
}