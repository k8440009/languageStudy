#include <iostream>
using namespace std;
struct Point
{
    int xpos;
    int ypos;
    // 점의 좌표 이동
    void MovePos(int x, int y)
    {
        xpos += x;
        ypos += y;
    }

    void AddPoint(const Point &pos)
    {
        xpos += pos.xpos;
        ypos += pos.ypos;
    }

    void ShowPosition()
    {
        cout << xpos << ' ' << ypos << '\n';
    }
};

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    Point pos1 = {12, 4};
    Point pos2 = {20, 30};

    pos1.MovePos(-7, 10);
    pos1.ShowPosition();

    pos1.AddPoint(pos2);
    pos1.ShowPosition();

    return 0;
}