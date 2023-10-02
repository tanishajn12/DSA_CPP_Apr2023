#include <bits\stdc++.h>
using namespace std;

class Student {
private:
    static std::map<std::string, int> studentNumberCounters;
    string enrollmentNumber;
    string branchCode;
    string academicYear;
    int studentNumber;


public:
    Student(string branchCode, string academicYear) {
        this->branchCode = branchCode;
        this->academicYear = academicYear;
        this->studentNumber= ++studentNumberCounters[branchCode + academicYear];
        this->enrollmentNumber = generateEnrollmentNumber();
    }

    string generateEnrollmentNumber() {
        string studentNumberStr= to_string(studentNumber);
        while(studentNumberStr.length()<3) {
            studentNumberStr = "0" + studentNumberStr;
        }
       
        string enrollmentNumber = studentNumberStr + "0" + branchCode + academicYear;
        return enrollmentNumber;
    }

    void displayInfo() {
        cout << "Enrollment Number: " << enrollmentNumber<<endl;
        cout<< "Branch Code: " << branchCode<<endl;
        cout<< "Academic Year: " << academicYear <<endl;
    }
};
map<std::string, int> Student::studentNumberCounters;

int main() {
    map<string,string> branchCodes = {
        {"AIML", "119"},
        {"IT", "120"},
        {"CSE", "121"},
        {"CSE-AI", "122"},
        {"ECE", "123"},
        {"ECE-AI", "124"},
        {"MAE", "125"}
    };

    string branch, academicYear;

    cout << "Enter Branch: ";
    cin >> branch;

    auto it = branchCodes.find(branch);
    if (it != branchCodes.end()) {
        string branchCode = it->second;

        cout << "Enter Academic Year: ";
        cin >> academicYear;

        Student student(branchCode, academicYear);
        student.displayInfo();
    } 
    else {
        cout << "Branch not found in dictionary." << endl;
    }
    return 0;
}


