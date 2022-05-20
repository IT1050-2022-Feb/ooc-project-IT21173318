#include"Report.h"
#include<string>
using namespace std;


Report::Report(){}

Report::Report(int preport_id,string preportformat,string preportsize){
	
	report_id=preport_id;
	reportformat=preportformat;
	reportsize=preportsize;
}
void Report::addReport(){
	
	cout << "Report id : " ;
	cin >> report_id;
	
	cout << "Report Format : " ;
	cin >> reportformat;
	
	cout << "Report Size :" ;
	cin >> reportsize;
}
void Report::displayReportDetails(){
	cout << "Report id : " << report_id << endl;
	cout << "Report Format : " << reportformat << endl;
	cout << "Report Size : " << reportsize << endl;
}
void Report::deleteReport(){
	
}
