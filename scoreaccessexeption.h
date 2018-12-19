#ifndef SCOREACCESSEXEPTION_H_
#define SCOREACCESSEXEPTION_H_

#include <exception>

class ScoreAccessExeption: public std::exception {
public:
	ScoreAccessExeption();
	~ScoreAccessExeption();
	virtual const char* what() const throw ();
};

#endif
