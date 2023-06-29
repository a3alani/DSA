#include <iostream>
#include <deque>

using namespace std;

int main(){
    deque<int> nums;

    nums.push_back(3);
    nums.push_back(5);
    nums.push_back(7);

    cout << "front" << nums.front() << endl; //expected 3

    nums.push_front(1);

    cout << "front" << nums.front() << endl; //expected 1
    cout << "back" << nums.back() << endl; //expected 7

    /* 1 3 5 7 */

    nums.pop_front();
    nums.pop_back();

    /* 3 5 */

    cout << "begin: " << *(nums.begin()) << endl; //expected 3
    cout << "end: " << *(nums.end() - 1) << endl; //expected 5

    nums.insert(nums.begin() + 2, 7);

    cout << "end: " << *(nums.end() - 1) << endl; //expected 7

    /* 3 5 7 */

    nums.erase(nums.begin() + 1);

    cout << nums[1] << endl; //expected 7

    cout << "size: " << nums.size() << endl; //expected 2

    cout << "empty: " << nums.empty() << endl; //expected 0

    /* 3 7 */

    while(!nums.empty()){
        cout << nums.front() << endl;
        nums.pop_front();
    }
  
}