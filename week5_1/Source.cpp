#include<stdio.h>
#include<conio.h>
int calculate() {
	int a, b;
	int x;
	char ch;
	printf("Do you want to: \n");
	printf("Add, Subtract, Multiply, or Divide ?\n");
	do {
		printf("Enter first letter : ");
		ch = getchar();
		printf("\n");
	} while (ch != 'a' && ch != 's' && ch != 'm' && ch != 'd'); 
		printf("Enter first number : ");
		scanf_s("%d", &a);
		printf("Enter second number : ");
		scanf_s("%d", &b);
		switch (ch)
		{
		case 'a':
			x = a + b;
			break;
		case 's':
			x = a - b;
			break;
		case 'm': 
			x = a * b;
			break;
		case 'd': 
			x = a / b;
		}
		
		return x;
}
int main() {
	int y[2];
	int x;
	printf("Valculate two number are you ready ... \n");
	for (int i = 0; i < 2; i++) {
		y[i] = calculate();
		if (i == 0) {
			printf("number one = %d\n\n", y[i]);
		}
		else {
			printf("number two = %d\n\n", y[i]);
			
		}
		x = y[0] + y[1];
		
	}
	printf("Number one + nuber 2 = %d\n\n", x);
	printf("	draw buterfly\n");
	for (int i = 2;i <= x;i++) {
		for (int y = 2;y <= i;y++) {
			printf("*");
		}
		for (int j = x;j >= i;j--) {
			printf(" ");
			if (j > i) {
				printf(" ");
			}
			else {
				for (int a = 2;a <= i;a++) {
					printf("*");
				}
			}
		}
		printf("\n");
	}
	x = x * 2 - 1;
	for (int i = 1;i <= x;i++) {
		printf("*");
	}
	x = (x - 1) / 2;
	printf("\n");
	for (int i = 1;i <= x;i++) {
		for (int y = x;y >= i;y--) {
			printf("*");
		}
		for (int j = 1;j <= i;j++) {
			printf(" ");
			if (j < i) {
				printf(" ");
			}
			else {
				for (int a = x;a >= i;a--) {
					printf("*");
				}
			}
		}

		printf("\n");
	}
	
	
	
}