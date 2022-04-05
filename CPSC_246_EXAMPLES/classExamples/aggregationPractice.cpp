#include <iostream>
#include <string>

using namespace std;



class Date
{
private:
	string day;
	string month;
	string year;
public:
	void setDay(string day) 
	{
		this->day = day;
	}
	string getDay()
	{
		return day;
	}
	void setMonth(string month)
	{
		this->month = month;
	}
	string getMonth()
	{
		return month;
	}
	void setYear(string year)
	{
		this->year = year;
	}
	string getYear()
	{
		return year;
	}

};
class Time
{
private:
	string hour;
	string minute;
public:
	void setHour(string hour)
	{
		this->hour = hour;
	}
	string getHour()
	{
		return hour;
	}
	void setMinute(string minute)
	{
		this->minute = minute;
	}

    string getMinute(){
        return minute;
    }
};

class Event
{
private:
	Date date;
	Time time;
	string eventName;
public:
	Event(string eventName, string day, string month, string year, string hour, string minute)
	{
		this->eventName = eventName;
		date.setDay(day);
		date.setMonth(month);
		date.setYear(year);

		time.sethour(hour);
		time.setMinute(minute);

        string getEvent()
        {
            cout << "The event is called" << eventName << endl;
            cout << "on: " << date.getDay() << endl;
            cout << "of " << date.getMonth()

        }
	}
};
int main()
{
	Event concert("ATL", "10", "October", "2021", "5", "30");


	return 0;
}
