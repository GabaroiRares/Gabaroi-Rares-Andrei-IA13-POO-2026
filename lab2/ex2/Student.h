#pragma once
class Student
{
private:
	char* name;
	float mathGrade;
	float englishGrade;
	float historyGrade;
public:
	Student();
	~Student();

	void SetNume(const char* name);
	const char* GetNume();

	void SetMath(float grade);
	float GetMath();

	void SetEnglish(float grade);
	float GetEnglish();

	void SetHistory(float grade);
	float GetHistory();

	float GetAverage();
};

