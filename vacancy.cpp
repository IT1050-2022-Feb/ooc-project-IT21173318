#include"vacancy.h"
using namespace std;


vacancy::vacancy(){}

vacancy::vacancy(int pvacancy_id,string pvacancy_name,string pvacancy_type,string pvacancy_details,string pvacancy_provider){
	
	vacancy_id = pvacancy_id;
	vacancy_name = pvacancy_name;
	vacancy_type= pvacancy_type;
	vacancy_details = pvacancy_details;
	vacancy_provider = pvacancy_provider;
	
}
void vacancy::addvacancy(){
	cout << "Input vacancy id : ";
	cin >> vacancy_id ;	
	
	cout << "Input vacancy Name : ";
	cin >> vacancy_name ;	
	
	cout << "Input vacancy Type : ";
	cin >> vacancy_type ;	
	
	cout << "Input vacancy Details : ";
	cin >> vacancy_details ;	
	
	cout << "Input vacancy Provider : ";
	cin >> vacancy_provider ;	
}
	
void vacancy::searchvacancy(){}

void vacancy::displayvacancy(){
	cout << "Vacancy id : " << vacancy_id << endl;
	cout << "Vacancy Name : " << vacancy_name << endl;
	cout << "Vacancy Type : " << vacancy_type << endl;
	cout << "Vacancy Details : " << vacancy_details << endl;
	cout << "Vacancy Provider : " << vacancy_provider << endl;
}
void vacancy::deletevacancy(){}
