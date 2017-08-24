# Assignment - 4, Data Structure LAB

### Input Format
* First line consist initial no. of photos.
* Next line contains N integers, initial vote of photos.

### Output Format
> Depends on commands.

### Sample Testcases:
Input:  
```
7
2 3 4 1 5 6 7
1	# Insearting a photo with 5 initial votes.
5
2	# Upvoting photo with ID 4 
4
3	# Downvoting photo with ID 1
1
4	# Deleting photo with ID 6
6
```

Output:
```
<0, 2> <1, 3> <2, 4> <3, 1> <4, 5> <5, 6> <6, 7> 	        # Insearted values
<6, 7> <4, 5> <5, 6> <3, 1> <1, 3> <0, 2> <2, 4> 	        # Heap after Heapifying
<0, 5> <1, 4> <2, 6> <3, 3> <4, 1> <5, 2> <6, 0> 	        # IDX Array
<6, 7> <4, 5> <5, 6> <7, 5> <1, 3> <0, 2> <2, 4> <3, 1>		# Heap after insearting 5
<0, 5> <1, 4> <2, 6> <3, 7> <4, 1> <5, 2> <6, 0> <7, 3>		# IDX after insearting 5
<6, 7> <4, 6> <5, 6> <7, 5> <1, 3> <0, 2> <2, 4> <3, 1> 	# Heap after upvoting ID 4
<0, 5> <1, 4> <2, 6> <3, 7> <4, 1> <5, 2> <6, 0> <7, 3>		# IDX after upvoting ID 4
<6, 7> <4, 6> <5, 6> <7, 5> <1, 2> <0, 2> <2, 4> <3, 1> 	# Heap after downvoting ID 1
<0, 5> <1, 4> <2, 6> <3, 7> <4, 1> <5, 2> <6, 0> <7, 3> 	# IDX after downvoting ID 1
<4, 6> <5, 6> <7, 5> <1, 2> <0, 2> <2, 4> <3, 1> 	        # Heap after deleting ID 6
<0, 4> <1, 3> <2, 5> <3, 6> <4, 0> <5, 1> <6, -1> <7, 2>	# IDX after deleting ID 6
```
