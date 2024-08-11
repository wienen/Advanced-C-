/***********************************************************************
 *
 * Name: Stacks.cpp
 *
 ***********************************************************************/

#include <iostream>
#include <stack>
#include <queue>

using namespace std;

class Test
{
public:
    Test (string name): name(name){
        // cout << "Object " << name << " is created" << endl;

    }

    ~Test () {
        // cout << "Object " << name << " is destroyed" << endl;
    }

    void print() const {
        cout << name << endl;
    }

private:
    string name;
};

int main() {

    cout << ">>>>>>>>>>>>>>>>>>>>> Stacking >>>>>>>>>>>>>>>>>>>>>>" << endl;

    // LIFO
    stack<Test> testStack;

    testStack.push(Test("1 Hans"));
    testStack.push(Test("2 John"));
    testStack.push(Test("3 Sue"));


    while (testStack.size() > 0) {
        Test &test = testStack.top();
        test.print();
        testStack.pop();
    }

    cout << ">>>>>>>>>>>>>>>>>>>>> and Queueing >>>>>>>>>>>>>>>>>>" << endl;

    // FIFO
    queue<Test> testQueue;

    testQueue.push(Test("1 Hans"));
    testQueue.push(Test("2 John"));
    testQueue.push(Test("3 Sue"));

    testQueue.back().print();


    while (testQueue.size() > 0) {
        Test &test = testQueue.front();
        test.print();
        testQueue.pop();
    }



    return 0;
}
