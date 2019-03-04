#include <iostream>
#include "181195.h"
using namespace std;
student::student()// Default Constructor
{
	counter++;
	ID = counter;
	quizCapacity = 3;
	quizScore = new float[quizCapacity];
	quizTaken = 0;
	GPA = -1;
}
student::student(int cap,float gpa)// Overloaded Constructor
{
	counter++;
	ID = counter;
	quizCapacity = cap;
	quizScore = new float[quizCapacity];
	quizTaken = 0;
	GPA = gpa;
}
student::student(const student & a)// Copy Constructor
{
	ID = a.ID;
	quizCapacity = a.quizCapacity;
	quizScore = new float[quizCapacity];
	for(int i=0; i<quizCapacity; i++)
		quizScore[i] = a.quizScore[i];
	quizTaken = a.quizTaken;
	GPA = a.GPA;

}
student :: ~student()//Destructor
{

	delete[] quizScore;

}
void student :: addQuizScore(int score)// Adds the new score of a quiz
{
	if(quizTaken < quizCapacity)
	{	
		quizScore[quizTaken] = score;
		quizTaken++;
	}
	else
		cout<<"The array is full!!!"<<endl;
}
void student :: setGPA(float gpa)// Sets the GPA
{
	GPA =gpa;
}
float student :: getGPA() const // Returns the value of GPA
{
	return GPA;
}
void student :: print() const // Prints the Student information
{
	cout<<"ID: "<<ID<<endl;
	cout<<"GPA: "<<GPA<<endl;
	cout<<"Quizzes Taken: "<<quizTaken<<endl;
	for(int i=0 ; i < quizTaken ;i++)
		cout<<"Quiz "<<i<<" = "<<quizScore[i]<<endl;
}
bool student :: compare(student other)//Compares two students' GPA
{
	if(GPA >= other.GPA)
		return true;
	return false;
}
void student :: updateScore(int quizNo,int newScore)// Updates quiz score if taken
{
	if(quizNo <= quizTaken)
		quizScore[quizNo-1] = newScore;
	else
		cout<<"Quiz "<< quizNo<< " was not taken"<<endl;
}
int student :: counter = 0;
