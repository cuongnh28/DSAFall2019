#include <iostream>
using namespace std;
struct Node{
	int data;
	Node *pNext;
};
struct SingleList{
	Node *pHead;
};
void Init(SingleList &list){
	list.pHead=NULL;
}
Node *CreatNode(int d){
	Node *pNode = new Node;
	if(pNode!=NULL) {
		pNode->data=d;
		pNode->pNext=NULL;
	} 
	else{
		cout<<"Cap phat loi.";
	}
	return pNode;
}
int SizeOfList(SingleList list) {
	int dem=0;
	Node *pTmp = list.pHead;
	while(pTmp!=NULL){
		dem++;
		pTmp=pTmp->pNext;
	}
	return dem;
}
void Print(SingleList list) {
	Node *pTmp=list.pHead;
	if(pTmp==NULL) {
		cout<<"Danh sach rong.";
		return;
	}
	while(pTmp!=NULL) {
		cout<<pTmp->data<<"  ";
		pTmp=pTmp->pNext;
	}
}
void InsertFirst(SingleList &list, int d){
	Node *pNode = CreatNode(d);
	if(list.pHead==NULL) {
		list.pHead=pNode;
	}
	else {
		pNode->pNext=list.pHead;
		list.pHead=pNode;
	}
}
void InsertLast(SingleList &list, int d) {
	Node *pNode=CreatNode(d);
	if(list.pHead==NULL){
		list.pHead=pNode;
	}
	else{
		Node *pTmp=list.pHead;
		while(pTmp->pNext!=NULL){
			pTmp=pTmp->pNext;
		}
		pTmp->pNext=pNode;
	}
}
void InsertMid(SingleList &list, int pos, int d) {
	Node *pNode=CreatNode(d);
	if(pos<0 || pos>SizeOfList(list)){
		cout<<"Vi tri chen khong hop le.";
		return;
	}
	if(pos==0) {
		InsertFirst(list,d);
	}
	else if(pos==SizeOfList(list)) {
		InsertLast(list,d);
	}
	else {
		Node *pPre=NULL;
		Node *pIns=list.pHead;
		int i=1;
		while(pIns!=NULL) {
			if(i==pos)
				break;
			pPre=pIns;
			pIns=pIns->pNext;
		}
		pPre->pNext=pNode;
		pNode->pNext=pIns;
	}
}
// Xoa theo vi tri.
//void DeleteMid(SingleList &list, int pos) {
//	if(pos<=0 || pos>SizeOfList(list)+1){
//		cout<<"Vi tri xoa khong hop le.";
//		return;
//	}
//	if(pos==1) {
//		Node *pDel=list.pHead;
//		list.pHead=list.pHead->pNext;
//		pDel=NULL;
//	}
//	else if(pos==SizeOfList(list)+1) {
//		Node *pTmp = list.pHead;
//		while(pTmp->pNext!=NULL) {
//			pTmp=pTmp->pNext;
//		}
//		pTmp=NULL;
//	}
//	else{
//		Node *pPre=NULL;
//		Node *pDel=list.pHead;
//		int i=1;
//		while(pDel!=NULL) {
//			if(i==pos) {
//				break;
//			}
//			pPre=pDel;
//			pDel=pDel->pNext;
//			i++;
//		}
//		pPre->pNext=pDel->pNext;
//		pDel=NULL;
//	}
//}

// Xoa theo gia tri Node.
void RemoveNode(SingleList &list, int d) {
	Node *pDel=list.pHead;
	if(pDel==NULL) {
		cout<<"Danh sach rong.\n";
	}
	else {
		Node *pPre=NULL;
		while(pDel!=NULL) {
			if(pDel->data==d)
				break;
			pPre=pDel;
			pDel=pDel->pNext;
		}
		if(pDel==NULL) {
			cout<<"Khong ton tai so can tim.\n";
		}
		else {
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

// Tim kiem theo gia tri, xuat ra con tro.
Node * SearchNode(SingleList list, int d) {
	Node *pSrc=list.pHead;
		while(pSrc!=NULL) {
			if(pSrc->data==d) 
				break;
			pSrc=pSrc->pNext;
		}
		return pSrc;
}

//Sap xep theo gia tri.
void Sort(SingleList &list) {
	for(Node *pTmp=list.pHead;pTmp!=NULL;pTmp=pTmp->pNext) {
		for(Node *pTmp2=pTmp->pNext;pTmp2!=NULL;pTmp2=pTmp2->pNext) {
			if(pTmp->data>pTmp2->data) {
				int temp=pTmp->data;
				pTmp->data=pTmp2->data;
				pTmp2->data=temp;
			}
		}
	}
}
// Huy danh sach.
void FreeMemory(SingleList &list) {
	while(list.pHead!=NULL) {
		Node *pTmp=list.pHead;
		list.pHead=pTmp->pNext;
		pTmp->pNext=NULL;
		cout<<pTmp->data<<" da bi xoa."<<endl;
		delete pTmp;
		pTmp=NULL;
	}
	cout<<"Delete is completed\n ----------\n";
}
int main(int argc, char** argv) {
	SingleList list;
	Init(list); 
	InsertFirst(list,10);
	InsertLast(list,2);
	InsertFirst(list,20);
	InsertLast(list,3);
	InsertMid(list,4,6);
	InsertLast(list,36);
	cout<<"Truoc khi xoa\n";
	Print(list);
	
	cout<<"\nXoa so 20.\n";
	RemoveNode(list,20);
	Print(list);
	
	int d;
	cout<<"\nNhap gia tri d: ";
	cin>>d;
	Node *pSrc = SearchNode(list,d);
	if(pSrc!=NULL)
		cout<<"Ton tai "<<pSrc->data;
	else 
		cout<<"Khong ton tai "<<d;
	
	Sort(list);
	cout<<"\nNode sau khi sap xep: ";
	Print(list);
	cout<<endl;
	
	FreeMemory(list);
	Print(list);
	
	return 0;
}
