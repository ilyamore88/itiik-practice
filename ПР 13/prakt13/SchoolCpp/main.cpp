#include <iostream>
#include <vector>
#include "human.h"
#include "Student.h"
#include "Teacher.h"

using namespace std;

int main()
{
	vector<int> scores;
	scores.push_back(5);
	scores.push_back(3);
	scores.push_back(4);
	scores.push_back(4);
	scores.push_back(5);
	scores.push_back(3);
	scores.push_back(3);
	scores.push_back(3);
	scores.push_back(3);

	Student *stud = new Student("Moroz", "Ilya", "Olegovich", scores);
	cout << stud->get_full_name() << endl;
	cout << "Average score: " << stud->get_average_score() << endl;

	unsigned int teacher_work_time = 40;
	Teacher *tch = new Teacher("Kupina", "Anna", "Pavlovna", teacher_work_time);
	cout << tch->get_full_name() << endl;
	cout << "Work time: " << tch->get_work_time() << endl;

	stud->putdata();
	tch->putdata();

	stud->example(5);
	stud->human::example(5);

	system("pause");
	return 0;
}
