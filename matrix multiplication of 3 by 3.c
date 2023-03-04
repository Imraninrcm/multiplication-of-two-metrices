#include<stdio.h>
int main(){
	int a11,a12,a13,a21,a22,a23,a31,a32,a33;
	int b11,b12,b13,b21,b22,b23,b31,b32,b33;
	printf("Enter a11: ");    //enter the element of first row and first coloumn
	scanf("%d", &a11);
	
	printf("Enter a12: ");    // enter the element of first row and second column
	scanf("%d", &a12);
	
	printf("Enter a13: ");    // enter the element of first row and third column
	scanf("%d", &a13);
	
	printf("Enter a21: ");    // enter the element of second row and first column
	scanf("%d", &a21);
	
	printf("Enter a22: ");    // enter the element of second row and second column
	scanf("%d", &a22);
	
	printf("Enter a23: ");    // enter the element of second row and third column
	scanf("%d", &a23);
	
	printf("Enter a31: ");    // enter the element of third row and first column
	scanf("%d", &a31);
	
	printf("Enter a32: ");    // enter the element of third row and second column
	scanf("%d", &a32);
	
	printf("Enter a33: ");    // enter the element of third row and third column
	scanf("%d", &a33);
	// now enter the element of second matix
	printf("Enter b11: ");    //enter the element of first row and first coloumn
	scanf("%d", &b11);
	
	printf("Enter b12: ");    // enter the element of first row and second column
	scanf("%d", &b12);
	
	printf("Enter b13: ");    // enter the element of first row and third column
	scanf("%d", &b13);
	
	printf("Enter b21: ");    // enter the element of second row and first column               
	scanf("%d", &b21);
	
	printf("Enter b22: ");    // enter the element of second row and second column      
	scanf("%d", &b22);
	
	printf("Enter b23: ");    // enter the element of second row and third column                                    
	scanf("%d", &b23);
	
	printf("Enter b31: ");    // enter the element of third row and first column            
	scanf("%d", &b31);
	
	printf("Enter b32: ");    // enter the element of third row and second column                            
	scanf("%d", &b32);
	
	printf("Enter b33: ");    // enter the element of third row and third column                       
	scanf("%d", &b33);
	
	int A11,A12,A13,A21,A22,A23,A31,A32,A33;
	
	A11=(a11*b11)+(a12*b21)+(a13*b31);
	A12=(a11*b12)+(a12*b22)+(a13*b32);
	A13=(a11*b13)+(a12*b23)+(a13*b33);
	
	A21=(a21*b11)+(a22*b21)+(a23*b31);
	A22=(a21*b12)+(a22*b22)+(a23*b32);
	A23=(a21*b13)+(a22*b23)+(a23*b33);
	
	A31=(a31*b11)+(a32*b21)+(a33*b31);
	A32=(a31*b12)+(a32*b22)+(a33*b32);
	A33=(a31*b13)+(a32*b23)+(a33*b33);
	
	printf("The result:\n");
	printf("A11:%d\n",A11);
	printf("A12:%d\n",A12);
	printf("A13:%d\n",A13);
	printf("A21:%d\n",A21);
	printf("A22:%d\n",A22);
	printf("A23:%d\n",A23);
	printf("A31:%d\n",A31);
	printf("A32:%d\n",A32);
	printf("A33:%d\n",A33);
	         
	return 0;
}
