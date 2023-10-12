#include<stdio.h>
#include<math.h>
int main(){
	float b;  // b coefficient of the equation
	float a;  // a coefficient of the equation
	float c;  // c coefficient of the equation
	float x1; //x1 will be our 1st root variable   //here note that for real root case
    float x2; //x2 will be our 2nd root variable   //here note that for real root case
	float D;  //DETERMINANT according to 9th standard
	float w1; //see the 34th line
    float w2; //see the 35th line
    float squareroot;


    printf("\t\t\tIN A VERY SIMPLE WAY \n\t\t\tTO CALCULATE THE ROOTS OF THIS TYPE OF EQUATION\n\n");
    printf("\t\t\tax^2 + bx +c = 0\n\n");


	printf("\t\t\tENTER THE b :");

	scanf("\t%f", &b);
	printf("\t\t\tENTER THE a :");
	scanf("\t%f", &a);
	printf("\t\t\tENTER THE c :");
	scanf("\t%f", &c);
	D = b*b - 4*a*c;
	if (D<0){
        //for imaginary roots 
        D = D*(-1);
        squareroot = sqrt(D);
        float w3;            //we requireed a another variable to keep the value ; just above
        w3 = (-b)/a;
        float w4;
        w4 = w3/2;
        printf("\t\t\tIT HAVE IMAGIONARY ROOTS\n");
        printf("\t\t\t1st root = %f + %fi\n", w4, squareroot/2);
        printf("\t\t\t2nd roor = %f - %fi\n\n", w4, squareroot/2);


		printf("\t\t\tSEE :>\n");

		return 0;
	}
    else {
        printf("\t\t\tYOU WILL DEFINITELY GET THE REAL ROOTS :)\n");
        squareroot = sqrt(D);
        w1 = (-b+squareroot)/a;
        w2 = (-b-squareroot)/a;
        x1 = w1/2;
        x2 = w2/2;

    printf("\t\t\t1st root is = %f\n", x1);
    printf("\t\t\t2nd root is = %f\n\n", x2);
    }
	

    printf("\t\t\tGOT IT !!!!!!!!\n\n\n");
    printf("\t\t\t:)\n");

return 0;
}
