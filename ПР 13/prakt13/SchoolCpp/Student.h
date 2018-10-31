#pragma once

#include "human.h"
#include <string>
#include <vector>
#include <iostream>

using namespace std;

class Student : public human {
public:
	Student(string last_name, string name, string second_name, vector<int> scores) : human(last_name, name, second_name) {
		this->scores = scores;
	}
	float get_average_score()
	{
		unsigned int count_scores = this->scores.size();
		unsigned int sum_scores = 0;
		float average_score;
		for (unsigned int i = 0; i < count_scores; ++i) {
			sum_scores += this->scores[i];
		}
		average_score = (float)sum_scores / (float)count_scores;
		return average_score;
	}
	void putdata() {
		human::putdata();
		cout << "\nAverage score: " << get_average_score() << endl;
	}
private:
	vector<int> scores;
};
