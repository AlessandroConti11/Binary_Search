# Boundless Binary Search


The **Boundless Binary Search** uses only two indices, *bottom* and *mid*.
Inside the cycle if the target value is grater or equal than the value at position ${bottom} + \frac{{middle}}{2}$ the new bottom is set to ${bottom} + \frac{{middle}}{2}$ eliminating the part before it since the element cannot be there and the *middle* is incremented by one.
Otherwise, the *bottom* index remains at the current position ant the *middle* is halved.


## Computational Cost

In the worst case, in the standard binary search, the computational time and the number of comparisons are $\mathcal{O}{\left(\log{n}\right)}$.

This search works better than the standard binary search since the loop contains $1$ key check, $1$ integer check, and (on average) $1.5$ integer assignments.