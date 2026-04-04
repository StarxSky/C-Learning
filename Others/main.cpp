#include <iostream>
#include <string>
#include <list>


int main() {
   
    char greeting[1000] = "hELLOW"; // C-style string
    std::cout << greeting << std::endl;

    std::cout << "==== Constant =====" << "\n";
    const auto lang = "C++"; //auto 自动判定数据类型
    std::cout << "Hello and welcome to " << lang << "!\n";


    std::cout << "==== For-Loop =====" << "\n";
    for (int i = 1; i <= 5; ++i) {
        // TIP Press <shortcut actionId="Debug"/> to start debugging your code. We have set one <icon src="AllIcons.Debugger.Db_set_breakpoint"/> breakpoint for you, but you can always add more by pressing <shortcut actionId="ToggleLineBreakpoint"/>.
        std::cout << "i = " << i << std::endl;
        

    }


    std::cout << "==== Ternary Operator =====" << "\n";
    // 三元操作符
    int num =7;
    std::string str = (num % 2 == 0) ? "Even" : "Odd";
    std::cout << str << std::endl;


    std::cout << "==== Switch =====" << "\n";
    // switch语句
    int day = 3;
    switch (day)
    {
    case 1:
        std::cout << "Monday" << std::endl;
        break;
    case 2:
        std::cout << "Tuesday" << std::endl;
        break;
    
    default:
        std::cout << "Invalid day" << std::endl;
        break;
    }



    std::cout << "==== Do While =====" << "\n";
    // do-while语句用来执行代码块至少一次，在本例中，i=4，所以会执行一次，i=5，所以会执行一次
    int i = 4;
    do
    {
        std::cout << "iiiii = " << i << std::endl;
        i++;
        /* code */
    } while (i < 3);
    

    std::cout << "==== For Each =====" << "\n";

    // for-each方法：(类似python中的for迭代器方法)
    int Mynumbers[5] = {2, 5, 4, 5, 6};
    for (int i : Mynumbers)
    {
        std::cout << i << std::endl;
    };


    // 将输入转换为字符串
    //std::string name;  
    //getline(std::cin, name);
    //std::cout << "Your Name is : " << name << "\'s mother"<< "\n";

    std::list<int> mylist = {1, 2, 3, 4, 5}; // 该列表与 int mylist[5] = {1, 2, 3, 4, 5} 相同。但是，该列表是动态的，可以动态添加或删除元素。
    for (int i : mylist)
    {
        std::cout << i << std::endl;
    };

    return 0;
    // TIP See CLion help at <a href="https://www.jetbrains.com/help/clion/">jetbrains.com/help/clion/</a>. Also, you can try interactive lessons for CLion by selecting 'Help | Learn IDE Features' from the main menu.
}