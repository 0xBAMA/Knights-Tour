/*
*  Jon Baker 
*   CS3610 
*/
#include <iostream>
#include <cstdlib>
#include "knights_tour.h"
#include <chrono>

using namespace std;

int main(int argc, char** argv) {
  if (argc != 4) {
    cout << "Invalid input" << endl;
    return 0;
  }

  int board_size = atoi(argv[1]);

  int row = atoi(argv[2]);
  int col = atoi(argv[3]);
  

  if (row < 0 || row > board_size-1 || col < 0 || col > board_size-1) 
  {
    cout << "Invalid starting location" << endl;
    return 0;
  }

	KnightsTour knight(board_size);

    /* knight.print(); */

    auto start = std::chrono::high_resolution_clock::now();

    unsigned long long int num_tours = knight.generate(row, col);
	
    cout << "Number of tours: " << num_tours << endl;

    auto end = std::chrono::high_resolution_clock::now();


    cout << endl << endl << "computation completed after " << std::chrono::duration_cast<std::chrono::duration<double>> (end - start).count() << " seconds" << endl;

	return 0;
}
