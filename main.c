#include <stdio.h> 
#include <stdlib.h>
#include "input.h"


int sequentialSearch(int val, int arr[], int arrSize);
int maximumIndex (int arr[], int arrSize);
int minimumIndex (int arr[], int arrSize);
void bubbleSortAscending (int arr[], int arrSize);
void bubbleSortDescending (int arr[], int arrSize);
void printArr(int arr[], int arrSize);

int main() {

    int numArr[] = {26, 49, 1, 12, 2, 14, 29, 34, 44, 35};
;
    int arrSize = 10;
    int num = 0;

    // Search, selection and sort - 1

    do{
        printf("Integer value? ");
    } while (!readInteger(&num));
    
    int checkSearch = sequentialSearch(num, numArr, arrSize);
    printf("Sequential Search Result: %d\n", checkSearch);

    // Search, selection and sort - 2

    int checkIndexMax = maximumIndex(numArr, arrSize);
    printf("Index of maximum number: %d\n", checkIndexMax);

    // Search, selection and sort - 3

    int checkIndexMin = minimumIndex(numArr, arrSize);
    printf("Index of minimum number: %d\n", checkIndexMin);

    // Search, selection and sort - 4

    bubbleSortAscending(numArr, arrSize);
    printArr(numArr, arrSize);

    /* Array Original = {26, 49, 1, 12, 2, 14, 29, 34, 44, 35}
       Primeira iteração = [26, 1, 12, 2, 14, 29, 34, 44, 35, 49]
       Segunda iteração = [1, 12, 2, 14, 26, 29, 34, 35, 44, 49]
       Terceira iteração = [1, 2, 12, 14, 26, 29, 34, 35, 44, 49] */


    // Search, selection and sort - 5

    bubbleSortDescending(numArr, arrSize);
    printArr(numArr, arrSize);

    /* Array Original = {26, 49, 1, 12, 2, 14, 29, 34, 44, 35}
       Primeira iteração = [49, 26, 12, 2, 14, 29, 34, 44, 35, 1]
       Segunda iteração =  [49, 26, 12, 14, 29, 34, 44, 35, 2, 1]
       Terceira iteração = [49, 26, 14, 29, 34, 44, 35, 12, 2, 1] */


    return EXIT_SUCCESS;
}

// Print an array of integers 

void printArr (int arr[], int arrSize){
    
    printf("[");

    for (int i = 0; i < arrSize; i++)
    {
        printf(" %d ", arr[i]);
    }

     printf("]\n");
    
}

//Sequential Search Algorithm

int sequentialSearch(int val, int arr[], int arrSize){
    for (int i = 0; i < arrSize; i++)
    {
        if(arr[i] == val) return i;
    }

    return -1;
    
}

// Maximum Index

int maximumIndex (int arr[], int arrSize){
   if(arrSize == 0) return -1; 

   int max = arr[0];
   int indexMax = 0;

   for (int i = 1; i < arrSize; i++)
   {
    if(arr[i] > max){
        max = arr[i];
        indexMax = i;
    }
   }

    return indexMax;
}

// Minimum Index

int minimumIndex (int arr[], int arrSize){

    if(arrSize == 0) return -1; 

   int min = arr[0];
   int indexMin = 0;

   for (int i = 1; i < arrSize; i++)
   {
    if(arr[i] < min){
        min = arr[i];
        indexMin = i;
    }
   }

    return indexMin;
}

// Bubble Sort Ascending

void bubbleSortAscending(int arr[], int arrSize){

    int temp = 0;
    for (int i = 0; i < arrSize; i++)
    {
        for (int j = 0; j < arrSize-i-1; j++)
        {
            if(arr[j] > arr[j+1]){

                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
    
}

// Bubble Sort Descending

void bubbleSortDescending(int arr[], int arrSize){

    int temp = 0;
    for (int i = 0; i < arrSize; i++)
    {
        for (int j = 0; j < arrSize-i-1; j++)
        {
            if(arr[j] < arr[j+1]){

                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}


