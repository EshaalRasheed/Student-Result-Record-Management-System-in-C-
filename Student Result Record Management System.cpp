#include<iostream>
using namespace std;
struct student
{
	char name[20];
	int rollno;
	int marks[5];
}s1, s2, s3, s4, s5;
void record(student result)
{
	cout << "*****************STUDENT RECORD**************" << endl;
	int total_marks = 0;
	for (int i = 0; i < 5; i++)
	{
		total_marks += result.marks[i];
	}
	float percentage = (float)total_marks / 500.0 * 100.0;
	cout << result.name << "\t" << result.rollno << "\t" << total_marks << "\t\t" << percentage << "%" << endl;
}
int main()
{
	cout << "Student 1" << endl;
	cout << "Name :";
	cin >> s1.name;
	cout << "Roll no:";
	cin >> s1.rollno;
	for (int i = 0; i < 5; i++)
	{
		cout << "Marks in subject " << i + 1 << ":";
		cin >> s1.marks[i];
	}
	cout << "Student 2" << endl;
	cout << "Name :";
	cin >> s2.name;
	cout << "Roll no :";
	cin >> s2.rollno;
	for (int i = 0; i < 5; i++)
	{
		cout << "Marks in subject " << i + 1 << ":";
		cin >> s2.marks[i];
	}
	cout << "Student 3" << endl;
	cout << "Name :";
	cin >> s3.name;
	cout << "Roll no :";
	cin >> s3.rollno;
	for (int i = 0; i < 5; i++)
	{
		cout << "Marks in subject " << i + 1 << ":";
		cin >> s3.marks[i];
	}
	cout << "Student 4" << endl;
	cout << "Name :";
	cin >> s4.name;
	cout << "Roll no:";
	cin >> s4.rollno;
	for (int i = 0; i < 5; i++)
	{
		cout << "Marks in subject " << i + 1 << ":";
		cin >> s4.marks[i];
	}
	cout << "Student 5" << endl;
	cout << "Name :";
	cin >> s5.name;
	cout << "Roll no :";
	cin >> s5.rollno;
	for (int i = 0; i < 5; i++)
	{
		cout << "Marks in subject " << i + 1 << ":";
		cin >> s5.marks[i];
	}
	cout << "Names" << "\t" << "Roll no" << "\t" << "Total Marks" << "\t" << "Percentage" << endl;
	record(s1);
	record(s2);
	record(s3);
	record(s4);
	record(s5);
}

