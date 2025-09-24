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
    // Getter ها
    string getName() const {
        return name;
    }
    int getAge() const {
        return age;
    }
    float getGrade() const {
        return grade;
    }
    void display() const {
        cout << "Name: " << name << "\nAge: " << age << "\nGrade: " << grade << endl;
    }
};
nt main() {
    Student s, s1;

    s.setName("Ali");
    s.setAge(20);
    s.setGrade(87.5);

    s.display();
    cout <<"\n-------------------------------\n";
    s1.setName("Mohammadi.......");
    s1.setAge(32);
    s1.setGrade(8.0);

    s1.display();

    return 0;
}
