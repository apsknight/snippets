/**
 *	Aman Pratap Singh (Github: @apsknight), 16CS01011
 *	Indian Institute of Technology Bhubaneswar 
 *	Assignment - 2, Data Structure Lab
 * 	Following Algorithm is implemented with the help of Geeksforgeeks tutorial on Graham's Scan.
 */

#include <stdio.h>
#include <stdlib.h>

// Structures and typedefs
typedef struct {
	int x;
	int y;
} point;

typedef struct {
	// Expecting only 10000 points in plane at max.
	point stk[10000];
	int top;
} stack;

// Global variables
stack s;
point p0;

// Function Prototypes
void push(point);
void pop();
point secondPoint();
int findLow(point*, int);
void swap(point*, point*);
int ccw(point, point, point);
int compare(const point*, const point*);

int main() {
	// Scanning number of test cases
	int t;
	scanf("%d", &t);

	while(t--) {
		// Scanning no. of points
		int n;
		scanf("%d", &n);

		s.top = -1;

		point array[100];

		int i, x, y;
		for(i = 0; i < n; i++) {
			scanf("%d", &x);
			scanf("%d", &y);

			array[i].x = x;
			array[i].y = y;
		}

		int res = findLow(array, n);
		swap(&array[0], &array[res]);
		p0 = array[0];
		qsort(&array[1], n-1, sizeof(point), compare);

		int m = 1;
	    for (int i = 1; i < n; i++) {
	        while (i < n-1 && ccw(p0, array[i], array[i+1]) == 0)
	           i++;	 
	        array[m] = array[i];
	        m++;
	    }

		push(array[0]);
		push(array[1]);
		push(array[2]);

		for (int i = 3; i < m; i++) {
	      	while (ccw(secondPoint(), s.stk[s.top], array[i]) != 2)
	        	pop();
	      	push(array[i]);
		}
		while (s.top != 0) {
       		point p = s.stk[s.top];   
       		printf("(%d,%d)\n", p.x, p.y); 
       		pop();
		}
		printf("(%d,%d)\n", p0.x, p0.y);
	}
}

void push(point pt) {
	// Function for pushing a point into stack.
	s.top = s.top + 1;
	s.stk[s.top] = pt;
	return;
}

void pop() {
	// Function for popping a point from stack.
	s.top = s.top - 1;
	return;
}

point secondPoint() {
	// Function for finding second element in stack from top.
    point p = s.stk[s.top];
    pop();
    point res = s.stk[s.top];
    push(p);
    return res;
}

int findLow(point* array, int n) {
	// Function for finding point having lowest ordinate.(Lower abscissa in case of tie)
	int min = 1<<15;
	int i, res = 0;
	for (i = 0; i < n; i++) {
		if (min < array[i].y) {
			min = array[i].y;
			res = i;
		}
		else if (min = array[i].y) {
			if (array[i].x < array[res].x) {
				res = i;
			}
		}
	}
	return res;
}

void swap(point *p1, point *p2) {
	// Function for swapping two points in array
    point* temp = p1;
    p1 = p2;
    p2 = temp;
}

int ccw(point p, point q, point r) {
	// Function for finding orientation by cross product.
    int angle = (q.y - p.y) * (r.x - q.x) -
              (q.x - p.x) * (r.y - q.y);
 
    return (angle > 0)? 1: 2;
}

int compare(const point *p1, const point *p2) {
	// Compare function for quick sort.
   	int slope = ccw(p0, *p1, *p2);
   	return (slope == 2)? -1: 1;
}