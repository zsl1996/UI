#include<dll.h>
#include<mainwindow.h>
#include<string>
#include<review.h>
int num_max = 1000;//操作数的最大值，默认1000，有效范围1 ~ INT_MAX
int num_limit = 20;// 操作数最大个数，默认20，有效范围1 ~ INT_MAX
int exp_num = 5;//表达式个数，默认5，有效范围1 ~ INT_MAX
int type_u = 1; //操作数类型，有效范围0 double, 1 int, 2 fraction，默认double
int precision = 2;// 小数精度，默认2，有效范围1 ~ INT_MAX
bool b_add = true;
bool b_sub = true;
bool b_div = false;
bool b_pow = false;
bool  b_mul = false;
float sumscore = 0; //当前总分
float tempscore; //当前题得分
int lcd_time = 20; //计时器间隔
int nownum = 0;//现在正在答的题下标
int review_flag = 0; //标志是否是复习模式
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
	set(num_max, num_limit, exp_num, type_u, 2);
}