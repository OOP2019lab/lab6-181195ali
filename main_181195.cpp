#include <iostream>
#include "181195.h"
using namespace std;
void main()
{
	student s1;
	s1.addQuizScore(10);
	s1.addQuizScore(3);
	s1.addQuizScore(7);
	s1.addQuizScore(1);

	student s2(4,2);
	s2.addQuizScore(9);
	s2.addQuizScore(4);
	s2.addQuizScore(6);
	s2.print();

	student s3 = s1;// Coppy constructor was invoked here
	s3.updateScore(1,3);
	s3.updateScore(10,3);
	
	cout<< s1.compare(s2)<<endl;
	s3.setGPA(3.0);
	s3.print();
	s1.print();


}// The destructor was invoked here because the scope ended
