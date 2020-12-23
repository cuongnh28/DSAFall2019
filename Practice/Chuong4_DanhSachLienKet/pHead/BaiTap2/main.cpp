#include <iostream>
#include <string.h>
#include <stdio.h>
using namespace std;
struct SinhVien{
	int id;
	char name[150];
};
struct Node{
	SinhVien *data;
	Node *pNext;
};
struct SingleList{
	Node *pHead;
};
void init(SingleList *&list) {
	list = new SingleList;
	list->pHead=NULL;
}
SinhVien *nhapSV() {
	SinhVien *sv = new SinhVien;
	cout<<"Nhap ma: ";
	cin>>sv->id;
	cout<<"Nhap ten: ";
	cin.ignore();
	gets(sv->name);
	cout<<endl;
	return sv;
}
Node * creatNode(SinhVien *sv) {
	Node *pNode = new Node; 
	if(pNode!=NULL) {
		pNode->pNext=NULL;
		pNode->data=sv;
	}
	else {
		cout<<"Cap phat bo nho loi."<<endl;
	}
	return pNode;
}
int sizeOfList(SingleList *list) {
	Node *pTmp=list->pHead;
	int d=0;
	while(pTmp!=NULL) {
		d++;
		pTmp=pTmp->pNext;
	}
	return d;
}
void print(SingleList *list) {
	Node *pTmp=list->pHead;
	if(pTmp==NULL) {
		cout<<"Danh sach rong."<<endl;
		return;
	}
	while(pTmp!=NULL) {
		SinhVien *sv=pTmp->data;
		cout<<sv->id<<"\t"<<sv->name<<endl;
		pTmp=pTmp->pNext;
	}
}
void insertLast(SingleList *&list, SinhVien *sv) {
	Node *pNode = creatNode(sv);
	if(list->pHead==NULL) {
		list->pHead=pNode;
		return;
	}
	Node *pTmp=list->pHead;
	while(pTmp->pNext!=NULL) {
		pTmp=pTmp->pNext;
	}
	pTmp->pNext=pNode;
}
int main(int argc, char** argv) {
	SingleList *list;
	init(list);
	SinhVien *teo=nhapSV();
	insertLast(list,teo);
	SinhVien *ti=nhapSV();
	insertLast(list,ti);
	SinhVien *tai=nhapSV();
	insertLast(list,tai);
	print(list);
	return 0;
}
