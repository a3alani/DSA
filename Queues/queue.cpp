#include <iostream>
#include <queue>

using namespace std;

int main(){
    queue<int> nums;

    nums.push(1);
    nums.push(3);
    nums.push(5);
    nums.push(7);

    cout << "Queue size: " << nums.size() << endl;
    cout << "Queue front: " << nums.front() << endl;
    cout << "Queue back: " << nums.back() << endl;

    nums.pop();
    cout << "Queue size: " << nums.size() << endl;
    cout << "Queue front: " << nums.front() << endl;
    cout << "Queue back: " << nums.back() << endl;

    while(!nums.empty()){
        cout << nums.front() << endl;
        nums.pop();
    }
}