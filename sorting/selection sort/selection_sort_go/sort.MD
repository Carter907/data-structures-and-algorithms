### Explaination

First, we start by asserting that the first value in the array is the lowest.
Next, we verify this by iterating through the subarray greater than the first value i+1
we compare each subsequent value in the rest of the array with the variable (e) housing the smallest number
from i+1-len(data) once we have the number we check if e is still equal to i. If it is, then no swap is necessary as i is indeed
the smallest from i+1-len(data) meaning it's in order.

As we keep performing this operation as i increases, are array will become sorted.

The takeaway is this. if you can put the correct element at the 0th index you can sort the entire array by following a that technique.

### Efficiency of Selection Sort

Because the number of comparison is shrinking equaivalently to i increasing, We can write the number
of comparisons as follows

> (N)+(N-1)+(N-2)+(N-3)+...+(N-N-1)
