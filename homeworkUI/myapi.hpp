#include<dll.h>
#include<mainwindow.h>
#include<string>
#include<review.h>
int num_max = 1000;//�����������ֵ��Ĭ��1000����Ч��Χ1 ~ INT_MAX
int num_limit = 20;// ��������������Ĭ��20����Ч��Χ1 ~ INT_MAX
int exp_num = 5;//���ʽ������Ĭ��5����Ч��Χ1 ~ INT_MAX
int type_u = 1; //���������ͣ���Ч��Χ0 double, 1 int, 2 fraction��Ĭ��double
int precision = 2;// С�����ȣ�Ĭ��2����Ч��Χ1 ~ INT_MAX
bool b_add = true;
bool b_sub = true;
bool b_div = false;
bool b_pow = false;
bool  b_mul = false;
float sumscore = 0; //��ǰ�ܷ�
float tempscore; //��ǰ��÷�
int lcd_time = 20; //��ʱ�����
int nownum = 0;//�������ڴ�����±�
int review_flag = 0; //��־�Ƿ��Ǹ�ϰģʽ
int lastexp_num = 5;
vector<tableitem> table;
vector<review> reviewtable;
using namespace std;

int my_get_exp(int nownum, string& s1,string& s2) {
	if(review_flag == 0){
	return	get_exp( nownum,  s1,  s2);

	}
	else
	{
		
		exp_num = reviewtable.size();
		if (exp_num == 0) return 0;
		s1 = reviewtable[nownum%exp_num].timu;
		s2 = reviewtable[nownum%exp_num].daan;
		return 1;

	}
}
void my_set_opr() {
	set_opr(b_add,b_sub,  b_mul,  b_div,  b_pow);
}
void my_set() {
	set(num_max, num_limit, lastexp_num, type_u, 2);
}