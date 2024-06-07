#include<iostream>
#include<vector>

using namespace std;

int N, M;
vector<int> vec;

void func(int cnt) {
	if (cnt < M) {
		cnt++;
		for (int i = 0; i < N; i++) {
			vec.push_back(i + 1);
			func(cnt);
			vec.pop_back();
		}
		
	}
	else {
		for (int i = 0; i < M; i++) {
			cout << vec[i] << " ";
		}
		cout << endl;
	}
}

int main() {
	cin >> N >> M;
	func(0);
}