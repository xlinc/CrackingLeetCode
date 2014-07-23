#include<iostream>
#include<string>
#include<vector>
#include<stack>
#include<sstream>
#include<map>
#include<unordered_set>
#include<unordered_map>

#include"ListNode.h"
#include"Point.h"
#include"RandomListNode.h"
#include"UndirectedGraphNode.h"

using namespace std;
class Solution{
private:
	unordered_map<UndirectedGraphNode*, UndirectedGraphNode*> nodemap;
public:
	void reverseWords(string &s);

	int myatoi(string &s);
	string myitoa(int i);
	int evalRPN(vector<string> &tokens);

	int maxPoints(vector<Point> &points);

	ListNode *sortList(ListNode *head);
	ListNode* merge(ListNode* l1, ListNode* l2);
	ListNode* mergeSort(ListNode* list);

	ListNode *insertionSortList(ListNode *head);

	void reorderList(ListNode *head);

	ListNode *detectCycle(ListNode *head);
	bool hasCycle(ListNode *head);

	vector<string> wordBreak(string s, unordered_set<string> &dict);
	void findWordBreak(string s, int idx, unordered_set<string> &dict, string ans, vector<string> &ret);
	bool findWordBreak1(string s, int idx, vector<int> &ans, vector<vector<int>> &ret, vector<vector<int>> &sucs, bool* tag);
	bool findWordBreak2(string s, int idx, vector<int> &ans, vector<vector<int>> &ret, bool **dp, bool *tag);
	void findWordBreak3(string s, int idx, vector<int> ans, vector<vector<int>> &ret, vector<vector<int>> &sucs);

	bool wordBreak1(string s, unordered_set<string> &dict);
	bool findWordBreak4(string s, int idx, vector<vector<int>> &sucs, bool* tag);

	RandomListNode* copyRandomList(RandomListNode *head);

	int singleNumber(int A[], int n);

	int candy(vector<int> &ratings);

	int canCompleteCircuit(vector<int> &gas, vector<int> &cost);

	UndirectedGraphNode *cloneGraph(UndirectedGraphNode *node);
};