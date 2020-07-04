/*
*  Jon Baker
*   CS3610
*/
#ifndef KNIGHTS_TOUR_H
#define KNIGHTS_TOUR_H

#include<stack>
#include <vector>
using namespace std;

class KnightsTour {

public:
	KnightsTour(int board_size);

	unsigned long long int generate(int row, int col);

private:
	void move(int row, int col, int& m, unsigned long long int& num_tours);
  	void get_moves(int row, int col, int row_moves[], int col_moves[], int& num_moves);
	void print();

	int board_size;
	vector<vector<int> > board;
	int row, col;
};

#endif
