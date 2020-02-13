#include <iostream>
#include <cstdio>
using namespace std;

void *createBoard(){
    int arr[3][3] = {{7, 7, 7}, {7, 7, 7}, {7, 7, 7}};
    return *arr;
}

void DisplayBoard(int B[][3]) {

	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			std::cout << (j < 3 ? std::to_string(B[i][j]) + "\t" : std::to_string(B[i][j]));
		}
		std::cout << "\n";
	}
}

void PlaceMarker(Position p, int marker, int B[][3]) {

	B[p.row][p.col] = marker;

}
      
int main(){
    int arr[3][3] = {{7, 7, 7}, {7, 7, 7}, {7, 7, 7}};
    return 0;
}
