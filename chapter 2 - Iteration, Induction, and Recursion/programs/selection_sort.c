#include <stdio.h>

void SelectionSort(int A[], int n)
{
  int i, j, temp, smallest;
  for(i = 0; i < n; i++){
    smallest = A[i];
    temp = i;
    // Now we iterate through the unsorted list
    for(j = i+1; j < n; j++){
      if(smallest > A[j]){
	smallest = A[j];
	temp = j;
      }
    }
    A[temp] = A[i];
    A[i] = smallest;
  }
}

void main()
{
  int elements[9] = {3, 1, 4, 1, 5, 9, 2, 6, 5};
  int i;
  printf("Unsorted list:");
  for(i = 0; i < 9; i++) {
    printf("%d", elements[i]);
  }
  printf("\n");
  SelectionSort(elements, 9);
  printf("Sorted list:");
  for(i = 0; i < 9; i++) {
    printf("%d", elements[i]);
  }
  printf("\n");
}
    
