#include <iostream>
using namespace std;

int main()
{
    int n;
    float credit, grade, totalCredits = 0, totalGradePoints = 0, cgpa;

    cout << "Enter number of courses: ";
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        cout << "\nCourse " << i << endl;

        cout << "Enter Credit Hours: ";
        cin >> credit;

        cout << "Enter Grade Point: ";
        cin >> grade;

        totalCredits = totalCredits + credit;
        totalGradePoints = totalGradePoints + (credit * grade);
    }

    cgpa = totalGradePoints / totalCredits;

    cout << "\nTotal Credits = " << totalCredits;
    cout << "\nTotal Grade Points = " << totalGradePoints;
    cout << "\nOverall CGPA = " << cgpa << endl;

    return 0;
}
