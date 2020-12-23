#include<iostream>
using namespace std;
struct node   // biểu diễn danh sách liên kết đơn
{
    int info; //thành phần thông tin
    struct node *next; //thành phần liên kết
}*start;
class single_linked_list   //biểu diễn lớp single_linked_list
{
public:
    node* create_node(int);//tạo node rời rạc có giá trị value
    void insert_begin();//thêm node vào đầu danh sách liên kết đơn
    void insert_pos();//thêm node vào vị trí pos trong danh sách liên kết đơn
    void insert_last();//thêm node vào cuối danh sách liên kết đơn
    void delete_pos();//loại node tại vị trí pos của sách liên kết đơn
    void sort();//sắp xếp theo giá trị node cho danh sách liên kết đơn
    void search();//tìm node trong danh sách liên kết đơn
    void update(); //cập nhật thông tin cho node
    void reverse(); //đảo ngược các node trong danh sách liên kết đơn
    void display(); //duyệt danh sách liên kết đơn
    single_linked_list() //constructor của lớp
    {
        start = NULL;
    }
};
node *single_linked_list::create_node(int value) //tạo node rời rạc có giá trị value
{
    struct node *temp, *s; //sử dụng hai con trỏ node *temp, *s
    temp = new(struct node); //cấp phát không gian nhớ cho temp
    if (temp == NULL)  //nếu không đủ gian nhớ để cấp phát
    {
        cout<<"Không đủ bộ nhớ"<<endl;
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
    cout<<"Nhập giá trị node:";
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
    cout<<"Hoàn thành thêm node vào đầu"<<endl;
}
void single_linked_list::insert_last() //thêm node vào cuối danh sách liên kết đơn
{
    int value; //giá trị của node cần thêm
    cout<<"Nhap gia tri cho node: ";
    cin>>value;
    struct node *temp, *s; //sử dụng hai con trỏ node
    temp = create_node(value);//tạo node rời rạc có giá trị value
    if(start==NULL)  //nếu danh sách rỗng
    {
        start = temp;
        temp->next=NULL;
        return;
    }
    s = start; //s trỏ đến start
    while (s->next != NULL)  //di chuyển s đến node cuối cùng của DSLKĐ
    {
        s = s->next;
    }
    temp->next = NULL; //temp trỏ đến null
    s->next = temp; //thiết lập liên kết cho s
    cout<<" Hoàn thành thêm node vào cuối "<<endl;
}
void single_linked_list::insert_pos() //Them node vao vi tri cho truoc
{
    int value, pos, counter = 0;
    cout<<"Nhap gia tri node:";
    cin>>value;
    struct node *temp, *s, *ptr;
    temp = create_node(value);//tạo node rời rạc có giá trị value
    cout<<"Vi tri node can them: ";
    cin>>pos;
    int i;
    s = start; //s trỏ đến start
    while (s != NULL) //đếm số node của DSLKĐ là counter
    {
        s = s->next;
        counter++;
    }
    if (pos == 1)  //nếu pos là node đầu tiên
    {
        if (start == NULL) //trường hợp DSLKĐ rỗng
        {
            start = temp;//start trỏ đến temp
            start->next = NULL; //thiết lập liên kết cho start là null
        }
        else   //trường hợp DSLKĐ không rỗng
        {
            ptr = start;//ptr trỏ đến start
            start = temp;//start trỏ đến temp
            start->next = ptr; //start liên kết với ptr
        }
    }
    else if (pos > 1 && pos <= counter)  //trường hợp vị trí pos hợp lệ
    {
        s = start; //s trỏ đến start
        for (i = 1; i < pos; i++) //di chuyển ptr đến node sau vị trí pos
        {
            ptr = s;
            s = s->next;
        }
        ptr->next = temp;//thiết lập liên kết cho ptr là temp
        temp->next = s; //thiết lập liên kết cho temp là s
    }
    else  //trường hợp vị trí pos không hợp lệ
    {
        cout<<" Vị trí pos không hợp lệ "<<endl;
    }
}
void single_linked_list::sort() //sắp xếp các node
{
    struct node *ptr, *s;
    int value;
    if (start == NULL) //trường hợp danh sách rỗng
    {
        cout<<"Không phải làm gì"<<endl;
        return;
    }
    ptr = start;//ptr trỏ đến đầu danh sách
    while (ptr != NULL)  //bắt đầu sắp xếp
    {
        for (s = ptr->next; s !=NULL; s = s->next)
        {
            if (ptr->info > s->info)
            {
                value = ptr->info;
                ptr->info = s->info;
                s->info = value;
            }
        }
        ptr = ptr->next;
    }
}
void single_linked_list::delete_pos() //loại node bất kỳ
{
    int pos, i, counter = 0;
    if (start == NULL)  //nếu danh sách rỗng
    {
        cout<<"Danh sách rỗng"<<endl;
        return;
    }
    cout<<"Vị trí cần loại:";
    cin>>pos;
    struct node *s, *ptr;
    s = start; //s trỏ đến đầu danh sách
    if (pos == 1)  //nếu loại node đầu tiên
    {
        start = s->next;
        free(s);
        return;
    }
    else   //trong trường hợp khác
    {
        while (s != NULL)  //đếm số node
        {
            s = s->next;
            counter++;
        }
        if (pos > 0 && pos <= counter)  //nếu vị trí hợp lệ
        {
            s = start;
            for (i = 1; i < pos; i++) //di chuyển s đến vị trí pos
            {
                ptr = s;
                s = s->next;
            }
            ptr->next = s->next; //thiết lập liên kết cho ptr
            free(s);
        }
        else  //nếu vị trí không hợp lệ
        {
            cout<<" nếu vị trí không hợp lệ "<<endl;
        }
    }
}
void single_linked_list::update() //sửa đối thông tin node
{
    int value, pos, i;
    if (start == NULL) //nếu danh sách rỗng
    {
        cout<<"Danh sách rỗng"<<endl;
        return;
    }
    cout<<"Vị trí node cần cập nhật:";
    cin>>pos;
    cout<<"Giá trị mới của node:";
    cin>>value;
    struct node *s, *ptr;
    s = start; //s trỏ đến node đầu tiên
    if (pos == 1) //nếu là node đầu tiên
    {
        start->info = value; //cập nhật lại giá trị node
    }
    else   //trong trường hợp khác
    {
        for (i = 0; i < pos - 1; i++) //di chuyển s đến vị trí pos
        {
            if (s == NULL) //nếu s là rỗng
            {
                cout<<"Vị trí "<<pos<<" không hợp lệ";
                return;
            }
            s = s->next;
        } s
        ->info = value; //cập nhật lại giá trị cho node s
    }
    cout<<"Cập nhật thành công"<<endl;
}
void single_linked_list::search() //Tim kiem node
{
    int value, pos = 0;
    bool flag = false;
    if (start == NULL) //nếu danh sách rỗng
    {
        cout<<"Danh sách rỗng"<<endl;
        return;
    }
    cout<<"Giá trị cần tìm:";
    cin>>value;
    struct node *s;
    s = start;//s trỏ đến đầu danh sách
    while (s != NULL)
    {
        pos++;
        if (s->info == value) //nếu tìm thấy value
        {
            flag = true;
            cout<<"Giá trị "<<value<<" tại vị trí "<<pos<<endl;
        }
        s = s->next;
    }
    if (!flag)
        cout<<"Giá trị "<<value<<" không tồn tại trong danh sách"<<endl;
}
void single_linked_list::reverse() //đảo ngược danh sách
{
    struct node *ptr1, *ptr2, *ptr3;
    if (start == NULL)  //nếu danh sách rỗng
    {
        cout<<"Danh sách rỗng"<<endl;
        return;
    }
    if (start->next == NULL) //nếu danh sách chỏ có một node
    {
        return;
    }
    ptr1 = start; //ptr1 trỏ đến node đầu tiên
    ptr2 = ptr1->next;// ptr2 trỏ đến node tiếp theo
    ptr3 = ptr2->next;// ptr3 trỏ đến node tiếp theo
    ptr1->next = NULL;//ngắt liên kết của ptr1
    ptr2->next = ptr1;//ptr1 trở thành node kế tiếp của ptr2
    while (ptr3 != NULL) //lặp nếu ptr3 không rỗng
    {
        ptr1 = ptr2;
        ptr2 = ptr3;
        ptr3 = ptr3->next;
        ptr2->next = ptr1;
    }
    start = ptr2;
}
void single_linked_list::display() //duyệt danh sách
{
    struct node *temp;
    if (start == NULL)
    {
        cout<<"Danh sách rỗng"<<endl;
        return;
    }
    temp = start;
    cout<<"Nội dung danh sách: "<<endl;
    while (temp != NULL)
    {
        cout<<temp->info<<"->";
        temp = temp->next;
    }
    cout<<"NULL"<<endl;
}
int main() //chương trình chính
{
    int choice;
    single_linked_list X;//X là đối tượng DSLKĐ
    start = NULL; //khởi tạo start
    while (1)
    {
        cout<<endl<<"---------------------------------"<<endl;
        cout<<endl<<"CÁC THAO TÁC TRÊN DSLKĐ"<<endl;
        cout<<endl<<"---------------------------------"<<endl;
        cout<<"1. Thêm node vào đầu danh sách"<<endl;
        cout<<"2. Thêm node vào cuối danh sách "<<endl;
        cout<<"3. Thêm node vào vị trí bất kỳ "<<endl;
        cout<<"4. Sắp xếp theo giá trị các ode"<<endl;
        cout<<"5. Loại node ở vị trí bất kỳ"<<endl;
        cout<<"6. Cập nhật nội dung node"<<endl;
        cout<<"7. Tìm kiếm node theo giá trị"<<endl;
        cout<<"8. Duyệt danh sách"<<endl;
        cout<<"9. Đảo ngược danh sách "<<endl;
        cout<<"0.Thoát "<<endl;
        cout<<"Lựa chọn chức năng: ";
        cin>>choice;
        switch(choice)
        {
        case 1:
            cout<<" Thêm node vào đầu danh sách: "<<endl;
            X.insert_begin();
            cout<<endl;
            break;
        case 2:
            cout<<" Thêm node vào cuối danh sách: "<<endl;
            X.insert_last();
            cout<<endl;
            break;
        case 3:
            cout<<" Thêm node vào vị trí bất kỳ:"<<endl;
            X.insert_pos();
            cout<<endl;
            break;
        case 4:
            cout<<"Sắp xếp nội dung node: "<<endl;
            X.sort();
            cout<<endl;
            break;
        case 5:
            cout<<"Loại bỏ node: "<<endl;
            X.delete_pos();
            break;
        case 6:
            cout<<"Cập nhật giá trị node:"<<endl;
            X.update();
            cout<<endl;
            break;
        case 7:
            cout<<"Tìm kiếm node: "<<endl;
            X.search();
            cout<<endl;
            break;
        case 8:
            cout<<"Duyệt danh sách:"<<endl;
            X.display();
            cout<<endl;
            break;
        case 9:
            cout<<"Đảo ngược danh sách"<<endl;
            X.reverse();
            cout<<endl;
            break;
        case 0:
            cout<<"Thoát..."<<endl;
            exit(1);
            break;
        default:
            cout<<"Lựa chọn sai"<<endl;
            break;
        }
    }
}
