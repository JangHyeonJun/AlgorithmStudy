//#include <string>
//#include <vector>
//#include <math.h>
//
//using namespace std;
//
//vector<pair<int, int>> GetDivisor(int n)
//{
//	vector<pair<int, int>> divisorList;
//	const auto maxWidth = (int)sqrt(n);
//	for (int i = 1; i <= maxWidth; i++)
//		if (n % i == 0)
//			divisorList.push_back(make_pair(n / i, i));
//
//	return divisorList;
//}
//
//vector<int> GetCarpetSize(int brownArea, const vector<pair<int, int>>& yellowLengths)
//{
//	for (auto p : yellowLengths)
//		if (p.first * 2 + p.second * 2 + 4 == brownArea)
//			return vector<int> {p.first + 2, p.second + 2};
//
//	return vector<int>();
//}
//
//vector<int> solution(int brown, int yellow) {
//	vector<int> answer;
//	auto yellowLengths = GetDivisor(yellow);
//	answer = GetCarpetSize(brown, yellowLengths);
//	return answer;
//}
//
//int main()
//{
//	solution(8, 1);
//	return 0;
//}
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//////���� Ǯ��
///*
//// ������ ����Ǿ����ϴ�. �̷� ���� �Լ� �����̳� �׽�Ʈ���̽��� ����Ǿ�, ������ �ڵ�� �������� ���� �� �ֽ��ϴ�.
//// ���ο� �Լ� ������ �����Ϸ��� [�ڵ� �ʱ�ȭ] ��ư�� ��������. ��, [�ڵ� �ʱ�ȭ] ��ư�� ������ �ۼ� ���� �ڵ�� ������ϴ�.
//#include <iostream>
//#include <string>
//#include <vector>
//#include <math.h>
//using namespace std;
//
//vector<int> solution(int brown, int red) {
//	vector<int> answer;
//
//	for (int red_w = sqrt(red); red_w <= red; red_w++)
//	{
//		if (red % red_w == 0 && red <= red_w * red_w)
//		{
//			int red_h = red / red_w;
//			int brown_w = red_w + 2;
//			int brown_h = red_h + 2;
//			if (brown == brown_w * brown_h - red_w * red_h)
//			{
//				answer.push_back(brown_w);
//				answer.push_back(brown_h);
//				break;
//			}
//		}
//	}
//
//
//	return answer;
//}
//
////int main()
////{
////	solution(18, 6);
////	return 0;
////}
//*/