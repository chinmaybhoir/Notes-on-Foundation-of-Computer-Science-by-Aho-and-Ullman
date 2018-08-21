<div id="table-of-contents">
<h2>Table of Contents</h2>
<div id="text-table-of-contents">
<ul>
<li><a href="#sec-1">1. Notes on chapter II - Iteration, Induction, and Recursion</a>
<ul>
<li><a href="#sec-1-1">1.1. Iteration</a>
<ul>
<li><a href="#sec-1-1-1">1.1.1. What is iteration?</a></li>
<li><a href="#sec-1-1-2">1.1.2. Selection sort using iteration</a></li>
</ul>
</li>
</ul>
</li>
</ul>
</div>
</div>


# Notes on chapter II - Iteration, Induction, and Recursion<a id="sec-1" name="sec-1"></a>

## Iteration<a id="sec-1-1" name="sec-1-1"></a>

### What is iteration?<a id="sec-1-1-1" name="sec-1-1-1"></a>

-   It's a way to perform repetitive oprations on particular data
-   Achieved by employing some kind of looping concept, such as for-loops, while-loops etc.

### Selection sort using iteration<a id="sec-1-1-2" name="sec-1-1-2"></a>

Suppose we have a list of numbers [3, 1, 4, 1, 5, 9, 2, 6, 5] (if you haven't observed, this is approximate value of Pi),
and we want to sort it so that they appear in increasing order (including repetitive numbers).
So our goal is to get list as [9, 6, 5, 5, 4, 3, 2, 1, 1].

To do so, we proceed as follows:
-   Find smallest element by iterating through unsorted list
-   Exchange the first element of unsorted list with smallest element we just found
-   Consider the elements till the index that we just exchanged smallest element with as 'sorted', and rest of the list as 'unsorted'
-   Repeat these steps for unsorted list

In other words (or symbols, if you will)
-   If we have a list of n elements A, find smallest element in A[0 &#x2026; n-1]
-   Replace A[ 0 ] with the smallest element we just found
-   Now find the smallest element in list A[1 &#x2026; n-1], which is considered as 'unsorted list' and repeat the procedure

Following is the C function that performs selection sort

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