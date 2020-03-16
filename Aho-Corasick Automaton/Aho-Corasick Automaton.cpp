//AC自动机模版
#pragma warning(disable:4996)
#include <iostream>
#include <math.h>
#include <vector>
#include <algorithm>
#include <string.h>
#include <queue>
using namespace std;
typedef long long ll;
const int maxn = 2 * 1e3 + 9;

int trie[maxn][26]; //字典树
int cntword[maxn];  //记录该单词出现次数
int fail[maxn];     //失败时的回溯指针
int cnt = 0; //节点编号
//统计：AC自动机到某根节点的时候使得单词数量+1
void insertWords(string s) {
	int root = 0;
	for (int i = 0; i < s.size(); i++) {
		int next = s[i] - 'a';
		if (!trie[root][next])
			trie[root][next] = ++cnt;
		root = trie[root][next];
	}
	cntword[root]++;//当前节点单词数+1
}
void getFail() {
	queue <int>q;
	for (int i = 0; i < 26; i++) {//将第二层所有出现了的字母扔进队列
		if (trie[0][i]) {
			fail[trie[0][i]] = 0;
			q.push(trie[0][i]);
		}
	}
	while (!q.empty()) {
		int now = q.front();
		q.pop();
		for (int i = 0; i < 26; i++) {      //查询26个字母
			if (trie[now][i]) {
				fail[trie[now][i]] = trie[fail[now]][i];
				q.push(trie[now][i]);
			}
			else
				trie[now][i] = trie[fail[now]][i];
		}
	}
}


int query(string s) {
	int now = 0, ans = 0;
	for (int i = 0; i < s.size(); i++) {
		now = trie[now][s[i] - 'a'];
		for (int j = now; j && cntword[j] != -1; j = fail[j]) {
			ans += cntword[j];
			cntword[j] = -1;
			//这句有无确定是否多次计算关键词emmm
		}
	}
	return ans;
}
int main()
{
	std::ios::sync_with_stdio(false);
	std::cin.tie(0);
	int x;
	cin >> x;
	for (int w = 0; w < x; w++) {
		int n;
		string s;
		cin >> n;
		for (int i = 0; i < n; i++) {
			cin >> s;
			insertWords(s);
		}
		fail[0] = 0;
		getFail();
		cin >> s;
		cout << query(s) << endl;
	}
	return 0;
}

