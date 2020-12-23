#include <iostream>
using namespace std;
struct Node{
	Node *pNext;
	float data;
};
struct SingleList{
	Node *pHead;
};
void init(SingleList &list) {
	list.pHead=NULL;
}
Node * creatNode(float data) {
	Node *pNode=new Node;
	if(pNode!=NULL) {
		pNode->data=data;
		pNode->pNext=NULL;
	}
	else {
		cout<<"Cap phat bo nho loi.";
	}
	return pNode;
}
int SizeOfList(SingleList list) {
	int d=1;
	Node *pTmp=list.pHead;
	while(pTmp->pNext!=NULL) {
		d++;
		pTmp=pTmp->pNext;
	}
	return d;
}
void printList(SingleList list) {
	Node *pTmp=list.pHead;
	while(pTmp!=NULL) {
		cout<<pTmp->data<<"\t";
		pTmp=pTmp->pNext;
	}
	cout<<endl;
}
void insertFirst(SingleList &list, float d) {
	Node *pNode=creatNode(d);
	if(list.pHead==NULL) {
		list.pHead=pNode;
		return;
	}	
	pNode->pNext=list.pHead;
	list.pHead=pNode;	
}
void insertLast(SingleList &list, float d) {
	Node *pNode=creatNode(d);
	Node *pTmp=list.pHead;
	if(list.pHead==NULL) {
		list.pHead=pNode;
		return;
	}	
	while(pTmp->pNext!=NULL) {
		pTmp=pTmp->pNext;
	}	
	pTmp->pNext=pNode;
}
void insertMid(SingleList &list, float d, int pos) {
	if(pos==0) {
		insertFirst(list,d);
	}
	else if(pos==SizeOfList(list)) {
		insertLast(list,d);
	}
	else {
		Node *pPre=NULL;
		Node *pIns=list.pHead;
		Node *pNode=creatNode(d);
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
float tong(SingleList list) {
	float sum=0;
	Node *pTmp=list.pHead;
	while(pTmp!=NULL) {
		sum+=pTmp->data;
		pTmp=pTmp->pNext;
	}
	return sum;
}
void timKiem(SingleList list, float x) {
	int d=1;
	Node *pTmp=list.pHead;
	while(pTmp!=NULL) {
		if(pTmp->data==x) {
			break;
		}
		pTmp=pTmp->pNext;
		d++;		
	}
	if(pTmp==NULL) {
		cout<<"Khong tim thay "<<x<<endl;
	}
	else {
		cout<<"Tim thay "<<pTmp->data<<" tai vi tri "<<d<<endl;
	}
}
void sort(SingleList &list) {
	for(Node *pTmp=list.pHead;pTmp->pNext!=NULL;pTmp=pTmp->pNext) {
		for(Node *pTmp2=pTmp->pNext;pTmp2!=NULL;pTmp2=pTmp2->pNext) {
			if(pTmp->data > pTmp2->data) {
				float t=pTmp->data;
				pTmp->data = pTmp2->data;
				pTmp2->data = t;
			}
		}
	}
}
void xoa(SingleList &list, float f) {
	Node *pDel=list.pHead;
	if(pDel==NULL) {
		cout<<"Danh sach rong.\n";
	}
	else {
		Node *pPre=NULL;
		while(pDel!=NULL) {
			if(pDel->data==f) 
				break;
			pPre=pDel;
			pDel=pDel->pNext;
		}
		if(pDel==NULL) {
			cout<<"Khong ton tai gia tri "<<f<<endl;
		}
		else{
			if(pDel==list.pHead) {
				list.pHead=list.pHead->pNext;
				pDel->pNext=NULL;
				delete pDel;
				pDel=NULL;
			}
			else{
				pPre->pNext=pDel->pNext;
				pDel->pNext=NULL;
				delete pDel;
				pDel=NULL;
			}
		}
	}
}
int main(int argc, char** argv) {
	SingleList list;
	init(list);
	insertFirst(list, 2.3);
	insertLast(list, 4.5);
	insertFirst(list, 6.3);
	insertLast(list, 6.8);
	insertFirst(list, 8.2);
	insertLast(list, 4.9);
	insertMid(list, 3.9, 2);
	printList(list);
	cout<<tong(list)<<endl;
	timKiem(list,4.9);
	sort(list);
	xoa(list,4.5);
	printList(list);
	return 0;
}
