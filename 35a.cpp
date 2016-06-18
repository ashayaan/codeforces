#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<stdio.h>
#include<stdlib.h>


using namespace std;

int main(){
	FILE *input=fopen("input.txt","r");
	int cup;
	fscanf(input,"%d\n", &cup);
	int i=3;
	int a,b;
	while(i--){
		fscanf(input ,"%d %d\n",&a,&b);
		if( a == cup)
			cup = b;
		else if(b == cup)
			cup = a;
		else
			continue;
	}
	fclose(input);
	FILE *out =fopen("output.txt","w");
	fprintf(out,"%d\n",cup);
	fclose(out);
	//cout<<cup<<endl;
	return 0;
}
