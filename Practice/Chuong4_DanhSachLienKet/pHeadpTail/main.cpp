#include <iostream>
using namespace std;
struct Node{
	int data;
	Node *pNext;
};
struct SingleList{
	Node *pHead;
	Node *pTail;
};
void init(SingleList &list) {
	list.pHead=NULL;
	list.pTail=NULL;
}
int main(int argc, char** argv) {
	return 0;
}
