# Monobound Quaternary Search


The **Monobound Quaternary Search** performs more key checks than the [monobound binary search](../monobound_binary_search) but in some cases when the input array is very large can run faster. 
If the size of the array is greater than a certain value, the algorithm computes the *middle* index as the quarter of the *top* index instead of its half.


## Computational Cost

In the worst case, in the standard binary search, the computational time and the number of comparisons are $\mathcal{O}{\left(\log{n}\right)}$.

From the probabilistic point of view this algorithm reduces the time and number of computation when the array size is very large, otherwise it does not change much compared to the standard binary search.