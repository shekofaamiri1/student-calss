#include <iostream>
#include <string>
using namespace std;
class Student {
private:
    string name;
    int age;
    float grade;
public:
    void setAge(int a) {
        if (a > 0) age = a;
        else cout << "Invalid age!" << endl;
    }
