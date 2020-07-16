#pragma once
#include<stdio.h>

//导入函数，只能在当前项目中使用
//int mySub(int a, int b);

//导出函数,能在项目外使用
//导出函数特殊声明
__declspec(dllexport) int mySub(int a, int b);