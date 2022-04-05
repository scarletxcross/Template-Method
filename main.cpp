

#include "StudentOne.h"

int main(int argc,char* argv[])
{
	TestPaper* one = new StudentOne;
	one->QuestionOne();
	one->QuestionTwo();
	one->QuestionThree();

	cin.ignore();

	return 0;
}

