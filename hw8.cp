#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;

struct score
{
	char number[10];
	char name[10];
	int course_score;
	int mid_score;
	int final_score;
	int total;
};
score grade[50];

void choice1(int i)
{
	fstream outFile("���Z.txt", ios::in);
	cout << "�Ǹ�         " << "�m�W        " << "���ɦ��Z         "
		<< "������         " << "������       " << "�Ǵ����Z"
		<< endl;

	while (outFile >> grade[i].number >> grade[i].name
		>> grade[i].course_score >> grade[i].mid_score
		>> grade[i].final_score) //�O�ƥ�����Ʀs�istruct
	{
		cout << grade[i].number << setw(10) << grade[i].name
			<< setw(15) << grade[i].course_score << setw(15)
			<< grade[i].mid_score << setw(15) << grade[i].final_score << setw(15);

		cout << grade[i].course_score*0.3 +
			grade[i].mid_score*0.3 + grade[i].final_score*0.4 << endl;
		i++;
	}
	cout << endl;
}

void choice2(int i)
{
	fstream inFile("���Z.txt", ios::app);

	cout << "��J�Ǹ��G" << endl;
	cin >> grade[i].number;
	cout << "��J�m�W�G" << endl;
	cin >> grade[i].name;
	cout << "��J���ɦ��Z�G" << endl;
	cin >> grade[i].course_score;
	cout << "��J�����ҡG" << endl;
	cin >> grade[i].mid_score;
	cout << "��J�����ҡG" << endl;
	cin >> grade[i].final_score;
	inFile << " " << grade[i].number << " " << grade[i].name //struct����Ʀs�i�O�ƥ�
		<< " " << grade[i].course_score << " " << grade[i].mid_score
		<< " " << grade[i].final_score;
}

int main()
{
	fstream outFile("���Z.txt", ios::in);

	while (true)
	{
		int choice;
		cout << "Enter your choice:" << endl
			<< "(1)Show grades of all students" << endl
			<< "(2)Add a new student" << endl
			<< "(3)Exit" << endl;
		cin >> choice;
		int i = 0;
		if (choice == 1)
		{
			choice1(i);
		}
		if (choice == 2) //��J��Ʀs�istruct
		{
			choice2(i);
		}
		if (choice == 3)
		{
			break;
		}
	}

	system("pause");
	return 0;
}
