#include <iostream>
#include "ListNode.h"
#include <set>
#include <iomanip>

namespace leetcode{
    double power(double base, int exponent) {
            double result = 1.0;
            for (int i = 0; i < exponent; ++i) {
                result *= base;
            }
            return result;
    };

    
}


class Solution {
public:
    ListNode* addTwoNumbers(ListNode *l1, ListNode *l2) {
        ListNode *FakeHead = new ListNode(0);  // 定义一个虚拟节点
        ListNode *current = FakeHead;  // 使用 current 来追踪链表的末尾

        int carry = 0;  // 用来存储进位
        
        // 只要 l1 或 l2 还存在，或者进位 carry 不为 0，就继续
        while (l1 != nullptr || l2 != nullptr || carry != 0) {
            int sum = carry;  // 当前位的和
            
            // 如果 l1 还有节点，取出当前节点的值
            if (l1 != nullptr) {
                sum += l1->val; 
                l1 = l1->next; 
            }
            
            // 如果 l2 还有节点，取出当前节点的值
            if (l2 != nullptr) {
                sum += l2->val;
                l2 = l2->next;
            }
            
            // 计算当前位的结果和进位
            carry = sum / 10;  // 更新进位
            current->next = new ListNode(sum % 10);  // 当前位的数字
            current = current->next;  // 移动到下一个节点
        }
        
        return FakeHead->next;  // 返回真实的头节点
    }
};

void printList(ListNode* head) {
    while (head != nullptr) {
        std::cout << head->val << " ";
        head = head->next;
    }
    std::cout << std::endl;
}

int main() {
    // 创建链表 l1: 2 -> 4 -> 3
    // ListNode *l1 = new ListNode(2, new ListNode(4, new ListNode(3)));
    ListNode *l1 = new ListNode(2);
    l1->next = new ListNode(4);
    l1->next->next = new ListNode(3);
    

    // 创建链表 l2: 5 -> 6 -> 4
    ListNode *l2 = new ListNode(5);
    l2->next = new ListNode(6);
    l2->next->next = new ListNode(4);

    Solution sol; // 类实例化

    ListNode *result = sol.addTwoNumbers(l1, l2);
    
    printList(result);  // 输出结果链表

    std::cout << "==========" << "\n";

    int yy = 20;
    int *ptr = &yy;// 指针ptr存储变量yy的地址
    int *tyr = ptr; // 指针tyr存储yy的内存地址
    *tyr = 30; // 修改tyr的值也会对应修改yy的值，因为tyr指向的是yy的内存地址

    std::cout << "Value of yy: " << yy << "\n";

    std::cout << "Void pointer example:" << "\n";
    void* ppy;
    ppy = &yy; // void指针可以指向任意类型的变量
    std::cout << "Value of yy through void pointer: " << *reinterpret_cast<int*>(ppy) << "\n"; // 强制类型转换为int*后解引用
    std::cout << "===============" << "\n";
    std::set<char> charSet;
    std::string a = "aaaabbbbdd";
    //std::string result = "";
    for (int i = 0; i < a.size(); ++i){
        charSet.insert(a[i]);
    }
  
    std::cout << "Unique characters in the string: ";
    for (auto i = charSet.begin(); i != charSet.end(); ++i){ // 前置递增它会先递增 i，然后返回递增后的值
        std::cout << *i << " ";
        //result += *i;
        //result += *i;
    }
    std::cout << "First character in set: " << *(charSet.begin()) << "\n";


    std::string iooo; 
    int count = 0;
    for (auto i = charSet.begin() ; i != charSet.end(); ++i){
        // i 为整数指针，*i 为指针指向的值
        //std::cout << *i << "\n ";
        iooo += *i; 
        count++;
    }
    std::cout << count << "\n";
    
    std::cout << "=========" << "\n";

    std::cout << std::left; // 左对齐
    std::cout << std::setw(16) << "bool:" << sizeof(bool) << " bytes\n";
    std::cout << std::setw(16) << "char:" << sizeof(char) << " bytes\n";
    std::cout << std::setw(16) << "short:" << sizeof(short) << " bytes\n";
    std::cout << std::setw(16) << "int:" << sizeof(int) << " bytes\n";
    std::cout << std::setw(16) << "long:" << sizeof(long) << " bytes\n";
    std::cout << std::setw(16) << "long long:" << sizeof(long long) << " bytes\n";
    std::cout << std::setw(16) << "float:" << sizeof(float) << " bytes\n";
    std::cout << std::setw(16) << "double:" << sizeof(double) << " bytes\n";
    std::cout << std::setw(16) << "long double:" << sizeof(long double) << " bytes\n";
    
    
    double mk = 0.0;
    for (int i = 0; i < 7; ++i){
        std::cout << "The value of i: " << i << "\n";
        mk += leetcode::power(2.0, i);
        std::cout << leetcode::power(2.0, i) << "\n";
        std::cout << mk << "\n";
        // n 位有符号数的取值范围为 -2 ^(n - 1) ~ 2 ^(n-2)
    }
    //signed char表示了8位有符号整数
    //signed char yyn = 140; // 溢出，因为不在范围[-128, 127]之间
    //std::cout << yyn << "\n";

    /* 1字节无符号整数的范围为0到255。
    与1字节有符号整数的范围对比，
    两者都可以存储256个不同的值，
    但有符号整数将其范围的一半用于负数，
    所以无符号整数可以存储两倍大的正数。
    */

    return 0;
}