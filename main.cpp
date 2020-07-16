#include<windows.h>
#include<iostream>
#include<string>
#include <boost/thread/thread.hpp>
//#include<thread>
#include<time.h>
using namespace std;
#include <unordered_set>
int main()//main program
{
	clock_t start,end;
	const int max=20000;
	int **p=new int*[max]; 
	for(int i=0;i<max;i++)
		p[i]=new int[max];
	for(int i=0;i<max;i++)
		for(int j=0;j<max;j++)
			p[i][j]=1;


	start=clock();
	int shum=0;
	for(int i=0;i<max;i++)
		for(int j=0;j<max;j++)
			shum+=p[i][j];
	end=clock();
	cout<<" 运行时间："<<end-start<<"   "<<shum<<endl;


    start=clock();
	shum=0;
	for(int i=0;i<max;i++)
		for(int j=0;j<max;j++)
			shum+=p[j][i];
	end=clock();
	cout<<" 运行时间："<<end-start<<"   "<<shum<<endl;
	return 0;   
}
