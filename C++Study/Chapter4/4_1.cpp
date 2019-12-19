#include <iostream>
using namespace std;
class FruitSeller
{
private:
    int APPLE_PRICE;
    int numOfApples;
    int myMoney;

public:
    void InitMembers(int price, int num, int money)
    {
        APPLE_PRICE = price;
        numOfApples = num;
        myMoney = money;
    }

    int SaleApples(int money)
    {
        if (money < 0)
        {
            cout << "잘못된 정보가 전달 되어 판매 취소합니더" << '\n';
            return 0;
        }
        int num = money / APPLE_PRICE;
        numOfApples -= num;
        myMoney += money;
        return num;
    }

    void showSalesResult() const
    {
        cout << "남은 사과 : " << numOfApples << endl;
        cout << "판매 수익 : " << myMoney << endl
             << endl;
    }
};

class FruitBuyer
{
private:
    int numOfApples;
    int myMoney;

public:
    void InitMembers(int money)
    {
        numOfApples = 0;
        myMoney = money;
    }

    void BuyApples(FruitSeller &seller, int money)
    {
        if (money < 0)
        {
            cout << "잘못된 정보가 전달 되어 구매를 취소합니더" << '\n';
            return;
        }
        numOfApples += seller.SaleApples(money);
        myMoney -= money;
    }

    void showSalesResult() const
    {
        cout << "현재 잔액 : " << myMoney << endl
             << endl;
        cout << "사과 갯수 : " << numOfApples << endl;
    }
};
int main()
{
    // 초기화
    FruitSeller seller;
    seller.InitMembers(1000, 20, 0);
    FruitBuyer buyer;
    buyer.InitMembers(5000);

    cout << "과일 판매자의 현황" << endl;
    seller.showSalesResult();
    cout << "과일 구매자의 현황" << endl;
    buyer.showSalesResult();
    // 실행
    buyer.BuyApples(seller, 2000);
    // 출력
    cout << "과일 판매자의 현황" << endl;
    seller.showSalesResult();
    cout << "과일 구매자의 현황" << endl;
    buyer.showSalesResult();

    return 0;
}