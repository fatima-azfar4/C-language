#include <iostream>
using namespace std;
class Time{
	private:
	int hours=0, minutes=0, seconds=0;
	public:
		Time(){
			cout << "Enter Hours: "<<endl;
			cin>> hours;
			cout << "Enter Minutes: "<<endl;
			cin>> minutes;
			cout << "Enter seconds: "<<endl;
			cin>> seconds;
		}
		void ToSecond(){
			int time=(3600*hours)+(60*minutes)+seconds;
			cout << "The seconds are: "<<time;
		}
};

int main (){
	Time t1;
	t1.ToSecond();
}
