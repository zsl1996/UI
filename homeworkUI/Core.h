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
	int quesNum;                         //��Ŀ������
	int operNum;                         //һ������ʽ�������������
	vector<char> oper_set;               //�����������
	int mode;                            //0Ϊ������1ΪС����2Ϊ����
	pair<int, int> input_range;          //��Ŀ��ֵ�ķ�Χ
	double Round(double dVal, short iPlaces);
	QuestionSetGenerator();
	int Setting(int quesnum_in, int opernum_in, char *oper, int in_mode, int first, int second);                     //���ļ�����������
	void Generate(int flag);                     //������Ŀ��д�ļ�
};
/*����Ϊ˵��
************************************
ͷ�ļ���Core.h
�ṩ x64,x86��release��debugģʽ
************************************
************************************
ʹ�����ӣ�
QuestionSetGenerator q;
int flag= q.Setting(10, 4, "+-*^@", 1, 1, 100);
q.Generate(flag);
����
QuestionSetGenerator q;
QuestionSetGenerator();
q.Generate(0);

��ʽ������formula.txt��
���������result.txt��
����һһ��Ӧ
************************************
���棺

flag = Setting(int ������, int ���������, char *�����������, int ģʽ���������ͣ�, int �����½�, int �����Ͻ�)

Generate(int flag)

ע�⣺

������Χ��������������ԡ�@����β���˷�ֻ����ģʽ0��������
************************************
************************************
��ϸ�棺

���Կ��ƵĲ����������������������������������࣬ģʽ���������ͣ������ķ�Χ

�������������������Ϊ����0������ֵ

�������֧�֣� + - * / ^    (��@������ʹ��settingʱ�Դ�Ϊ����Ľ�β�������뿴setting���ͣ�

ģʽ�����֣� ������С������֧�֣�����
************************************
���õĺ�����������

int Setting(int quesnum_in, int opernum_in, char *oper, int in_mode, int first, int second);

quesnum_in: ������ ��Χ:��>0)

opernum_in: ��������� ��Χ��(>0)

*oper: ��������࣬����"..."��ʽ���룬
!!!!!!�ԡ�@����Ϊ��β!!!!!!!
!!!!!!�ԡ�@����Ϊ��β!!!!!!!
!!!!!!�ԡ�@����Ϊ��β!!!!!!!
@ ���ţ�shift+2
��Ҫ����˵���飡��
���� "+,-,*,/,@", "+,-,*,^,@"
֧�����ͣ�+ - * / ^ �Լ� @

in_mode: ģʽ���������ͣ� 0 ���� ������1 ���� С����2 ���� ��֧�֣�����

first,second: ����Χ�����½磬firstΪ�½磬secondΪ�Ͻ�

������������ֻ֧��������

����ֵΪ��-1����������д���0���������û����
************************************
void Generate(int flag);                     //������Ŀ��д�ļ�

��Setting�ķ���ֵ��Ϊ�������룬������ʽ�����ֱ���þ����ˣ�ûʲô���Խ��͵ġ�
************************************
��������������̫�鷳�������и�����Ĭ�ϲ����ĺ�����

QuestionSetGenerator()

Ĭ�����£�

������10�����������3���������Ϊ��+��-��*��/",ģʽΪ1��С���������ķ�Χ��0-100֮�䡣

ע�⣺���������ʱ������generate�Ĳ����ֶ���Ϊ0��
************************************
��ʽ������formula.txt��
���������result.txt��
����һһ��Ӧ
************************************
���ǵ�һ���汾����λ��ʲô���⻶ӭ��ʱ��ϵ��
����Զ �����
*/