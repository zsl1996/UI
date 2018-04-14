#pragma once
#pragma once
#include <string>
#include <vector>
#include <unordered_map>
#include <iostream>
#include <cmath>
#include <algorithm>
#include <fstream>

using namespace std;
class __declspec(dllexport) QuestionSetGenerator {

public:
	int quesNum;                         //题目的数量
	int operNum;                         //一个表达式中运算符的数量
	vector<char> oper_set;               //运算符的种类
	int mode;                            //0为整数，1为小数，2为分数
	pair<int, int> input_range;          //题目数值的范围
	double Round(double dVal, short iPlaces);
	QuestionSetGenerator();
	int Setting(int quesnum_in, int opernum_in, char *oper, int in_mode, int first, int second);                     //读文件并更改设置
	void Generate(int flag);                     //产生题目并写文件
};
/*以下为说明
************************************
头文件：Core.h
提供 x64,x86的release和debug模式
************************************
************************************
使用例子：
QuestionSetGenerator q;
int flag= q.Setting(10, 4, "+-*^@", 1, 1, 100);
q.Generate(flag);
或者
QuestionSetGenerator q;
QuestionSetGenerator();
q.Generate(0);

算式保存在formula.txt中
结果保存在result.txt中
二者一一对应
************************************
简洁版：

flag = Setting(int 问题数, int 运算符号数, char *运算符号种类, int 模式（数的类型）, int 数的下界, int 数的上界)

Generate(int flag)

注意：

参数范围、运算符号种类以“@”结尾，乘方只能用模式0（整数）
************************************
************************************
详细版：

可以控制的参数：问题数，运算符号数，运算符号种类，模式（数的类型），数的范围

问题数、运算符号数均为大于0的整数值

运算符号支持： + - * / ^    (‘@’：在使用setting时以此为数组的结尾，具体请看setting解释）

模式有三种： 整数，小数，（支持）分数
************************************
可用的函数有三个：

int Setting(int quesnum_in, int opernum_in, char *oper, int in_mode, int first, int second);

quesnum_in: 问题数 范围:（>0)

opernum_in: 运算符号数 范围：(>0)

*oper: 运算符种类，请以"..."方式传入，
!!!!!!以‘@’作为结尾!!!!!!!
!!!!!!以‘@’作为结尾!!!!!!!
!!!!!!以‘@’作为结尾!!!!!!!
@ 符号：shift+2
重要的事说三遍！！
例如 "+,-,*,/,@", "+,-,*,^,@"
支持类型：+ - * / ^ 以及 @

in_mode: 模式（数的类型） 0 代表 整数，1 代表 小数，2 代表 （支持）分数

first,second: 数范围的上下界，first为下界，second为上界

！！（幂运算只支持整数）

返回值为（-1：输入参数有错；0：输入参数没错）
************************************
void Generate(int flag);                     //产生题目并写文件

将Setting的返回值作为参数输入，生成算式，这个直接用就行了，没什么可以解释的。
************************************
如果你嫌输入参数太麻烦，这里有个设置默认参数的函数：

QuestionSetGenerator()

默认如下：

问题数10，运算符号数3，运算符号为“+、-、*、/",模式为1（小数），数的范围在0-100之间。

注意：用这个函数时，输入generate的参数手动设为0；
************************************
算式保存在formula.txt中
结果保存在result.txt中
二者一一对应
************************************
这是第一个版本，各位有什么问题欢迎随时联系：
陈修远 尹宇飞
*/