// Add a new student: Each student has a name, roll number, and marks in three subjects (Math, English, and Science).

// Display student details: Display the details of all students, including their names, roll numbers, and total marks.

// Calculate grade: Calculate the grade of each student based on their total marks using the following grading system:

// Total marks less than 150: Grade "F"
// Total marks between 150 and 200: Grade "D"
// Total marks between 200 and 250: Grade "C"
// Total marks between 250 and 300: Grade "B"
// Total marks above 300: Grade "A"
// Search for a student: Given a student's roll number, display the details of that student.

// Exit the program: Allow the user to exit the grading system
#include<iostream>
#include<string>

using namespace std;


struct Student {
    string name;
    int rollNumber;
    int marksMath;
    int marksEnglish;
    int marksScience;
    int totalMarks;
    char grade;
};
void Grade(Student& student) {
    student.totalMarks = student.marksMath + student.marksEnglish + student.marksScience;

    if (student.totalMarks < 150) 
    { 
        student.grade = 'F';
    } 
    else if (student.totalMarks <= 200) 
    {
        student.grade = 'D';
    } 
    else if (student.totalMarks <= 250) 
    {
        student.grade = 'C';
    } 
    else if (student.totalMarks <= 300)
     {
        student.grade = 'B';
    } 
    else
     {
        student.grade = 'A';
    }
}

int main() {
    const int numStudents = 5;
    Student students[numStudents];
   for (int i = 0; i < numStudents; ++i) {
        cout << "Enter details for student " << i + 1 << endl;
        cout << "Name: ";
        cin >> students[i].name;
        cout << "Roll Number: ";
        cin >> students[i].rollNumber;
        cout << "Marks in Math: ";
        cin >> students[i].marksMath;
        cout << "Marks in English: ";
        cin >> students[i].marksEnglish;
        cout << "Marks in Science: ";
        cin >> students[i].marksScience;

        Grade(students[i]);
    }

    cout << "Details of all students:"<< endl;
    for (int i = 0; i < numStudents; ++i) 
    {
        cout << "Student " << i + 1 << endl;
        cout << "Name: " << students[i].name << endl;
        cout << "Roll Number: " << students[i].rollNumber << endl;
        cout << "Total Marks: " << students[i].totalMarks << endl;
        cout << "Grade: " << students[i].grade << endl;
        cout << "---------------------"<<endl;
    }
    int searchRollNo;
    cout << "Enter roll number to search for a student: ";
    cin >> searchRollNo;

    bool found = false;
    for (int i = 0; i < numStudents; ++i) {
        if (students[i].rollNumber == searchRollNo) {
            cout << "\nDetails of student with roll number " << searchRollNo << ":\n";
            cout << "Name: " << students[i].name << endl;
            cout << "Total Marks: " << students[i].totalMarks << endl;
            cout << "Grade: " << students[i].grade << endl;
            found = true;
            break;
        }
    }

    if (!found) {
        cout << " The Student  roll no " << searchRollNo << "  is not found " <<endl;
    }
    return 0;
}
