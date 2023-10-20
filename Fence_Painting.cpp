// Source: https://usaco.guide/general/io

#include <bits/stdc++.h>
using namespace std;

int main() {
	freopen("paint.in", "r", stdin);
	freopen("paint.out", "w", stdout);
	vector<bool> paint(100,false);
	int a,b,c,d;
	scanf("%d %d %d %d", &a,&b,&c,&d );
	for(int i = a ; i<b;i++){
		paint[i] = true;
	}
	for(int i = c ; i<d;i++){
		paint[i] = true;
	}
	int ans = 0;
	for(int i = 0 ; i<paint.size();i++){
		ans += paint[i];
	}
	printf("%d", ans);
	return 0;
}
