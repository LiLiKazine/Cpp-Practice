#ifndef TIME_H
#define TIME_H

class Time
{
private:
    unsigned int hour;   //0~23
    unsigned int minute; //0~59
    unsigned int second; //0~59
public:
    explicit Time(int = 0, int = 0, int = 0);
    Time();

    void setTime(int, int, int);
    void printUniversal() const;
    void printStandard() const;
};

#endif