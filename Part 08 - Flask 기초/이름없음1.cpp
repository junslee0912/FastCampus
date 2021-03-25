#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>
#include <cmath>
using namespace std;
int arr[100000] = { 0 };
int main() {
	int N, T, G, cnt = 0;
	cin >> N >> T >> G;
	queue<pair<int, int> >q;
	q.push(make_pair(N, 0));
	arr[N] = 1;

	int x = q.front().first;
		cnt = q.front().second;
		q.pop();
		if (x * 2 <= 99999 && x > 0)
		{
			int tmp = 2 * x;
			int k = 0;
			while (tmp > 9)
			{
				tmp = tmp / 10;
				k++;
			}
			tmp = 2 * x - (tmp * pow(10, k)) + (tmp - 1) * pow(10, k);
			cout<<tmp;
		}
}
