#include <iostream>
using namespace std;
class Calculator
{
private:
    int AddCnt, MinCnt, MulCnt, DivCnt;

public:
    void Init()
    {
        AddCnt = 0, MinCnt = 0, MulCnt = 0, DivCnt = 0;
    }
    void ShowOpCount()
    {
        cout << "Add : " << AddCnt << '\n';
        cout << "Min : " << MinCnt << '\n';
        cout << "Mul : " << MulCnt << '\n';
        cout << "Div : " << DivCnt << '\n';
    }
    double Add(double a, double b)
    {
        AddCnt += 1;
        return a + b;
    }
    double Mul(double a, double b)
    {
        MinCnt += 1;
        return a * b;
    }
    double Min(double a, double b)
    {
        MinCnt += 1;
        return a - b;
    }
    double Div(double a, double b)
    {
        DivCnt += 1;
        return a / b;
    }
};
int main()
{
    Calculator cal;
    cal.Init();
    cout << "3.2 + 2.4 = " << cal.Add(3.2, 2.4) << endl;
    cout << "3.5 / 1.7 = " << cal.Div(3.5, 1.7) << endl;
    cout << "2.2 - 1.5 = " << cal.Min(2.2, 1.5) << endl;
    cout << "4.9 * 1.2 = " << cal.Mul(4.9, 1.2) << endl;
    cal.ShowOpCount();
    return 0;
}