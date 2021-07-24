//#include <string>
//#include <vector>
//#include <queue>
//#include <algorithm>
//#include <iostream>
//
//#define TIME pair<long long, long long>
//using namespace std;
//
//// �ɸ��� �ð��� ������ ����ϸ� ������ �ð��� ã�� �̺�Ž���ϴ� Ǯ�̹�� ���.
//unsigned long long GetImmigrationCount(const unsigned long long& waitingTime, const vector<int>& workingTimes)
//{
//    unsigned long long count = 0;
//    for (auto& workingTime : workingTimes)
//        count += waitingTime / workingTime;
//
//    return count;
//}
//
//unsigned long long solution(int n, vector<int> times) {
//    unsigned long long answer = 0;
//    unsigned long long high = 1000000000000000001;
//    unsigned long long low = 1;
//    unsigned long long mid = (high + low) / 2;
//
//    sort(times.begin(), times.end());
//
//    while (low <= high)
//    {
//        mid = (high + low) / 2;
//
//        if (GetImmigrationCount(mid, times) < n)
//            low = mid + 1;
//        else
//            high = mid - 1;
//    }
//    
//    return low;
//}


// �켱���� ť ������ (�ð� �ʰ�)
//
//long long solution(int n, vector<int> times) {
//    long long answer = 0;
//    
//    priority_queue<TIME, vector<TIME>, greater<TIME>> pq;
//	for (int i = 0; i < times.size(); i++)
//        pq.push(make_pair(times[i], times[i]));
//
//    for (int i = 0; i < n; i++)
//    {
//        const auto& time = pq.top();
//        answer = time.first;
//        const auto& newTime = make_pair(time.first + time.second, time.second);
//        pq.pop();
//        pq.push(newTime);
//    }
//    return answer;
//}
//
//int main()
//{
//    vector<int> v = { 4, 3, 2, 1 };
//    vector<int> v2 = { 7, 10 };
//    cout << solution(6, v2) << endl;
//
//    return 0;
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
//
//
//
// ���� ����
//#include <string>
//#include <vector>
//
//using namespace std;
//
//unsigned long long immigration_people(vector<int> times, unsigned long long time)
//{
//	unsigned long long people = 0;
//	for (int n : times)
//		people += time / n;
//	return people;
//}
//
//unsigned long long solution(int n, vector<int> times) {
//	unsigned long long mid;
//	unsigned long long high = 2000000000000000000;
//	unsigned long long low = 0;
//
//	while (low <= high)
//	{
//		mid = (low + high) / 2;
//		unsigned long long people = immigration_people(times, mid);
//		if (people < n)
//			low = mid + 1;
//		else if (people >= n)
//			high = mid - 1;
//	}
//
//
//	return low;
//}