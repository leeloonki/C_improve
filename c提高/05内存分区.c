/*
**内存分区
运行前
1.代码区  共享 只读
2.数据区 ={全局区（静态区）+文字常量区}
分为data  和bss
data已初始化全局变量、静态变量、常量
bss 未初始化全局变量、静态变量、常量

运行后
栈区 编译器管理开辟释放  变量生命周期在该函数结束后自动释放
堆区 容量远远大于栈区 程序员开辟释放
*/