#include <iostream>
using namespace std;
typedef struct __Point
{
    int xpos;
    int ypos;
} Point;
Point &PntAdder(const Point &p1, const Point &p2)
{
    Point *p3 = new Point();
    p3->xpos = p1.xpos + p2.xpos;
    p3->ypos = p1.ypos + p2.ypos;
    return *p3;
}
int main()
{
    // 임의의 두점 선언
    Point *p1 = new Point();
    Point *p2 = new Point();
    // 동적할당 한 변수를 함수의 참조형 매개변수 인자로 어떻게 전달해야하는가?
    p1->xpos = 1, p1->ypos = 2; // (1, 2)
    p2->xpos = 2, p2->ypos = 1; // (2,1)
    // 함수 내에 선언된 변수를 참조현으로 반환하려면 해당 변수는 어떻게 선언해야 하는가?
    Point &p3 = PntAdder(*p1, *p2);
    cout << p3.xpos << ' ' << p3.ypos << '\n';
    delete p1, p2, &p3;

    return 0;
}