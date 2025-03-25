#include <stdio.h>
#include <stdlib.h>

// Cấu trúc Node (nút) của danh sách liên kết đơn
typedef struct Node
{
    int data;              // Dữ liệu của nút
    struct Node*next;      // Con trỏ đến nút tiếp theo
} Node;

// Cấu trúc Danh sách liên kết (bao gồm con trỏ đến nút đầu và nút cuối)
typedef struct
{
    Node *first ;          // Con trỏ đến nút đầu tiên
    Node *last;            // Con trỏ đến nút cuối cùng
} LinkedList;

// Con trỏ để lưu nút trước nút hiện tại trong danh sách
Node *prev_node;

// Hàm tạo danh sách liên kết mới
LinkedList *create_list()
{
    LinkedList *list=(LinkedList*)malloc(sizeof(LinkedList));
    list->first=NULL;      // Danh sách ban đầu trống
    list->last=NULL;
    return list;
}

// Hàm tạo một nút mới với giá trị cho trước
Node *create_new_node(int value)
{
    Node *node=(Node*)malloc(sizeof(Node));
    node->data=value;      // Gán giá trị cho nút
    node->next=NULL;       // Ban đầu nút không có nút tiếp theo
    return node;
}

// Hàm thêm nút đầu tiên vào danh sách
void add_first_node(LinkedList *list,Node *node)
{
    list->first=node;      // Nút đầu tiên là nút được thêm vào
    list->last=node;       // Nút cuối cùng cũng là nút đó vì chỉ có một nút
}

// Hàm in ra danh sách liên kết
void printf_list(LinkedList *list)
{
    Node*node=list->first; // Bắt đầu từ nút đầu tiên
    while(node!=NULL)      // Duyệt qua danh sách
    {
        printf("%d ",node->data);  // In dữ liệu của từng nút
        node =node->next;          // Chuyển sang nút tiếp theo
    }
    printf("\n");
}

// Hàm chèn nút vào đầu danh sách
void insert_to_first(LinkedList *list, Node *node)
{
    node->next=list->first;  // Liên kết nút mới với nút đầu hiện tại
    list->first=node;        // Cập nhật nút đầu tiên
}

// Hàm chèn nút vào cuối danh sách
void insert_to_last(LinkedList *list, Node *node)
{
    list->last->next=node;   // Liên kết nút cuối hiện tại với nút mới
    list->last=node;         // Cập nhật nút cuối
}

// Hàm tìm kiếm nút dựa vào giá trị khoá
Node *search_node(LinkedList *list,int key)
{
    prev_node = NULL;        // Đặt nút trước bằng NULL

    Node *node=list->first;  // Bắt đầu từ nút đầu tiên
    while(node != NULL)      // Duyệt qua danh sách
    {
        if(node->data==key)  // Nếu tìm thấy nút
        {
            return node;
        }
        prev_node = node;    // Lưu nút trước
        node =node->next;    // Chuyển sang nút tiếp theo
    }
    return NULL;             // Không tìm thấy
}

// Hàm chèn nút mới sau một nút có khoá xác định
void insert_after(LinkedList *list,Node *node,int key)
{
    Node *found_node=search_node(list,key);  // Tìm nút với giá trị khoá
    if(found_node!=NULL)
    {
        node->next=found_node->next;         // Liên kết nút mới với nút kế tiếp
        found_node->next=node;              // Liên kết nút tìm thấy với nút mới
    }
    else
    {
        printf("Not found node with key = %d\n",key); // Không tìm thấy nút
    }
}

// Hàm xoá nút đầu tiên trong danh sách
void delete_first_node(LinkedList *list)
{
    Node *node = list ->first;  // Lưu nút đầu tiên
    list->first = node->next;   // Cập nhật nút đầu tiên
    if(list->first == NULL)     // Nếu danh sách rỗng
    {
        list->last =NULL;       // Cập nhật nút cuối
    }
    free(node);                 // Giải phóng bộ nhớ
}

// Hàm xoá nút với giá trị khoá cụ thể
void delete_node(LinkedList *list,int key)
{
    Node *found = search_node(list,key); // Tìm nút cần xoá
    if(found != NULL)
    {
        if(list->first == found)         // Nếu nút cần xoá là nút đầu tiên
        {
            list->first = found->next;
            if(list->first == NULL)      // Nếu danh sách sau khi xoá rỗng
            {
                list->last = NULL;
            }
        }
        else if(list->last == found)    // Nếu nút cần xoá là nút cuối
        {
            prev_node->next =NULL;      // Nút trước đó không còn liên kết
            list->last =prev_node;      // Cập nhật nút cuối
        }
        else                           // Nếu nút cần xoá nằm giữa
        {
            prev_node->next = found->next;
        }
        free(found);                   // Giải phóng bộ nhớ
    }

    else
    {
        printf("Not found node with key = %d\n",key); // Không tìm thấy nút
    }
}

// Hàm xoá toàn bộ danh sách
void delete_list(LinkedList *list)
{
    Node *node;
    while(list->first != NULL) // Duyệt qua danh sách
    {
        node = list->first;    // Lưu nút đầu
        list->first=node->next; // Chuyển sang nút tiếp theo
        free(node);            // Giải phóng bộ nhớ
    }
    list->last =NULL;          // Cập nhật danh sách rỗng
}

// Hàm main để kiểm thử
int main()
{
    LinkedList *list= create_list();        // Tạo danh sách mới
    Node *node2=create_new_node(2);         // Tạo nút có giá trị 2
    add_first_node(list,node2);             // Thêm nút đầu tiên
    printf_list(list);                      // In danh sách

    Node *node1=create_new_node(1);         // Tạo nút có giá trị 1
    insert_to_first(list,node1);            // Chèn vào đầu danh sách
    printf_list(list);

    Node *node4=create_new_node(4);         // Tạo nút có giá trị 4
    insert_to_last(list,node4);             // Chèn vào cuối danh sách
    printf_list(list);

    Node *node3=create_new_node(3);         // Tạo nút có giá trị 3
    insert_after(list,node3,2);             // Chèn sau nút có giá trị 2
    printf_list(list);

    delete_node(list,2);                    // Xoá nút có giá trị 2
    delete_node(list,3);                    // Xoá nút có giá trị 3
    delete_node(list,4);                    // Xoá nút có giá trị 4
    delete_node(list,1);                    // Xoá nút có giá trị 1
    printf_list(list);                      // In danh sách

    delete_list(list);                      // Xoá toàn bộ danh sách
    printf_list(list);                      // In danh sách
    return 0;                               // Kết thúc chương trình
}
