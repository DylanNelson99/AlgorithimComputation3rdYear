//Dylan Nelson X00144862
//URL(used to help):https://www.dreamincode.net/forums/topic/173005-c-program-guidance/
#include<iostream>
using namespace std;

int main()
{
		double const metric_ton = 35273.92;
		double ounces, boxes;
		double weight_calculation; 
		double number_of_boxes; 

		cout << "Enter the weight of your cereal.\n";
		cin >> ounces; 
		

		weight_calculation = ounces / metric_ton;

		cout << "The weight of the cereal in metric tonnes is.\n";
		cout << weight_calculation << "\n";

		number_of_boxes = metric_ton / ounces;

		cout << "The number of boxes of cereal that will hold a ton is.\n";

		cout << number_of_boxes << "\n";

		return (0); 

		
}


