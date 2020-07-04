# Knights Tour
CS3610 (Data Structures) project - 
  
  This program computes all possible knights tours on an arbitrarily sized chessboard - it has a relatively static memory footprint, and uses unsigned long long ints to count up the number of possible tours for a given starting location.

  Compile with make, or just do g++ main.cpp knights_tour.cpp and then call it with ./a.out < board size  > < starting x > < starting y >

http://gaebler.us/share/Knight_tour.html
  According to this 1x1, 2x2, 3x3 and 4x4 do not exist - this program confirms that is the case.

## My results show that there is (execution time):

  approximately 60 tours for 5x5 (less than a second)

  approximately 524,486 tours for a 6x6 (about 15 minutes)

  letting 7x7 run overnight...
