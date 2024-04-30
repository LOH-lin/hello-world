#include<iostream>
using namespace std;

int main(){
	int a,aa;
	int b,bb;
	while(1){
		cin>>a>>aa;//lai 
		cin>>b>>bb;//hui 
		int tmp1,tmp2;
		tmp1 = b-a;
		tmp2 = bb-aa;
		if(tmp2<0){
			tmp1-=1;tmp2 +=60;
		}
		printf("%dh %2dmin\n",tmp1,tmp2);
	}
}
