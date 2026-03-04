#define _CRT_SECURE_NO_WARNINGS
#include "Student.h"
#include <iostream>
#include <cstring>

		void Student::SetName(const char* x) {
		strcpy(this->name, x);
	}
	char* Student::GetName() {
		return this->name;
	}
	void Student::SetMath(float nume) {
		if (nume >= 1 and nume <= 10) {
			this->math = nume;
		}
		else {
			this->math = 0;
		}

	}

	float Student::GetMath() {
		return this->math;
	}

	void Student::SetEng(float x) {
		if (x >= 1 and x <= 10) {
			this->eng = x;
		}
		else {
			this->eng = 0;
		}

	}
	float Student::GetEng() {
		return this->eng;
	}

	void Student::SetIst(float x) {
		if (x >= 1 and x <= 10) {
			this->ist = x;
		}
		else {
			this->ist = 0;
		}
	}
	float Student::GetIst() {
		return this->ist;
	}
	float Student::Avg() {
		return (this->math + this->eng + this->ist) / 3;
	}
	