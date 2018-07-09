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
	fstream outFile("成績.txt", ios::in);
	cout << "學號         " << "姓名        " << "平時成績         "
		<< "期中考         " << "期末考       " << "學期成績"
		<< endl;

	while (outFile >> grade[i].number >> grade[i].name
		>> grade[i].course_score >> grade[i].mid_score
		>> grade[i].final_score) //記事本內資料存進struct
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
	fstream inFile("成績.txt", ios::app);

	cout << "輸入學號：" << endl;
	cin >> grade[i].number;
	cout << "輸入姓名：" << endl;
	cin >> grade[i].name;
	cout << "輸入平時成績：" << endl;
	cin >> grade[i].course_score;
	cout << "輸入期中考：" << endl;
	cin >> grade[i].mid_score;
	cout << "輸入期末考：" << endl;
	cin >> grade[i].final_score;
	inFile << " " << grade[i].number << " " << grade[i].name //struct內資料存進記事本
		<< " " << grade[i].course_score << " " << grade[i].mid_score
		<< " " << grade[i].final_score;
}

int main()
{
	fstream outFile("成績.txt", ios::in);

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
		if (choice == 2) //輸入資料存進struct
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
