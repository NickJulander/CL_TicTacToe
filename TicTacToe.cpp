#include <iostream>
#include <cstdio>

using namespace std;

void *createBoard(){
    int arr[3][3] = {{7, 7, 7}, {7, 7, 7}, {7, 7, 7}};
    return *arr;
}

int main(){
    int arr[3][3] = {{7, 7, 7}, {7, 7, 7}, {7, 7, 7}};
    return 0;
}
