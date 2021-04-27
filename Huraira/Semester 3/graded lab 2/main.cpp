#include "time.h"
int main()
{
    time t1(5, 6, 6);
    time t2(t1);
    time t3(9, 35, 47);
    t1.display(t1);
    t2.display(t2);
    t3.display(t3);
    t1.addTime(t1, t3);
    t2.subtractTime(t3, t1);
}