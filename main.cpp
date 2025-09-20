#include <iostream>
#include <string>
using namespace std;
class Student {
private:
    string name;
    int age;
    float grade;
public:
// Setter ها
    void setName(const string& n) {
        name = n;
    }
    void setAge(int a) {
        if (a > 0) age = a;
        else cout << "Invalid age!" << endl;
    }
void setGrade(float g) {
        if (g >= 0.0 && g <= 100.0) grade = g;
        else cout << "Invalid grade!" << endl;
    }