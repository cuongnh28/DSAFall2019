#include<bits/stdc++.h>
using namespace std;
struct node{
    int info;
    struct node *next;
}*start;
class single_linked_list{
public:
    node* create_node(int); //tao node co gia tri value.
    void insert_begin();
    void display();
    single_linked_list(){
        start=NULL;
    }
};
node *single_linked_list::create_node(int value) //tạo node rời rạc có giá trị value
{
    struct node *temp, *s; //sử dụng hai con trỏ node *temp, *s
    temp = new(struct node); //cấp phát không gian nhớ cho temp
    if (temp == NULL)  //nếu không đủ gian nhớ để cấp phát
    {
        cout<<"Khong du bo nho."<<endl;
        return 0;
    }
    else
    {
        temp->info = value;//thiết lập thành phần thông tin
        temp->next = NULL; //thiết lập thành phần liên kết
        return temp;//trả lại con trỏ node
    }
}
void single_linked_list::insert_begin()  //thêm node vào đầu
{
    int value; //giá trị node cần thêm
    cout<<"Nhap gia tri node:";
    cin>>value;
    struct node *temp, *p;
    temp = create_node(value);//tạo node rời rạc có giá trị value
    if (start == NULL) //nếu danh sách liên kết đơn rỗng
    {
        start = temp;//start chính là temp;
        start->next = NULL; //thiết lập thành phần liên kết cho start
    }
    else   //trường hợp danh sách liên kết không rỗng
    {
        p = start; //con trỏ p trỏ đến start
        start = temp;//start trỏ đến temp
        start->next = p;//thiết lập lại liên kết cho start
    }
    cout<<"Hoan thanh them node vao dau"<<endl;
}
void single_linked_list::display() //duyệt danh sách
{
    struct node *temp;
    if (start == NULL)
    {
        cout<<"Danh sach rong"<<endl;
        return;
    }
    temp = start;
    cout<<"Noi dung danh sach: "<<endl;
    while (temp != NULL)
    {
        cout<<temp->info<<"->";
        temp = temp->next;
    }
    cout<<"NULL"<<endl;
}
int main(){
    int choice;
single_linked_list X;//X là đối tượng DSLKĐ
start = NULL; //khởi tạo start
while (1){
        cout<<endl<<"---------------------------------"<<endl;
        cout<<endl<<"CAC THAO TAC TREN DSLK"<<endl;
        cout<<endl<<"---------------------------------"<<endl;
        cout<<"1. Them node vao dau "<<endl;
        cout<<"2. Duyet danh sach "<<endl;
        cout<<"0.Thoat "<<endl;
        cout<<"Lua chon chuc nang: ";
        cin>>choice;
        switch(choice)
        {
        case 1:
            cout<<"Them node vao dau danh sach: "<<endl;
            X.insert_begin();
            cout<<endl;
            break;
        case 2:
            cout<<"Duyet danh sach:"<<endl;
            X.display();
            cout<<endl;
            break;
        case 0:
            cout<<"Thoat..."<<endl;
            exit(1);
            break;
        default:
            cout<<"Lua chon sai"<<endl;
            break;
        }
    }
}
