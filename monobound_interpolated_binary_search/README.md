# Monobound Interpolated Binary Search


In **Monobound Interpolated Binary Search**, instead of comparing the target value with the value in the middle of the array as is done in [standard binary search](../standard_binary_search), the actual values in it are taken into account to compute the estimated position by linear interpolation.


## Computational Cost

In the worst case, in the standard binary search, the computational time and the number of comparisons are $\mathcal{O}{\left(\log{n}\right)}$.

The interpolation is done assuming a uniform distribution among the elements of the array: when the distribution is not uniform the performance drops, but not significantly.