#include <iostream>
#include <cstdio>
using namespace std;

struct Position {
	int row;
	int col;

	// already implemented for you!
	bool operator==(const Position &other) {
		return row == other.row && col == other.col;
	}
};

void *createBoard(){
    int arr[3][3] = {{7, 7, 7}, {7, 7, 7}, {7, 7, 7}};
    return *arr;
}


void DisplayBoard(int B[3][3]) {

	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			// std::cout << (j < 3 ? std::to_string(B[i][j]) + "\t" : std::to_string(B[i][j]));
            cout << " " << B[i][j] <<" ";
		}
		std::cout << "\n";
	}
}

void PlaceMarker(Position p, int marker, int B[3][3]) {

	B[p.row][p.col] = marker;

}


bool Winner(int arr[3][3]){
    if(arr[0][0] == arr[0][1] == arr[0][2]){

        return true;
    }
    if(arr[1][0] == arr[1][1] == arr[1][2]){
        return true;
    }
    if(arr[2][0] == arr[2][1] == arr[2][2]){
        return true;
    }
    if(arr[0][0] == arr[1][0] == arr[2][0]){
        return true;
    }
    if(arr[0][1] == arr[1][1] == arr[2][1]){
        return true;
    }
    if(arr[0][2] == arr[1][2] == arr[2][2]){
        return true;
    }
    if(arr[0][0] == arr[1][1] == arr[2][2]){
        return true;
    }
    if(arr[0][2] == arr[1][1] == arr[2][0]){
        return true;
    }
    else{
        return false;
    }
}

Position GetPlayerChoice(){
Position desierd_position;
int pos_row, pos_col;
cout<<"Which row do you want to put your pieces."<<endl;
cin>> pos_row;
cout<<"Which column do you want to put your pieces."<<endl;
cin>> pos_col;

desierd_position.row = pos_row;
desierd_position.col = pos_col;


return desierd_position;
}



int main(){
    int arr[3][3] = {{7, 7, 7}, {7, 7, 7}, {7, 7, 7}};


    bool win = false;
    int player = 1;
    Position pos;

    while(!win){
        pos = GetPlayerChoice();
        PlaceMarker(pos, player, arr);
        win = Winner(arr);
        if(!win){
            if(player == 1){
                player = 2;
            }
            else{
                player = 1;
            }
        }
        DisplayBoard(arr);
    }
    cout << "Congrats! Player " << player << " won!" << endl;




    return 0;
}
