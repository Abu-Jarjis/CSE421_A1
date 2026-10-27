#include <stdint.h>


#define F_VALUE 16384




//Conversion

#define itofp(x) ((x)*(F_VALUE))

#define fptoi(x) ( ((x)<0)  ? ( ( (x)-((F_VALUE)/2) ) / (F_VALUE)) : ( ( (x)+((F_VALUE)/2) ) / (F_VALUE))) 

//Addition and subtraction


#define add(x,y) ( (x)+(y))




#define sub(x,y) ((x)-(y))

//For i +- fp


#define addn(x,y) ( (x) + ((y)*(F_VALUE)))

#define subn(x,y) ( (x) - ((y)*(F_VALUE)))

//multiplication and division i and fp

#define multn(x,y) ( (x) *(y))

#define divn(x,y) ( (x) /(y))

//Multiplication and division normal

#define mult(x,y) (((int64_t)(x)) * (y) /(F_VALUE))

#define div(x,y) (((int64_t) (x)) *(F_VALUE) /(y) )
