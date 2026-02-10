#ifndef LISTNODE_H  // Prevent multiple inclusions
#define LISTNODE_H
//定义ListNode结构体
struct ListNode {
public:
    int val; //成员变量，存储节点的值
    ListNode* next; //成员变量，指向下一个节点的指针

    // 构造函数
    ListNode() : val(0), next(nullptr) {} // 默认构造函数，值val为0，next指针为空
    ListNode(int x) : val(x), next(nullptr) {} // 构造函数，初始化val为x，next指针为空
    ListNode(int x, ListNode* next) : val(x), next(next) {} // 构造函数，初始化val为x，next指针为next
};

#endif // LISTNODE_H
