#include <bits/stdc++.h>
using namespace std;
int partition(int array[],int leftIndex,int rightIndex){
 int pivotValue = array[rightIndex];
 int toBePivotIndex = (leftIndex - 1);
 for(int comparisonIndex = leftIndex; comparisonIndex <= rightIndex - 1;
comparisonIndex++){
 if ( array[comparisonIndex] < pivotValue) {

 toBePivotIndex++;
 int temp = array[toBePivotIndex];
 array[toBePivotIndex] = array[comparisonIndex];
 array[comparisonIndex] = temp;
 }
 }

 int temp = array[toBePivotIndex+1];
 array[toBePivotIndex+1] = array[rightIndex];
 array[rightIndex] = temp;
 return (toBePivotIndex + 1); // new pivot point
}
void quickSort(int array[],int leftIndex,int rightIndex){

 if (leftIndex < rightIndex) {
 int partitionIndex = partition(array, leftIndex, rightIndex);
 quickSort(array, leftIndex, partitionIndex - 1);
 quickSort(array, partitionIndex + 1, rightIndex);
 }
}
int main(){
 int numberOfDustPoints,widthOfBrush,xCoordinate,yCoordinate;
 int numberOfMoves = 0;
 cin>>numberOfDustPoints>>widthOfBrush;
 int dustPointsYCoordinates[numberOfDustPoints];
 for(int i = 0; i < numberOfDustPoints; i++){
 cin >> xCoordinate >> yCoordinate;
 dustPointsYCoordinates[i] = yCoordinate;
 }

 quickSort(dustPointsYCoordinates,0, numberOfDustPoints-1);

 int currentBrushYCoordinate = dustPointsYCoordinates[0];
 numberOfMoves++;
 for (int i = 0; i < numberOfDustPoints; i++) {
 if(currentBrushYCoordinate + widthOfBrush < dustPointsYCoordinates[i]) {
 currentBrushYCoordinate = dustPointsYCoordinates[i];
 numberOfMoves++;
 }
 }
 cout <<numberOfMoves;

 return 0;
}