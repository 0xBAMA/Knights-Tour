/*
*  Jon Baker 
*   CS3610 
*/
#include <iostream>
#include <cstdlib>
#include "knights_tour.h"
using namespace std;

int main(int argc, char** argv) {
  if (argc != 3) {
    cout << "Invalid input" << endl;
    return 0;
  }

  int row = atoi(argv[1]);
  int col = atoi(argv[2]);
  if (row < 0 || row > 7 || col < 0 || col > 7) {
    cout << "Invalid starting location" << endl;
    return 0;
  }

	KnightsTour knight(6);

    /* knight.print(); */

  int num_tours = knight.generate(row, col);
	cout << "Number of tours: " << num_tours << endl;

	return 0;
}
