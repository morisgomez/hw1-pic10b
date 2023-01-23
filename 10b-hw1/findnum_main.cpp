#include "findnum.h"
#include <iostream>
#include <cmath>

using namespace std;

class Tester {
    public:
        // Checks answer and prints success or failed
        bool test(int* got, int* expected);
    private:
        size_t test_num = 1;
        // double thresh = 1.0 / 1024.0;
};

bool Tester::test(int* got, int* expected) {
    cout << "====  Test case " << test_num << "  ====" << endl;
    
    bool success = true;
    
    if (expected == nullptr) {
        if (got != expected) {
            cout << "Not passed yet. Keep trying!" << endl;
            cout << "        Got: " << *got << endl;
            cout << "   Expected: " << "nullptr" << endl;
            success = false;
            cout << endl;
        }
    } else if (got != expected) {
        cout << "Not passed yet. Keep trying!" << endl;
        cout << "        Got: " << *got << " with address " << got << endl;
        cout << "   Expected: " << *expected << " with address " << expected << endl;
        success = false;
        cout << endl;
    }
    
    if (success) {
        cout << "Passed." << endl << endl;
    }
    
    test_num++;
    
    return success;
}


int main() {

    Tester tester;
    
    bool all_passed = true;
    
    
    // Test case 1
    int a1[] = {-5, 0, 1, 2, -3, 20, 15};
    int* p1 = find_num(a1, 7, -3);
    
    bool test_case_passed = tester.test(p1, &a1[4]);
    all_passed = test_case_passed && all_passed;

    
    // Test case 2
    int* a2 = new int[5]{1, 1, 1, 1, 1};
    int* p2 = find_num(a2, 5, 1);

    test_case_passed = tester.test(p2, &a2[0]);
    all_passed = test_case_passed && all_passed;

    
    // Test case 3
    int* a3 = new int[1]{-1};
    int* p3 = find_num(a3, 1, -2);
    
    test_case_passed = tester.test(p3, nullptr);
    all_passed = test_case_passed && all_passed;
    
    
    // Test case 4
    int a4[] = {-1, -2, -3, -4, -5};
    int* p4 = find_num(a4, 5, -5);
    
    test_case_passed = tester.test(p4, &a4[4]);
    all_passed = test_case_passed && all_passed;
    
    
    // Test case 5
    int a5[] = {5, 4, 3, 2, 1};
    int* p5 = find_num(a5, 5, 5);
    
    test_case_passed = tester.test(p5, &a5[0]);
    all_passed = test_case_passed && all_passed;
    
    
    if (all_passed) {
        cout << "Hooray, you passed all tests!" << endl;
    }
    
    return 0;

}
