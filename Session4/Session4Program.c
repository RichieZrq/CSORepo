#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define n 100  // static array, max size 100
#define true 1
#define false 0

/* funcation prototypes */
int readFile(char*, int[], int);
int insertInOrder(int[], int);
void printArray(int[]);

/* global variables */
int next=0;

int main(int argc, char* argv[]){
  int A[n];
  switch (argc) {
    case 1 : return EXIT_FAILURE;
    case 2 : readFile(argv[1], A, false);
           break;
    case 3 : readFile(argv[2], A, true);
           break;
    default: return EXIT_FAILURE;
  }
  printArray(A);
  return EXIT_SUCCESS;
}

int readFile(char* fname, int A[], int flag){
  int tmp=0;
  FILE* fp = fopen(fname,"r");
  if (fp==NULL) return EXIT_FAILURE;
  while (fscanf(fp,"%d",&tmp)>0){
    if (next==0)
       A[next++]=tmp;
    else if (flag==true)
      insertInOrder(A, tmp);
    else if (flag==false)
      A[next++] = tmp;
  }
  return EXIT_SUCCESS;
}


int insertInOrder(int A[], int value){
  int j=next-1;
  while (j>=0 && A[j]>value)
    {A[j+1] = A[j];
    j--;
  }
  A[j+1] = value;
  next++;
  return EXIT_SUCCESS;
} 

void printArray(int A[]){
  for (int i=0; i<next; i++)
    printf("%d ",A[i]);
  printf("\n");
}