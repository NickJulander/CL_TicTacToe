#include <iostream>
#include <cstdio>

using namespace std;

void *createBoard(){
    int arr[3][3] = {{7, 7, 7}, {7, 7, 7}, {7, 7, 7}};
    return *arr;
}


void DisplayBoard(int arr[3][3]){
    for(int i = 0; i < 3; i ++){
      for(int j = 0; j < 3; j ++){
          std::cout<<arr[i][j];
      }
      std::cout<<'/n';
    }
}


int main(){
    int arr[3][3] = {{7, 7, 7}, {7, 7, 7}, {7, 7, 7}};

    bool winner = winner(arr);




    return 0;
}

bool winner(int arr[3][3]){
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
