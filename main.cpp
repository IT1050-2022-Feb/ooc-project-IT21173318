#include<iostream>
#include"vacancy.h"
#include<string>
using namespace std;


int main(){
	//Vacancy
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
	
	
	//Report
	
		
	Report R1(6556,"Interview report","1GB");
	R1.displayReportDetails();
	R1.deleteReport();
	
	cout << "..................................................................................................................."<<endl;

	Report R2;
	R2.addReport();
	R2.displayReportDetails();
	R2.deleteReport();
	
	return 0;
	
}
