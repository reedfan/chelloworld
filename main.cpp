#include <iostream>
 using namespace std;


#define LENGTH 10
#define WIDTH  5
#define NEWLINE '\n'


// 函数声明
int func1();
int func2();
int func3();
int func4();
int func5();


int main(){
    // 函数调用
   // int i1 = func1();
    int i2 = func2();
    int i3 = func3();
    int i4 = func4();
    int i5 = func5();

}

// 函数定义
int func1() {
   // std::cout << "Hello, World!" << std::endl;
    cout << "Hello, World!" << endl;
    return 0;
}






// 全局变量声明
 int a, b;
extern int c;
extern float f;

int func2 ()
{
    // 变量定义
  //  int a, b;
    int c;
    float f;

    // 实际初始化
    a = 10;
    b = 20;
    c = a + b;

    cout << c << endl ;

    f = 70.0/3.0;
    cout << f << endl ;

    return 0;
}



//关于常量
int func3 ()
{
    int area;
   // LENGTH = 20;

    area = LENGTH * WIDTH;
    cout << area;
    cout << NEWLINE;
    return 0;
}

//const关键字
int func4 ()
{
    const int  LENGTH1 = 10;
    const int  WIDTH1  = 5;
    const char NEWLINE1 = '\n';
    int area;

    //  LENGTH1 = 20;   不能更改

    area = LENGTH1 * WIDTH1;
    cout << area;
    cout << NEWLINE1;
    return 0;
}


// short 【int】有符号短整型，数值范围为：-32768~32767；
//unsigned short【int】无符号短整型，数值范围为：0~65535；
int func5 ()
{
    short int i;           // 有符号短整数
    short unsigned int j;  // 无符号短整数

    j = 50000;

    i = j;
    cout << i << " " << j;

    return 0;
}



