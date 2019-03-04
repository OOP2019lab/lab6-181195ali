#include <iostream>
#include "181195.h"
using namespace std;
void student :: printStudentArray(student* arr,int size)// Prints the normal array
{
	for(int i=0 ; i<size ; i++)
		arr[i].print();
}
void student :: printStudentDynamicArray(student** ptr, int size)// Prints the dynamic array
{
	for(int i=0 ; i< size ; i++)
		ptr[i] -> print();

}
void main()
{
	student std[3]={student(3,2.0),student(3,3.0),student(4,2.33)};//Overloaded constructor invoked
	std[0].addQuizScore(1);
	std[0].addQuizScore(4);
	std[0].addQuizScore(10);
	std[1].addQuizScore(10);
	std[1].addQuizScore(4);
	std[1].addQuizScore(9);
	std[2].addQuizScore(9);
	std[2].addQuizScore(8);
	std[2].addQuizScore(7);
	
	for(int i=0; i<3; i++)
		std[i].print();

	student** dyArr = new student*[4];
	dyArr[0] = new student(3,2.0);//Overloaded constructor invoked
	dyArr[1] = new student(3,3.0);//Overloaded constructor invoked
	dyArr[2] = new student(4,2.33);//Overloaded constructor invoked
	dyArr[3] = new student(4,1.0);//Overloaded constructor invoked
	dyArr[0] -> addQuizScore(1);
	dyArr[0] -> addQuizScore(4);
	dyArr[0] -> addQuizScore(10);
	dyArr[1] -> addQuizScore(10);
	dyArr[1] -> addQuizScore(4);
	dyArr[1] -> addQuizScore(9);
	dyArr[2] -> addQuizScore(9);
	dyArr[2] -> addQuizScore(8);
	dyArr[2] -> addQuizScore(7);
	dyArr[3] -> addQuizScore(2);
	dyArr[3] -> addQuizScore(3);

	printStudentArray(std,3);
	printStudentDynamicArray(dyArr, 4);

	for(int i=0 ; i< 4 ; i++)
		delete[] dyArr[i];
	delete[] dyArr;
}