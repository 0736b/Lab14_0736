#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void shuffle(int *,int *, int *, int *);

int main(){
	int a = 50, b = 100, c = 500, d = 1000;
	
	srand(time(0));	
	
	for(int i = 0;i < 10;i++){
	    shuffle(&a,&b,&c,&d);
	    cout << a << " " << b << " " << c << " " << d << "\n";
	}
	
	return 0;
}

void shuffle(int *a, int *b, int *c, int *d){
	int pos = rand()%4;
	int tempa = *a;
	int tempb = *b;
	int tempc  = *c;
		if(pos == 0){
			*a = *b;
			*b = tempa;
		}
		if(pos == 1){
			*b = *c;
			*c = tempb;
			
		}
		if(pos == 2){
			*c = *d;
			*d = tempc;
		}
		if(pos == 3){
			*a = *d;
			*d = tempa;
		}
}

