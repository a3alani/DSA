#include <iostream>
#include <list>

using namespace std;

int main(){
    list<int> nums;

    nums.push_back(1);
    nums.push_back(3);
    nums.push_back(5);
    nums.push_back(7);

    cout << "List size: " << nums.size() << endl;
    cout << "List front: " << nums.front() << endl;
    cout << "List back: " << nums.back() << endl;

    nums.pop_back();
    cout << "List size: " << nums.size() << endl;
    cout << "List front: " << nums.front() << endl;
    cout << "List back: " << nums.back() << endl;

    while(!nums.empty()){
        cout << nums.front() << endl;
        nums.pop_front();
    }

    
}