//using namespace std;
//
//long long solution(int price, int money, int count)
//{
//    long long allPrice = 0;
//
//    // �ݺ��� ���
//    //for (int i = 1; i <= count; i++)
//    //    allPrice += price * i;
//
//    // ���� ���
//    allPrice = (long long)(count * (count + 1) / 2) * price;
//
//    if (allPrice > money)
//        return allPrice - money;
//    return 0;
//}