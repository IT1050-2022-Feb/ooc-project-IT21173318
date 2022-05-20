#include<iostream>
#include<string>
using namespace std;

class vacancy{
	private:
		int vacancy_id;
		string vacancy_name;
		string vacancy_type;
		string vacancy_details;
		string vacancy_provider;
		
	public:
		vacancy();
		vacancy(int pvacancy_id,string pvacancy_name,string pvacancy_type,string vacancy_details,string vacancy_provider);
		void addvacancy();
		void searchvacancy();
		void displayvacancy();
		void deletevacancy();
		
};
