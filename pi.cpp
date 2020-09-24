#include <iostream>

using namespace std;

int main() {
  	int number_in_circle = 0;
        int number_of_tosses = 50000000;
        int precise = 100000;
        for (int toss = 0; toss < number_of_tosses; toss++) {
                double  x = (double)((rand() % (precise - (-precise) + 1)) + (-precise)) / precise;
                double  y = (double)((rand() % (precise - (-precise) + 1)) + (-precise)) / precise;
                double distance_squared = x * x + y * y;
                if ( distance_squared <= 1) number_in_circle++;
        }
        double pi_estimate = 4 * number_in_circle /(( double ) number_of_tosses);
        cout << "pi: " << pi_estimate;
	return 0;
}
