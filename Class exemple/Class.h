/*
 * Class.cpp
 *
 *  Created on: 8 июн. 2023 г.
 *      Author: User
 */

#include <string>
using std::string;
using namespace std;
class GradeBook
{
public:
	GradeBook(string);
	void setCourseName(string);
	string getCourseName();
	void displayMessage();

private:
	string courseName;
};


