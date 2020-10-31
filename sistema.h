#pragma once
#include <iostream>
using namespace std;
class sys
{	
public:
	float a1x;
	float a2x;
	float b1y;
	float b2y;
	float tn1;
	float tn2;
	float D;
	float Dx;
	float Dy;
	float x;
	float y;
	float GCD1;
	sys() {
		a1x = 0;
		a2x = 0;
		b1y = 0;
		b2y = 0;
		tn1 = 0;
		tn2 = 0;
		D = 0;
		Dx = 0;
		Dy = 0;
		x = 0;
		y = 0;
	}
	~sys() {
		cout << "Obj deleted" << endl;
		cout << "Obj deleted" << endl;
		cout << "Obj deleted" << endl;
		cout << "Obj deleted" << endl;
		cout << "Obj deleted" << endl;
		cout << "Obj deleted" << endl;
	//for testing purposes
	}
};

