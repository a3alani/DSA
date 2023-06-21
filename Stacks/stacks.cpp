#include <iostream>
#include <stack>
using namespace std;

int main() {
    stack<int> nums;

    nums.push(1);
    nums.push(3);
    nums.push(5);
    nums.push(7);
    nums.push(9);

   /*
    * 9
    * 7
    * 5
    * 3
    * 1
    */


    stack<int> temp;

    cout<< nums.top() << endl; // 9

    cout << nums.size() << endl; // 5

    cout << !nums.empty() << endl; // 1 or 0 if empty

     // Copy elements to the temp stack
    while (!nums.empty()) {
        temp.push(nums.top());
        nums.pop();
    }

    while (!temp.empty()) {
        cout << temp.top() << endl;
        temp.pop();
    }
}