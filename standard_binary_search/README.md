# Standard Binary Search


The **Standard Binary Search** begins to compare the target with the middle element of the array and if they are not equal, the half in which the target cannot be found is eliminated and the search continues on the remaining half. 
We repeat this procedure where the half gets smaller and smaller until we find the target value or conclude that it is not in the array.


## Computational Cost

In the worst case the computational time and the number of comparisons are $\mathcal{O}{\left(\log{n}\right)}$.