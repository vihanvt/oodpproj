#include <bits/stdc++.h>
using namespace std;
class Student {
private:
    static int totalStudents; 
public:
    //default constructor
    Student() {
        totalStudents++; 
    }
    // method- static is defined to count
    static int getTotalStudents() {
        return totalStudents;
    }
};
int Student::totalStudents = 0;
int main() {
    //student objects
    Student s1;
    Student s2;
    Student s3;
    cout << "Number of students enrolled are - " << Student::getTotalStudents() << endl;
    return 0;
}
