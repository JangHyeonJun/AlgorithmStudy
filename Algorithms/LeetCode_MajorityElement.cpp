//#include <vector>
//#include <unordered_map>
//using namespace std;
//
//class Solution {
//public:
//    int majorityElement(vector<int>& nums) {
//        unordered_map<int, int> um;
//        int maxCount = 0;
//        int maxNum = 0;
//
//        for (auto n : nums)
//        {
//            if (um.contains(n) == false)
//                um[n] = 1;
//            else
//                um[n]++;
//
//            if (um[n] > maxCount)
//            {
//                maxCount = um[n];
//                maxNum = n;
//            }
//        }
//
//        return maxNum;
//    }
//};

// NOTE: ������ ���ݼ� �̻��̶�� ������ �ֱ⶧����
// maxCount �ϳ��� ������ Ǯ���ִ�.
// �ĺ��ϰ�� count�� �ø���
// �ƴҰ�� count�� �ٿ���
// count�� 1�̻��� i�� ������ �ȴ�. ��������;