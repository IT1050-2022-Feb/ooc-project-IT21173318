#include<iostream>
#include"vacancy.h"
#include<string>
using namespace std;


int main(){
	
	vacancy v1(0001,"Software Engineer","Technical","Primary Duties and responsibility and education qualification","OrangeHRM Inc.");
	v1.displayvacancy();
	v1.searchvacancy();
	v1.deletevacancy();
	
	cout << ".........................................................................................................................."<<endl;
	
	vacancy v2;
	v2.addvacancy();
	v2.displayvacancy();
	v2.searchvacancy();
	v2.deletevacancy();

	cout << ".........................................................................................................................."<<endl;
	
	return 0;
	
}
