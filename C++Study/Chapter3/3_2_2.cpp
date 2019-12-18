#include <iostream>
#include <cstring>
using namespace std;
class Printer
{
private:
    char str[100];

public:
    void setString(char *s);
    void showString();
};

void Printer::setString(char *s)
{
    strcpy(str, s);
}
void Printer::showString()
{
    cout << str << '\n';
}
int main()
{
    Printer pnt;
    pnt.setString("Hello world!");
    pnt.showString();

    pnt.setString("I love C++");
    pnt.showString();

    return 0;
}