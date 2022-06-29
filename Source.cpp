/*
*	Created by: thom0075
*	On: 27/10/2020
*	Language: C++
*	Solve math problems with Cramer`s method
*/
#include <iostream>
#include <string>
#include <algorithm>
#include <chrono>
#include <thread>
#include <cmath>
#include "sistema.h"
using namespace std;
float D0();	//no parameters  

float GCD_finder(float a,float b);

int main() {

	float user_input_1;
	cout << "Inserisci A1x > " << endl;
	cin >> user_input_1;

	float user_input_2;
	cout << "Inserisci A2x > " << endl;
	cin >> user_input_2;

	float user_input_3;
	cout << "Inserisci B1y > " << endl;
	cin >> user_input_3;

	float user_input_4;
	cout << "Inserisci B2y > " << endl;
	cin >> user_input_4;


	float user_input_5;
	cout << "Inserisci il primo termine noto (sopra) > " << endl;
	cin >> user_input_5;

	float user_input_6;
	cout << "Inserisci il primo termine noto (sotto) > " << endl;
	cin >> user_input_6;

	sys problem1;

	problem1.a1x = user_input_1;
	problem1.a2x = user_input_2;
	problem1.b1y = user_input_3;
	problem1.b2y = user_input_4;
	problem1.tn1 = user_input_5;
	problem1.tn2 = user_input_6;

	//cout << problem1.a1x << endl; // testing only

	problem1.D = problem1.a1x * problem1.b2y - problem1.a2x* problem1.b1y;
	cout <<"The result is: "<< problem1.D << endl;		

	problem1.Dx = problem1.tn1 * problem1.b2y - problem1.tn2 * problem1.b1y;
	cout << "The result is: " << problem1.Dx << endl;

	problem1.Dy = problem1.a1x * problem1.tn2 - problem1.a2x * problem1.tn1;
	cout << "The result is: " << problem1.Dy << endl;

	problem1.x = problem1.Dx / problem1.D;

	if ((int)problem1.x == problem1.x) {
		cout << problem1.x << " <-- X" << endl;
	}
	else if ((int)problem1.x != problem1.x) {
		cout << problem1.Dx << " / " << problem1.D << endl;
	}

	problem1.y = problem1.Dy / problem1.D;
	cout << problem1.y << " <-- Y" << endl;

	cout << "MCD: " << GCD_finder(problem1.Dx, problem1.D) << endl;

	string input1__;
	cout << "Premi enter per uscire dal programma" << endl;
	cin >> input1__;

	
}
float GCD_finder(float a, float b) {
	if (a == 0) {
		return a;
	}
	if (b == 0) {
		return b;
	}
	if (a == b) {
		return a;
	}
	if (a > b) {
		return GCD_finder(a - b, b);	//recursive function call
		return GCD_finder(a, b - a);
	}
	
}
//It works!
