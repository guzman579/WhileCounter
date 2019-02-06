//WhileCounter.cpp
// Counter-controlled repetition with the while repetition statement.
#include <iostream>
using namespace std;

int main()
{
		int counter = 1; // declare and initialize control variable

		while (counter <= 10) // loop-continuation condition
		{
			cout<<" "<< counter<<endl;
			++counter; // increment control variable 
		}

		system("pause");
} // end class 	
