#include <iostream>
using namespace std;

class Instructor {
    private:
        string name;
    public:
        Instructor(string n){
            name = n;
        }
        
};

class Student {
    private:
        int studentID;
        string name;

    public:
        Student(int sid, string n){
            studentID = sid;
            name = n;
        }

    
};

class CourseGrade {
    private:
        int studentID;
        int courseID;
        double grade;

    public:
        CourseGrade(){
            studentID = 123;
            courseID = 456;
            grade = 0.0;
        }
};

class Course {
    private:

        int courseNumber;
        string name;
        const int capacity = 30;

        Instructor instructor; // also composition
 //       Student students(30);   // composition
        
    public: 
        // the class instructor needs to be in initilization list because it does not have default construction
        Course(int cn, string n, string instructorName): instructor(instructorName), name(n){
            // all objects must be initialized before the body of the constructor
            courseNumber = cn;
        }

};

int main() {

    cout << endl << endl << "The program starts" << endl << endl;
    Instructor nick("Nick");
    Student student(867530, "Chris M");
    cout << endl << "The program ends" << endl;

    return 0;

}