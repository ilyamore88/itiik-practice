#include <iostream>
#include <string>

using namespace std;

class Student
{
public:
	class ExScore
	{
	public:
		string origin;
		int iValue;
		ExScore(string or1, int sc)
		{
			origin = or1;
			iValue = sc;
		}
	};

	void set_name(string student_name)
	{
		name = student_name;
	}

	string get_name()
	{
		return name;
	}

	void set_last_name(string student_last_name)
	{
		last_name = student_last_name;
	}

	string get_last_name()
	{
		return last_name;
	}

	void set_scores(int student_scores[])
	{
		for (int i = 0; i < 5; ++i) {
			if (student_scores[i] > 5)
			{
				throw ExScore("в функции set_scores()", student_scores[i]);
			}
			scores[i] = student_scores[i];
		}
	}

	void set_average_score(double ball)
	{
		average_score = ball;
	}

	double get_average_score()
	{
		return average_score;
	}
private:
	int scores[5];
	double average_score;
	string name;
	string last_name;
};

int main()
{
	setlocale(LC_ALL, "Russian");
	Student student01;
	string name;
	string last_name;
	int scores[5];

	cout << "Name: ";
	getline(cin, name);
	cout << "Last name: ";
	getline(cin, last_name);

	int sum = 0;
	for (int i = 0; i < 5; i++)
	{
		cout << "Score " << i + 1 << ": ";
		cin >> scores[i];
		sum += scores[i];
	}

	student01.set_name(name);
	student01.set_last_name(last_name);
	try
	{
		student01.set_scores(scores);
		double average_score = sum / 5.0;
		student01.set_average_score(average_score);
		cout << "Average ball for " << student01.get_name() << " " << student01.get_last_name() << " is " << student01.get_average_score() << endl;
	}
	catch (Student::ExScore ex)
	{
		cout << "\nОшибка инициализации " << ex.origin;
		cout << "\nВведённое значение оценки " << ex.iValue << " является недопустимым\n";
	}
	system("pause");
	return 0;
}