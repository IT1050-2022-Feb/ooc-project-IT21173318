#include<iostream>
using namespace std;
#include<string>

class Report{
	private:
		int report_id;
		string reportformat;
		string reportsize;
		
	public:
		Report();
		Report(int preport_id,string preportformat,string preportsize);
		void addReport();
		void displayReportDetails();
		void deleteReport();
};
