#ifndef STUDENT_H_
#define STUDENT_H_
#include <string>
#include "scoreaccessexeption.h"

class STUDENT {
private:
	std::string name;
	int group;
	int* score;
public:
	std::string getName();
	void setName(std::string name);
	int getGroup();
	void setGroup(int group);
	int getScore(int N);
	void setScore(int N, int score);
	STUDENT();
	STUDENT(std::string name, int group, int score1, int score2, int score3,
			int score4, int score5);
	~STUDENT();
	bool hasTwo();
};
const bool operator <(STUDENT& left, STUDENT& right);
const bool operator >(STUDENT& left, STUDENT& right);

#endif
