#include <iostream>
using namespace std;
// Cau truc ds lien ket
struct Node{
	int data;
	Node *pNext;
};
//Khoi tao danh sach lien ket
struct SingleList{
	Node *pHead;
};
// Khoi tao Node dau tien
void Initialize(SingleList &list) {
	list.pHead = NULL;
}
//Tao danh sach lien ket
Node * CreatNode(int d){
	Node *pNode = new Node;
	if(pNode != NULL) {
		pNode->data = d;
		pNode->pNext = NULL;
	}
	else {
		cout<<"Cap phat bo nho loi.";
	}
	return pNode;
}
//In danh sach lien ket
void PrintList(SingleList list) {
	Node *pTmp = list.pHead;
	if(pTmp==NULL) {
		cout<<"Danh sach rong!";
		return ;
	}
	while(pTmp!=NULL) {
		cout<<pTmp->data<<" ";
		pTmp=pTmp->pNext; 
	} 
}
//Dem so luong phan tu
int SizeOfList(SingleList list) {
	Node *pTmp = list.pHead;
	int nSize = 0;
	while(pTmp!=NULL) {
		nSize++;
		pTmp=pTmp->pNext;
	}
	return nSize;
}
void InsertFirst(SingleList &list, int d){
	Node *pNode = CreatNode(d);
	if(list.pHead == NULL) {
		list.pHead=pNode;
	}
	else{
		pNode->pNext=list.pHead;
		list.pHead=pNode;
	}
}
void InsertLast(SingleList &list, int d) {
	Node *pNode = CreatNode(d);
	if(list.pHead==NULL) {
		list.pHead=pNode;
	}
	else{
		Node *pTmp=list.pHead;
		while(pTmp->pNext!=NULL) {
			pTmp=pTmp->pNext;
		}
		pTmp->pNext=pNode;
	}
}
void InsertMid(SingleList &list, int pos, int d) {
	if(pos<0 || pos>=SizeOfList(list)) {
		cout<<"Vi tri chen khong hop le.";
		return;
	}
	if(pos == 0)
		InsertFirst(list,d);
	else if(pos==SizeOfList(list)-1)
		InsertLast(list,d);
	else {
		Node *pNode = CreatNode(d);
		Node *pIns = list.pHead;
		Node *pPre = NULL;
		int i=0;
		while(pIns!=NULL) {
			if(i==pos) 
				break;
			pPre=pIns;
			pIns=pIns->pNext;
			i++;
		}
		pPre->pNext=pNode;
		pNode->pNext=pIns;
	}
	
}
int main(int argc, char** argv) {
	SingleList list;
	Initialize(list);
	InsertFirst(list,10);
	InsertFirst(list,5);
	InsertFirst(list,2);
	PrintList(list);
	cout<<endl;
	InsertLast(list,10);
	InsertLast(list,5);
	InsertLast(list,2);
	PrintList(list);
	cout<<endl;
	InsertMid(list,2,6);
	PrintList(list);
	return 0;
}
