# Assignment - 2, Data Structure LAB

### Input Format
* First line consist no. of test cases T.
* Next line contains, no. of points on 2D-plane N.
* Next N line contains, 2 space seperated integers each representing abscissa and ordinate respectively of points present on plane.

### Output Format
> K lines, each having a point's coordinate representing vertex of convex hull polygon.


### Sample Testcases:
Input:  
```
3
3
1 2
3 1
5 6
3
1 2
4 4
5 1
8
0 3
1 1
2 2
4 4
0 0
1 2
3 1
3 3
```

Output:
```
(5,6)
(3,1)
(1,2)

(4,4)
(5,1)
(1,2) 

(4,4)
(3,1)
(0,0)
(0,3)
```

##### Limitations: 
* Valid only for points on 2D plane
* Stack is assumed to have only 10,000 points at maximum.
* Collinearity conflict is not resolved.


*Reference: <http://www.geeksforgeeks.org/convex-hull-set-2-graham-scan/>*