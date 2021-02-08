#include<iostream>
using namespace std;

char *buffer = NULL;

void allocateBuffer(){
	unsigned size;
	scanf("%u", &size);
	buffer = (char*) malloc(size);

}

int main(){
	cout <<"Hello " <<endl;
	int a = 3;
	int b;

	return 0;
}

