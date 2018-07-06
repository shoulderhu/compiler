#include<stdio.h>
void func(int x){
	switch(x){
		case(0):
		printf("a");
		break;

		case(1):
		printf("b");
		break;
	}
}
int main(void){
	int a=0;
	func(a);

}