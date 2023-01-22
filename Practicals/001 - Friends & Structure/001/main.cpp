#include <iostream>
using namespace std;

// Create a structure student with the following members
struct Student
{
  int rollNo;
  int marks[5];
  int average;
  int grade;
};

void calcAvg(Student &s)
{
  int total = 0;
  for (int i = 0; i < 5; i++)
    total += s.marks[i];
  s.average = total / 5;
}

void calcGrade(Student &s)
{
  if (s.average > 70)
    s.grade = 1;
  else if (50 <= s.average && s.average <= 70)
    s.grade = 2;
  else if (s.average < 50)
    s.grade = 3;
}

void display(Student &s)
{
  cout << s.rollNo << ' ';

  for (int i = 0; i < 5; i++)
    cout << s.marks[i] << ' ';

  cout << s.average << ' ' << s.grade << endl;
}

int main()
{
  int noOfStudents;
  cin >> noOfStudents;

  struct Student students[noOfStudents];

  for (int i = 0; i < noOfStudents; i++)
  {
    cin >> students[i].rollNo;

    for (int j = 0; j < 5; j++)
    {
      cin >> students[i].marks[j];
    }

    calcAvg(students[i]);
    calcGrade(students[i]);
    display(students[i]);
  }
}