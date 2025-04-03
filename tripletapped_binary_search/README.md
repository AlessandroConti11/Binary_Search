# Tipletapped Binary Search


The **Tripletapped Binary Search** follows the same line of reasoning of the [doubletapped binary search](../doubletapped_binary_search) but this time improving the [monobound binary search](../monobound_binary_search) and not the [boundless binary search](../boundless_binary_search).
When we arrive at the end of a binary search and there are $3$ elements left to analyze it takes $2.5$ checks to finish, however, the monobound binary search takes $3$ checks.


## Computational Cost

In the worst case, in the standard binary search, the computational time and the number of comparisons are $\mathcal{O}{\left(\log{n}\right)}$.

The tripletapped variant performs $3$ equality checks at the end resulting in slightly fewer key check in average.