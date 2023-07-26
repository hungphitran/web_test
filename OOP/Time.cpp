#include <iostream>
using nanespace std;
class Time
{
    private:
    int hour;
    int minute;
    int second;
    public:
    Time(int hour,int minute,int second)
    {
        this->hour=hour;
        this->minute=minute;
        this->second=second;
    }
    void setTime(int hour,int minute,int second)
    {
        this->hour=hour;
        this->minute=minute;
        this->second=second;
    }
    void setHour(int hour)
    {
        this->hour=hour;
    }
    void setMinute(int minute)
    {
        this->minute=minute;
    }
    void setSecond(int second)
    {
        this->second=second;
    }
    int getHour()
    {
        return hour;
    }
    int getMinute()
    {
        return minute;
    }
    int getSecond()
    {
        return second;
    }
    void nextSecond()
    {
        
    }
    void previousSecond()
    {
        
    }
    void display()
    {
        
    }
}
