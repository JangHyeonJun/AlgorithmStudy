#include <string>
#include <vector>

using namespace std;
long long solution(long long orderAmount, long long taxFreeAmount, long long serviceFee) {
    // orderAmount : �ֹ��ݾ�
    // taxFreeAmount : ������ݾ�
    // serviceFee : �����    
    long long answer = 0;

    // ���޴밡
    long long supplyMount = orderAmount - serviceFee;
    // ���ް���
    double supplyValue = (orderAmount - serviceFee + taxFreeAmount * 0.1f) / 1.1f;;
    // ���� �ݾ�
	double taxAmount = supplyValue - taxFreeAmount;
	// �ΰ���ġ��. 
    long long taxAddAmount = taxAmount / 10; // 0.1 �ø�

    if (supplyMount - taxFreeAmount == 1)
        return 0;

    //supplyMount = supplyValue + taxAddAmount;

    //taxAddAmount = taxAmount * 0.1;
    //taxAddAmount = supplyMount - supplyValue;

    //taxAddAmount = (supplyValue * 0.1f) - (taxFreeAmount * 0.1f);

    //supplyValue * 1.1f - taxFreeAmount * 0.1f = supplyMount;
    //supplyValue * 1.1f = supplyMount + taxFreeAmount * 0.1f;
    //supplyValue = (orderAmount - serviceFee + taxFreeAmount * 0.1f) / 1.1f;

    answer = taxAddAmount;

    return answer;
}