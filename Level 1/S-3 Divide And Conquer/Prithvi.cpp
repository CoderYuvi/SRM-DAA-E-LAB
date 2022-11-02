// Prithvi are in the world of mathematics to solve the great "Monkey and the carrot".
// It states that, a monkey enters into a diamond shaped two dimensional array and can jump in any of the adjacent cells down from its current position (see figure).
// While moving from one cell to another, the monkey eats all the carrots kept in that cell.
// The monkey enters into the array from the upper part and goes out through the lower part.
// Find the maximum number of carrots the monkey can eat.



#include <bits/stdc++.h>
using namespace std;
int main()
{
 int numberOfColumns;
 cin>>numberOfColumns;
 int bananaMatrix[2 * numberOfColumns - 1][numberOfColumns]; //Input matrix
 int maxBanana[2 * numberOfColumns - 1][numberOfColumns]; //Memoized matrix
 memset(maxBanana, 0, sizeof(maxBanana)); //Setting 0 to all cell, will update for maximum
 memset(bananaMatrix, 0, sizeof(bananaMatrix)); //Setting 0 to all cell, will update for inputs
 //Input for upper triangle
 for (int row = 0; row < numberOfColumns; row++)
 for (int column = 0; column <= row; column++)
 cin >> bananaMatrix[row][column];
 //Input for lower triangle
 int shiftedPosition = 1;
 for (int row = numberOfColumns; row < (numberOfColumns * 2) - 1; row++)
 {
 for (int column = shiftedPosition; column < numberOfColumns; column++)
 cin >> bananaMatrix[row][column];
 shiftedPosition++;
 }
 maxBanana[0][0] = bananaMatrix[0][0];
 for (int row = 1; row < numberOfColumns; row++)
 {
 for (int column = 0; column <= row; column++)
 if (column == 0)//Caution for negative indexes.
 maxBanana[row][column] = maxBanana[row - 1][column] +
bananaMatrix[row][column];
 else
 maxBanana[row][column] = max(maxBanana[row - 1][column], maxBanana[row
- 1][column - 1]) + bananaMatrix[row][column];
 }
 //Memoizing the lower triangle to store the max value
 shiftedPosition = 1;
 for (int row = numberOfColumns; row < (numberOfColumns * 2) - 1; row++)
 {
 for (int column = shiftedPosition; column < numberOfColumns; column++)
 maxBanana[row][column] = max(maxBanana[row - 1][column], maxBanana[row -
1][column - 1]) + bananaMatrix[row][column];
 shiftedPosition++;
 }
 cout <<maxBanana[2 * numberOfColumns - 2][numberOfColumns - 1];

 return 0;
 cout<<"cin>>carrotMatrix[row][column];";
}