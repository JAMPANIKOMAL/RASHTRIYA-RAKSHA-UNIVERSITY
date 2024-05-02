//OPERATOR OVERLOADING

#include <iostream>
using namespace std;

class Time
{
    private:
	int Hours;
	
    public:
	Time() {}
        Time(int h)
	{
	    Hours = h;
	}
	void displaydata()
	{
	    cout << "Hours: " << Hours << endl;
	}
	Time operator + (Time T); 
};

Time Time :: operator + (Time T)
{
    Time tmp;
    tmp = Hours + T.Hours;
    return tmp;
}

int main()
{
    Time t1(2);
    Time t2(3); 
    Time t3;
    t3 = t1 + t2;
    t3.displaydata();

    return 0;
}
