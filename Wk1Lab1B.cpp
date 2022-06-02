//Dylan Nelson X00144862
//URL(used to help):https://github.com/krishamoud/absolute-cpp/blob/master/ch1/project2.cpp
#include<iostream>
using namespace std;

int main() {
	double mouseDeath, mouseWeight, dietGoal, bodyWeightPercentage, sodaPercent;
	int totalSoda;
	const double SODA_PERCENT = 0.001;
	const double SODA_WEIGHT = 330.0;
	cout << "How many mls did the mouse ingest before dying?: ";
	cin >> mouseDeath;
	cout << "How much did the mouse weigh (in mg)?: ";
	cin >> mouseWeight;
	cout << "What is your ideal weight (in kg)?: ";
	cin >> dietGoal;

	bodyWeightPercentage = mouseDeath / mouseWeight;
	totalSoda = (dietGoal * bodyWeightPercentage);
	sodaPercent = SODA_PERCENT * SODA_WEIGHT;
	cout << "You can drink " << (totalSoda / sodaPercent) << " 330mls cans of soda without dying." << endl;

	return 0;
}