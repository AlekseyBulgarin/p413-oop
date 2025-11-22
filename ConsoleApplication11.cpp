#include <iostream>
#include <string>

using namespace std;

class Student {
protected:
    string name;
    int age;
    string group;
public:
    Student(const string& n, int a, const string& g) : name(n), age(a), group(g) {}
    void display() const {
        cout << "Name: " << name << "\nAge: " << age << "\nGroup: " << group << endl;
    }
};

class Aspirant : public Student {
private:
    string direction;
public:
    Aspirant(const string& n, int a, const string& g, const string& topic)
        : Student(n, a, g), direction(topic) {
    }
    void display() const {
        Student::display();
        cout << "Direction: " << direction << endl;
    }
};

int main() {
    Student student("Ivan Ivanov", 20, "100");
    Aspirant aspirant("Petr Petrov", 25, "200", "AI Research");

    cout << "Student:\n";
    student.display();
    cout << "\nAspirant:\n";
    aspirant.display();

    return 0;
}
