# Doubletapped Binary Search


The **Doubletapped Binary Search** uses the same reasoning as [standard binary search](../standard_binary_search), [boundless binary search](../boundless_binary_search), emphasizing that when $2$ elements remain, it takes exactly $2$ key checks to terminate the procedure.


## Computational Cost

In the worst case, in the standard binary search, the computational time and the number of comparisons are $\mathcal{O}{\left(\log{n}\right)}$.

When only $2$ elements remain, it can end with $1$ key check or $2$: this results in fewer key checks being performed on average.