/*
�ٽ� �Ⱥ�������.. Ǯ��

- �ѹ� ��ȸ�� ������ Ȯ���� �� ����
- ���ۺ��� �ѹ� ��ȸ�� ������ ���� ��ȣ�� �Ѿ
- �� n���� ��ȸ�ϱ� ���� �� swap���� count�� ������Ŵ

- �̰� ���� reverse�� 3�� ����ؼ� Ǫ�°͵� �ֱ��ѵ�. ���߿� ������ ��������.
- ��ü reverse / �յ�� resverse / �޵�� reverse

*/


//#include <vector>
//#include <algorithm>
//using namespace std;
//
//class Solution {
//public:
//	void rotate(vector<int>& nums, int k) {
//		int n = nums.size();
//		int count = 0;
//		k %= n;
//
//		if (k == 0 || n == 1)
//			return;
//
//		for (int i = 0; count < n; i++)
//		{
//			int currIndex = i;
//			int curr = nums[i];
//
//			do
//			{
//				int targetIndex = (currIndex + k) % n;
//				swap(curr, nums[targetIndex]);
//				currIndex = targetIndex;
//				count++;
//			} while (i != currIndex);
//		}
//	}
//};