#include <iostream>
#include <string>
using namespace std;
class BasicInfo {
protected:
int empId;
string name;
public:
void getBasicInfo() {
cout << "Enter employee ID: ";
cin >> empId;
cin.ignore();
cout << "Enter employee name: ";
getline(cin, name);
}
void displayBasicInfo() const {
cout << "Employee ID : " << empId << endl;
cout << "Name : " << name << endl;
}
};
class DepartmentInfo {
protected:
string department;
string designation;
public:
void getDeptInfo() {

cout << "Enter department: ";
getline(cin, department);
cout << "Enter designation: ";
getline(cin, designation);
}
void displayDeptInfo() const {
cout << "Department : " << department << endl;
cout << "Designation : " << designation << endl;
}
};
class Employee : public BasicInfo, public DepartmentInfo {
private:
double salary;
public:
void getEmployeeInfo() {
getBasicInfo();
getDeptInfo();
cout << "Enter salary: ";
cin >> salary;
}
void displayEmployeeInfo() const {
cout << "\nEmployee Information" << endl;
displayBasicInfo();
displayDeptInfo();
cout << "Salary : " << salary << endl;
}
};
int main() {
Employee emp;
emp.getEmployeeInfo();
emp.displayEmployeeInfo();
return 0;
}
