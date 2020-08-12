#include <iostream>
#include <stdlib.h>
#include <ctime>

using namespace std;

void bubbleSort(int a[], int n){
    for(int i = 0; i < n - 1; i++){
        for(int j = 0; j < n - i - 1; j++){
            if(a[j] > a[j+1]){
                swap(a[j], a[j+1]);
            }
        }
    }
}

int arr[10000];
time_t starttime, endtime;

void generateArray(){
    for(int i = 0; i < 10000; i++){
        arr[i] =  rand() % 1000000;
    }
}

int main(){
    starttime=time(NULL);
    bubbleSort(arr, 10000);
    endtime=time(NULL);
    double diff = difftime(endtime, starttime);
    printf("%lf",diff);
    return 0;
}