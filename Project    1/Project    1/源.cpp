#define _CRT_SECURE_NO_WARNINGS 1;    
#include<stdio.h>;
#include<string.h>                     //strlen  strcmp 
#include<windows.h>                    // Sleep 
#include<time.h>


//int main()
//{
//	printf("hello world\n");     //  \n为换行
//	int 世界 = 1;
//	char dj = 'a';
//	short a1 = 10;
//	long b = 20;
//	long long 世界加 = 30;
//	double asd = 3.14;
//	float uio = 2.456f;
//	printf("%d\n", sizeof(double));    //sizeof为单目操作符，计算类型或变量大小
//	printf("%d\n", sizeof(int));       //"%\n"表示输出类型为整形
//	printf("%d\n", sizeof(short));     //"%lf"表示输出类型为浮点型double，"%f"表示输出类型为浮点型float
//	printf("%d\n", sizeof(long));
//	printf("%d\n", sizeof(long long));
//	printf("%d\n", sizeof(char));
//	printf("%d\n", sizeof(float));
//	        //bit为计算机中单位，8 bit=1 byte（字节）；1024 byte = 1 kb ；1024 kb = 1 mb ；1024 mb = 1 gb；1024 gb = 1tb；1024 tb = 1 pb ；
//	return 0;
//  }


//int main()
//{
//	int 阿萨德 = 1;           //建议这样设置 
//	阿萨德 = 阿萨德 + 1;  
//	double UI ;
//	UI = 2.2548;             //不建议这样设置
//	UI = UI - 1;
//	printf("%d\n", 阿萨德);
//	printf("%lf\n", UI);
//
//
//	return 0;
//}


//int a = 1;             //全局变量
//int main()
//{
//	int a = 10;        //局部变量
//	printf("%d\n", a); //局部变量与全局变量同名时，输出为局部变量，不建议同名
//	return 0;
//}


//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	scanf("%d %d", &a, & b);   //为a和b赋值，值为键盘输入的值     （不建议使用scanf_s函数，该函数为vs 编译器提供，非c语言提供）
//                               //须引用头文件 #define _CRT_SECURE_NO_WARNINGS 1，且为第一行
//	c = a + b;
//	printf("c=%d\n", c);
//	return 0;
//}


//extern int bbb;   //从 源1.cpp 中调用（文件外部调用“bbb”，若有多个“bbb”会报错）
//int main()
//{
//	printf("bbb=%d\n", bbb);
//	return 0;
//}


//#define max 10000;      //"max"为标识符常量
//int main()
//{
//	133;
//	"啊";
//	"asd";   //字面常量
//	
//	const int a = 123;   //"a"为常变量即常量，不可更改，《int为数据类型，可换为short，long等》  *本质仍为变量
//	int b[8] = { 0 };        //???????（8改为a报错，证明a为变量）
//
//    #define min 1;         //可放大括号内
//	int c = min;
//	int d = max;
//	printf("a=%d\n", c);
//	printf("b=%d\n", d);
//	return 0;
//}


//enum sex    //“sex”枚举类型变量，只能为以下几个值，
//{
//   male = 7,  //“=7”为“赋  初值”，即依次输出后分别为7,8,9,10，
//   famale,
//   secret,
//   a123，   //为枚举常量，数值默认从0开始，即这些字符串输出依次为 0,1,2,3，不可更改这些常量
//};
//int main()
//{
//	enum sex a = male;    //定义a变量
//	printf("%d\n", a);
//	printf("%d\n", secret);
//	return 0;
//}



//int main()
//{
//	char arr[] = "sex"; //长度表面为3个字符's''e''x'，实际为4个字符即末尾还有一个隐藏的'\0'，\0为字符串结束标志
//	                    arr为名称，[]内部未标明元素个数时，会根据后面的内容"sex"来初始化[]
//	                    按F10后可从测试-窗口打开监视
//	char arr1[] = "jk   l";
//	char arr2[] = { 'j','k','l' }; //这里无'\0'字符，只有3个字符，打印（输出）这个时，因为无\0结束标志，所以剩下内存会打印乱码，加入'\0'元素则不会乱码
//	char arr3[] = { 'j','k','l','\0' };
//	printf("%s\n", arr1);            //打印arr，arr1，arr2时用%s，即字符串（%c为字符）
//	printf("%s\n", arr2);
//	printf("%s\n", arr3);
//	求字符串长度
//	int len = strlen("jkl");    //须引用头文件 #include<string.h>，strlen即string length
//	printf("%d\n", len);        //求字符串长度时不包含即不计算'\0',但存在，但求字符串数组的元素个数时会计算\0
//	printf("%d\n", strlen(arr1));
//	printf("%d\n",strlen(arr2));  //因为arr2无结束标志，所以打印值为随机数
//	printf("%d\n", strlen(arr3));
//    printf("%d\n",strlen("c:\test\168\test"));  //  \16为一个，8不是8进制
//
//	return 0;
//}


//int main()
//{
//	printf("c:\test\test.c\n");       //   所有\t和无法打印，\t为转义字符，行使其他功能，不单纯为字符
//	printf("(asdasd??)\n");           //   ??)为3字母词即]         *？？？？并不会
//	printf("%c\n",'\130');            //  【\ddd】(ddd表示1~3个8进制数字)，\130(八进制130换算为十进制：1*8^2+3*8^1+0*8^0=88)，88的ASCII码值为X
//	printf("%c\n", '\'');             //   打印'
//	printf("%s\n", "\"");             //   打印"
//	printf("%s\n", "\\\\");           //   打印两个\而不是四个
//	printf("%s\n", "'");              //   此时'不会与前后的‘形成特殊意义
//	printf("%c\n", '"');
//	printf("%c\n", '\x31');           //   \xdd(dd表示2个十六进制数)，31=49，即1
//	return 0;
//}


//int main()
//{
//	int input = 0;
//	printf("你是什么？\n");
//	scanf("%d", &input);
//	if (input == 0)                          //  ==为比较是否为等于，=为赋值
//	{
//		printf("人\n");
//	}
//	else
//	{
//		printf("鬼\n");
//	}
//	printf("%d\n", input);
//
//	return 0;
//}


//int main()
//{
//	int a = 0;
//	while (a <= 8000)
//	{
//		printf("阿圣诞节快乐%d\n",a);
//		a++;
//	}
//	if (a > 8000)
//	{
//		printf("快乐结束");
//	}
//
//
//	return 0;
//}


//int d(int e, int q);
//int main()                    //使用
//{
//	int a, b;     
//	scanf("%d%d", &a,&b);
//	int c = d(a, b);
//	printf("%d\n", c);
//
//	return 0;
//}
//int d(int x, int y)
//{
//	int z = x * (y + 55);
//	return z;
//}                             //函数创建


//int main()
//{
//	int a[11] = { 1,2,3,4,5,6,7,8,9,10,11 };           //从左到右下标依次为0,1,2,3,4,5,6,7,8,9,10，即打印a[0]输出为1
//	int b[5] = { 1,2,3, };                             //不完全初始化时，后面2个元素默认为\0,即0
//	int i = 0;
//	while (i < 11)
//	{
//		printf("%d\n", a[i]);
//		i++;
//	}
//
//
//	return 0;
//}


//int main()
//{
//	int c = 9 / 2;
//	printf("%d\n", c);
//	float d = 9 / 2;             //虽然为float，但先9/2，/左右均为整形，所以9/2为整形即4，输出任为4
//	printf("%f\n", d);
//	float e = 9.0 / 2;
//	printf("%f\n", e);
//
//	int a = 2;
//	int b = a << 1;                              //a占4个字节32个比特位，又因为a=2，所以a实际为000000000000000000000010，
//	printf("%d\n", b);                           //  <<为左移操作符(2进制移位)，原本|00000000000000000000010|,左移后1个操作符后为   0|000000000000000000000100|，即4，>>同理
//                                               //  按位操作符    &：按位与  |:按位或  ^:按位异或
//	int a = 4;
//	a = a + 4;
//	a += 4;
//
//	a = a % 3;
//	a %= 3;            //同理其他
//	return 0;
//}


//int main()
//{
//	int a = 0;           //0为假，非0为真
//	a = !a;              //   !：逻辑反操作 
//	scanf("%d", &a);
//	printf("%d\n", a);
//	                  //!用法举例 
//	if (a)            //：假如a为真
//	{
//		printf("111111%d\n", a);
//	}
//	if (!a)           //假如a为假
//	{
//		printf("000000%d\n", a);
//	}
//	return 0;
//}


//  ~  单目操作符之一  按位取反：按二进制位取法把二进制中数字1变0，0变1
//   1：0000 0000 0000 0000 0000 0000 0000 0001        ~1：1111 1111 1111 1111 1111 1111 1111 1110
//   正整数原码反码补码相同，储存数时计算机内是补码
//1、机器数
//
//一个数在计算机中的二进制表示形式, 叫做这个数的机器数。机器数是带符号的，在计算机用一个数的最高位存放符号, 正数为0, 负数为1.
//比如，十进制中的数 + 3 ，计算机字长为8位，转换成二进制就是00000011。如果是 - 3 ，就是 10000011 。
//那么，这里的 00000011 和 10000011 就是机器数。
//2、真值
//
//因为第一位是符号位，所以机器数的形式值就不等于真正的数值。例如上面的有符号数 10000011，其最高位1代表负，其真正数值是 - 3 而不是形式值131（10000011转换成十进制等于131）。所以，为区别起见，将带符号位的机器数对应的真正数值称为机器数的真值。
//例：0000 0001的真值 = +000 0001 = +1，1000 0001的真值 = –000 0001 = –1
//二.原码, 反码, 补码的基础概念和计算方法.
//在探求为何机器要使用补码之前, 让我们先了解原码, 反码和补码的概念.对于一个数, 计算机要使用一定的编码方式进行存储.原码, 反码, 补码是机器存储一个具体数字的编码方式.
//1. 原码
//
//原码就是符号位加上真值的绝对值, 即用第一位表示符号, 其余位表示值.比如如果是8位二进制:
//[+1] 原 = 0000 0001
//[-1]原 = 1000 0001
//第一位是符号位.因为第一位是符号位, 所以8位二进制数的取值范围就是:
//[1111 1111, 0111 1111]
//即
//[-127, 127]
//2. 反码
//反码的表示方法是 :
//正数的反码是其本身
//负数的反码是在其原码的基础上, 符号位不变，其余各个位取反.
//[+1] = [00000001]原 = [00000001]反
//[-1] = [10000001]原 = [11111110]反
//可见如果一个反码表示的是负数, 人脑无法直观的看出来它的数值.通常要将其转换成原码再计算.
//3. 补码
//补码的表示方法是 :
//正数的补码就是其本身
//负数的补码是在其原码的基础上, 符号位不变, 其余各位取反, 最后 + 1. (即在反码的基础上 + 1)
//[+1] = [00000001]原 = [00000001]反 = [00000001]补
//[-1] = [10000001]原 = [11111110]反 = [11111111]补


//int main()
//{
//	int a = 1;
//	int e = 1;
//	int g = 1;
//	int b = ~a;
//	printf("%d\n", b);
//	int c = a++;              //先c=a，后a+1
//	printf("%d\n", c);
//	printf("%d\n", a);
//	int d = ++e;              //先e+1，后d=e
//	printf("%d\n", e);
//	printf("%d\n", d);
//
//	int f = (++g) + (++g) + (++g);    //不建议研究这个，不同编译器结果不同
//	printf("%d\n", f);
//	printf("%d\n", g);
//	return 0;
//}


//int main()
//{
//	int a = 3.14;      //会出现警示可能丢失数据
//	int b = (int)3.14; //强制类型转换  不会出现警示
//	                   //大于等于：>=  不等于：!=   等于：=
//
//	int c = 8;
//	int d = 9;
//	int e = 0;
//	int f = c && d;            //&&：逻辑与（交，一假为假） ||:逻辑或（并，一真为真）
//	int g = c && e;
//	printf("%d\n", f);         //c和d均为真为真所以输出为1
//	printf("%d\n", g);         //一真一假所以为假0
//
//
//	return 0;
//}


//int main()
//{
//	int a = 8;
//	int b = 7;
//	int c = 0;
//	if (a > b)
//		c = a;
//	else
//		c = b;
//	printf("%d\n", c);
//
//
//	int asd = a > b ? a : b;      //条件操作符  exp1？exp2：exp3
//	                              //exp1成立，exp2计算，结果为exp2
//	                              //exp1不成立，exp3计算，结果为exp3
//	printf("%d\n", asd);
//
//	return 0;
//}


//int main()
//{
//	int a = 1;
//	int s = 2;
//	int d = 3;
//	int  f = (a = s + 3, s = a * 8, d = s - 13);   //逗号表达式：从左到右依次计算，结果为最后一位
//	printf("f为%d\n", f);
//	printf("s为%d\n", s);
//
//
//	     int e = 0;//auto  自动创建自动销毁-自动变量，在最开头省略掉了，也有其他用法
//
//	return 0;
//}


//typedef unsigned int q123;    //typedef为类型定义，此处将 unsigned int  重命名为  q123，省事
//int main()
//{
//	register int a = 123;   //建议存储在寄存器中，是否存入取决于编译器，大量频繁使用的数据会被存入寄存器中，提高效率
//	                        //define include都不是关键字，是预处理指令
//
//	 unsigned int s = 456;
//	 q123 e = -789;
//	 printf("s=%d\ne=%d\n", s, e);
//	return 0;
//}


//void test()                           //？？？？？？？？：void，test
//{
//	static int a = 10;                //static可以修饰：*全局变量 *局部变量 *函数
//	a++;                              //static修饰局部变量，改变了变量a的生命周期本质为存储类型改变，由栈区变为静态区，
//	printf("%d\n", a);                //无static，结果全是11，即反复创建销毁
//	                                  //栈区：局部变量，函数参数  堆区：动态内存分配  静态区：全局变量，statiic修饰的变量
//	                                  //static修饰的全局变量只能在自己的源文件里使用，其他源文件不能使用，extern也不能      *其修饰的函数同理
//	                                  //全局变量可以在其他源文件中被调用如extern，因为其具有外部链接属性，被static修饰后变为内链接属性，其他源文件不能链接到这个静态的全局变量  *函数同理
//}
//int qwe(int, int);                    //声明qwe函数（在源1中创建），？？？？？？？：不用extern也能用
//int main()
//{
//	int b = 0;
//	while (b <= 250)                  //反复创建销毁a
//	{
//		test();
//		printf("%d\n", b);
//		b++;
//	}
//	int e = 1;
//	int c = qwe(e, b);
//	printf("c=%d\n", c);
//	return 0;
//}


//#define MAX 1000;
//#define add(x,y,z) x+y+z
//#define qwe(x,y,z) ((x)+(y)+(z))              //x，y，z可以为一个运算
//int main()
//{
//	printf("%d\n", add(4, 5, 6));
//	printf("%d\n", 5 * add(4, 5, 6));         //因为没括号所以实际运算为：5* 4+5+6
//	printf("%d\n", 5 * qwe(4, 5, 6));         //此处运算为：5*（（4）+（5）+（6））
//	return 0;
//}


//int main()
//{
//	int a = 12;         // 窗口-内存-&a：(举例) 0x00000077B80FF674   0c 00 00 00 d3 8e 95 c1 fd 7f 00
//	                    // 0c 00 00 00 ：4个字节（a所占的内存）
//	                    // 0x00000077B80FF674 ：a的第一个字节的地址
//	char b = 'aaaa';    //  ???:char为什么只能4个字符
//	printf("%p\n%p\n", &a, &b);   // %p专门用来打印地址
//	int* c = &a;
//	char* d = &b;                 // char 为指向对象b的类型，d为指针变量，*说明d为指针变量
//	printf("%p\n%p\n", c, d);      // c和d值为a和b的地址
//	*c = 90;
//	*d = 1;                        //* ：解引用操作，*d就是通过d里边的地址找到b
//	printf("%d\n%d\n", a, b);        // a,b的值被改变
//	printf("%d\n%d\n", sizeof(char*), sizeof(int*));    // 32位计算机位4字节，64位计算机为8字节，指针大小取决于地址的储存需要多大空间，和类型无关
//	return 0;
//}


//struct student 
//{
//	char name[20];
//	float score;
//	int age;
//};                              //  struct 结构体创建
//struct book
//{
//	char name[20];
//	float price;
//	char author[20];
//};
//int main()
//{
//	struct student a = { "张三",90.5,16 };       //结构体 a 的创建与初始化
//	struct book b = { "飞鸟集",45,"我" };
//	printf("1:  %s\n %lf\n %d\n", a.name, a.score, a.age); // 格式： 结构体变量.成员变量
//	struct student* c = &a;                             //类型为 struct student 而不是struct
//	printf("2:  %s\n %lf\n %d\n", (*c).name, (*c).score, (*c).age); //指针应用
//	printf("3:  %s\n %lf\n %d\n", c->name, c->score, c->age);     //方式3格式： 结构体指针->成员变量名
//
//
//	return 0;
//}


//int main()
//{
//	int age = 0;
//	scanf("%d", &age);
//	if (age < 18)                  
//	{
//		printf("未成年\n");
//	}
//	else if (age>=18 && age <= 26)   //多条件格式
//	{
//		printf("青年\n");
//	}                             //一条时，{}可省略
//
//	else if (age <= 60)           //此处无age<40这一条件,所以如果输入39，则按顺序在此处符合，即输出 中年 而非我们想要的壮年，但第一个else if 可以不用，因为其默认在if不成立的情况下
//		printf("中年\n");
//	else if (age <= 40)
//		printf("壮年\n");
//	else if (age <= 100)
//		printf("老年\n");
//	else                       //可不需要else，即无输出
//		printf("老不死\n");
//
//
//	int a = 1;
//	int b = 2;
//	if (a == 0)
//		if (b == 2)                    //建议数字在前，因为如果 b = 2 ，程序能执行错误不易被发现，但 2 = b 时错误会被标记程序无法执行
//			printf("hh\n");
//	else                      
//		printf("mm\n");               //结果不打印，因为这个else与最近的if匹配，此else与第一个if对齐易误导
//	if (a == 0)
//	{
//		if (b == 2)
//		{
//			printf("hh\n");
//		}
//	}                                 //加入大括号后则不会
//	else
//	{
//		printf("mm\n");
//	}
//	return 0;                           //return后会结束这个函数体，如果在选择语句中有return，那么后面的代码不会被执行
//}


//int main()
//{
//	int a ;
//	scanf("%d", &a);
//	if (a % 2 == 1 && a <= 100)
//	{
//		printf("奇数\n");
//		printf("%d\n", a);
//	}
//	else if (a % 2 == 1 && a > 100)
//	{
//		printf("奇数\n");
//	}
//	else if (a % 2 == 0 && a <= 100)
//	{
//		printf("偶数\n");
//		printf("%d\n", a);
//	}
//	else
//	{
//		printf("偶数\n");
//	}
//	int b = 1;
//	while (b < 100)
//	{
//		printf(" % d\n", b);
//		b += 2;
//	}
//	return 0;
//}


//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	switch (a)                      // （）内必须为  整形表达式
//	{
//	case 1:                         // case后需接  整形常量表达式
//		printf("星期一\n");
//		break;                       //  switch 语句,case条件，break 结束分支
//	case 2:
//		printf("星期二\n");
//		break;
//	case 3:
//		printf("星期三\n");
//		break;
//	case 4:
//		printf("星期四\n");
//		break;
//	case 5:
//		printf("星期五\n");
//		break;
//	case 6:
//		printf("星期六\n");
//		break;
//	case 7:
//		printf("星期日\n");
//		break;
//	}
//
//
//	int b = 0;
//	scanf("%d", &b);
//	switch (b)
//	{
//		case 1:
//		case 2:
//		case 3:
//		case 4:
//		case 5:
//			printf("工作日\n");
//			break;
//		case 6:
//		case 7:
//			printf("休息日\n");
//			break;
//		default:                             //  其他均不符合则执行此分支，无顺序之分
//			printf("输入错误\n");
//			break;
//
//
//	}                                      //  无误
//
//	return 0;
//}


//int main()
//{
//	int i = 1;
//	while (i <= 10)
//	{
//		if (i == 5)
//			break;                 //while中break用于永久终结循环
//		printf("%d\n", i);
//		i++;
//	}
//	int a = 1;
//	while (a <= 10)
//	{
//		printf("%d\n", a);
//		if (a == 5)
//			continue;              //while中continue是跳出本次循环继续下次判断是否进入下一次循环，此处陷入死循环
//		printf("%d\n", a);
//		a++;
//	}
//	return 0;
//}


//int main()
//{
//	int b = 0;
//	while ((b = getchar()) != EOF)        // ctrl + z 结束getchar读取
//		                                  //getchar：从一个文件流里头或标准输入（键盘）里读取一个字符   对其来说    回车也算字符        ？？？一个？
//		                                  //         返回的类型是整形int（ASCII码值），读取到错误或文件结束返回EOF(本质为-1)
//	{
//		putchar(b);                       // putchar：输出一个字符                                                           ？？？？一个？
//	}                                     // eg：输入1回车，即在缓冲区存入 123\n，getchar拿走123，再次循环时因为缓冲区还有一个 \n，所以第二次拿走\n，第三次没有了便等待输入
//	                                      // scanf也是从缓冲区读取数据，但不读取\n，如果先用scanf再用getchar，则getchar会直接读取scanf剩下的\n
//
//	char password[20] = { 0 };
//	printf("请输入密码：");
//	scanf("%s", password);                // 数组名字就是地址所以不用  &
//	while (int q = getchar() != '\n')     //清除缓冲区
//	{
//		;
//	}
//	printf("请确认密码(Y/N):");                            
//	int a = getchar();
//	if (a == 'Y')
//		printf("确认成功\n");
//	else
//		printf("确认失败\n");
//	return 0;
//}


//int main()
//{
//	int a = 0;
//	while ((a = getchar()) != EOF)
//	{
//		if (a < '0' || a>'9')       //   ||：或者
//			continue;
//			putchar(a);
//	}
//	return 0;
//}


//int main()
//{
//	int a = 0;
//	for (a = 1;10 >= a;a++)                //   for(初始化;判断;调整1，调整2....调整n)，调整部分也可放到{ }中,任意部分均可省略但( ; ; )不可少，判断少了就是死循环了
//	{
//		if (5 == a)
//			continue;                      // for循环中continue之后不会死循环，没跳过a++，不同于while
//		printf("%d   ", a);
//	}
//	return 0;
//
//	/*int main()                                      //死循环
//	{
//		int a = 0;
//		for (a = 1;a <= 10;a++)
//		{
//			printf("%d  ", a);
//			int b = 0;
//			for (b = 1;b <= 10;a++)
//			{
//				printf("dddd\n");
//			}
//
//		}
//		return 0;
//	}*/
//
//
//	/*int main()                                        //打印9次
//	{
//		int a = 0;
//		int b = 0;
//		for (a = 0;a <= 3;a++)
//		{
//			for (b = 0;b <= 3;b++)
//			{
//				printf("sadasdasd");
//			}
//		}
//
//		return 0;
//	}*/
//
//
//	/*int main()                                      //打印3次，第一次里循环循环3次后第二次大循环不进入里循环了（不符合了），而上面是再次初始化所以每次大循环都有3次小循环
//	{
//		int a = 0;
//		int b = 0;
//		for (;a <= 3;a++)
//		{
//			for (;b <= 3;b++)
//			{
//				printf("qweqweqe");
//			}
//		}
//
//		return 0;
//	}*/
//
//	/*int main()                                   //一共循环  0  次，因为判断部分是=给b赋值0，即假，不是==判断是否等于，所以不执行循环
//	{
//		int a = 0;
//		int b = 0;
//		for (a = 0, b = 0;b = 0;a++, b++)
//		{
//			b++
//		}
//		return 0;
//	}*/
//}


//int main()
//{
//	int a = 0;
//	do                                 //  特点：至少循环一次（先执行一次再判断是否循环）
//	{
//		printf("jjjjjj     ");
//		a++;
//	} while (a <= 10);
//	return 0;
//}


//int main()
//{
//	/*int a = 0;                                                                     // 阶乘:1*2*3*....*n=
//	int b = 1;
//	int c = 1;
//	scanf("%d", &a);
//	for (b = 1;b <= a;b++)
//	{
//		printf("%d * ", b);
//		c = c * b;
//	}
//	printf("\n");
//	printf("c=%d", c);*/
//
//
//	/*int a = 0;                                                                      //双循环求 1！+2！+3！+...+n！=
//	int n = 0;
//	int b = 1;
//	int c = 1;
//	int d = 0;
//	scanf("%d", &a);
//	for (n=1;n<=a;n++)
//	{
//		for (c=1,b =1;b <= n;b++)
//		{
//			c = c * b;
//		}
//		d = c + d;
//	}
//	printf("%d", d);
//	return 0;*/
//
//
//	//int a = 0;                                                                    //巧解
//	//int b = 0;
//	//int c = 1;
//	//int d = 0;
//	//scanf("%d", &a);
//	//for (b = 1;b <= a;b++)
//	//{
//	//	c *= b;
//	//	d += c;
//	//}
//	//printf("%d", d);
//	//return 0;
//
//
//	int a[15] = { 2,3,4,5,6,7,8,9,10,11,12,13,14,15,16 };                           //求一个规律数组的某数下标
//	int an = 0;
//	printf("请输入2-16中一个数\n");
//	scanf("%d", &an);
//	int le = 0;
//	int ri = (sizeof(a) / sizeof(a[0]))-1;
//	while (le <= ri)
//	{
//		int mi = (le + ri) / 2;
//		if (an < a[mi])
//		{
//			ri = mi - 1;
//		}
//		else if (a[mi] < an)
//		{
//			le = mi + 1;
//		}
//		else
//		{
//			printf("该数下标为%d\n", mi);
//			break;
//		}
//	}
//	if (le > ri)
//		printf("该数不在此数组内\n");
//
//
//
//}


//int main()                                                                                             
//{
//	char a[] = { "abcdefghijklmnopqrstuywxvyzyvxwuytsrqponmlkjihgfedcba" };
//	char b[] = { "                                                     " };
//	int le = 0;
//	int ri = strlen(a) - 1;
//	while (le <= ri)
//	{
//		b[le] = a[le];
//		b[ri] = a[ri];
//		printf("%s\n", b);
//		le += 1;
//		ri -= 1;
//		Sleep(100);                 //睡眠500毫秒=0.5秒
//		system("cls");              //清空屏幕
//	}
//	printf("%s\n", b);
//	return 0;


//	int a = 0;
//	int c = 0;
//	char b[20] = { 0 };                                 //因为strcmp需要用char类型
//	for (a = 0;a < 3;a++)
//	{
//		printf("请输入密码\n");
//		scanf("%s", b);                                 //  因为b为char类型用%s，若用%d，则不能与"123456"比较
//		system("cls"); 
//		if (strcmp(b, "123456") == 0)                   // 字符串比较不能用  if(b=="123456"),应该用strcmp,  strcmp返回值为0，所以与0判断
//		{                                               //strcmp用于比较两个字符串并根据比较结果返回整数。
//			printf("密码正确\n");                       //基本形式为strcmp(str1,str2)，若str1=str2，则返回零；若str1<str2，则返回负数；若str1>str2，则返回正数
//			break;                                      //比较的是ASCII码值，  abcc和abcd比较，因为d的值比c大，所以abcd>abcc
//		} 
//		else
//		{
//			printf("密码错误\n");
//			printf("剩余%d次机会\n", 2 - a);
//		}
//		c = a;
//	}
//	if (c == 2)
//	{
//		printf("尝试次数过多，退出登录\n");
//	}
//	return 0;
//}


//void caidan()
//{
//	printf("                      1.开始                        \n");
//	printf("                      2.退出                        \n");
//}
//void game()
//{
//
//	
//	int ret = rand()%100+1;           // rand() ：随机数生成函数 0~32767    %100+1后产生的数就是1-100
//	int guese = 0;
//	while (1)
//	{
//		printf("请猜数字\n");
//		scanf("%d",&guese);
//		if (guese < ret)
//		{
//			printf("猜小了\n");
//		}
//		else if (guese > ret)
//		{
//			printf("猜大了\n");
//		}
//		else
//		{
//			printf("恭喜你，猜对了\n");
//			break;
//		}
//	}
//
//}
//int main()
//{
//	int input;
//	srand((unsigned int)time(NULL));  // srand()设置随机数起点（用unsigned int类型）  time（）时间戳，根据时间返回一个整型数值，返回类型为time_t类型，所以用了（）强制类型转换
//	                                  //????????:  time(NULL)
//	                                  //放在这里使每一次开始运行游戏起点不同，产生的系列随机数不同
//	do
//	{
//		caidan();
//		printf("请选择");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			game();
//			break;
//		case 2:
//			break;
//		default :
//			printf("输入错误，请重新输入");
//			break;
//		}
//	} while (input != 2);
//
//	return 0;
//}


//int main()
//{
//	int x = 3;
//	int y = 3;
//	switch (x % 2)
//	{
//	case 1:
//		switch (y)
//		{
//		case 0:
//			printf("first\n");
//		case 1:
//			printf("second\n");
//			break;
//		default :
//			printf("hellow\n");
//		}                                 // 无break，继续执行下面语句
//	case 2:
//		printf("third\n");
//	}
//	return 0;
//}


//int main()
//{
//	int a = 0,
//		b = 0,
//		c = 0,
//		d = 0;
//	printf("清输入3个整数\n");
//	scanf("%d%d%d", &a, &b, &c);
//	if (a > b)
//	{
//		if (a > c)
//		{
//			printf("%d\n", a);
//			if (b > c)
//			{
//				printf("%d\n%d\n", b, c);
//			}
//			else
//			{
//				printf("%d\n%\n", c, b);
//			}
//		}
//		else
//		{
//			printf("%d\n%\n%\n", c, a, b);
//		}
//	}
//	else
//	{
//		if (b > c)
//		{
//			printf("%d\n", b);
//			if (a > c)
//			{
//				printf("%d\n%d\n", a, c);
//			}
//			else
//			{
//				printf("%d\n%d\n", c, a);
//			}
//		}
//		else
//		{
//			printf("%d\n%d\n%d\n", c, b, a);
//		}
//	}
//
//
//	printf("\n");
//
//
//
//	return 0;
//}


//int main()
//{
//	int n = 0;
//	long long result = 1;
//	scanf("%d", &n);
//
//	for (int b = 1;b <= n;b++)
//	{
//		result *= b;
//	}
//	printf("%d\n", result);
//	return 0;
//}


//#define N 10
//int main() {
//	int i = 0, j = 0, a[N][N];
//	int x1 = N, y1 = N - 1;
//	int m = 1;
//	int r = 1;
//	int k = 0;
//	while (m <= N * N) {
//		if (r == 1) {
//			for (; j < x1; j++) {
//				a[i][j] = m;
//				m++;
//			}
//			i++, j--;
//			for (; i < y1; i++) {
//				a[i][j] = m;
//				m++;
//			}
//			i--, j--;
//			x1--, y1--;
//			r = 0;
//		}
//		else {
//			for (; j >= k; j--) {
//				a[i][j] = m;
//				m++;
//			}
//			i--, j++;
//			k++;
//			for (; i >= k; i--) {
//				a[i][j] = m;
//				m++;
//			}
//			i++, j++;
//			x1--, y1--;
//			r = 1;
//		}
//	}
//	for (i = 0; i < N; i++) {
//		for (j = 0; j < N; j++)
//			printf("", a[i][j]);
//		printf("\n");
//	}
//}


//void br(void);
//void ic(void);
//int main(void)
//{
//	br();
//	ic();
//	printf("\n");
//	ic();
//	printf("\n");
//	br();
//
//	return 0;
//}
//
//
//void br(void)
//{
//	printf("Brazil,Russia ");
//}
//void ic(void)
//{
//	printf("India,china");
//}
//void one_three(void);
//void two(void);
//
//int main(void)
//{
//	int toes = 10;
//	int toes2 = 2 * toes;
//	int toes_2 = toes * toes;
//	printf("toes = %d\n toes2 = %d\n toes_2 = %d\n", toes, toes2, toes_2);
//
//	printf("strat\n");
//	one_three();
//	printf("down\n");
//
//	return 0;
//}
//
//void one_three(void)
//{
//	printf("one\n");
//	two();
//	printf("three\n");
//}
//void two(void)
//{
//	printf("two\n");
//}


//int main()
//{
//	char a ;
//	char b;
//	a = 97;
//	b = 'a';
//	printf("%c\n", a);
//	printf("%d\n", a);
//	printf("%c\n", b);
//	printf("%d\n", b);
//	
//	int c = 2147483648;
//	int d = 2147483649;
//	float e = 3.12345678f;
//	float f = 2.2222223 / 2;
//	printf("%d\n%d\n%f\n%f\n", c, d, e, f);
//
//	int age;
//	float time;
//	scanf("%d", &age);
//	time = age * 3.156e-23;
//	printf("%e\n", time);
//
//	return 0;
//}


//#include<math.h>
//
//void asd(int s);
//int main()
//{
//	float a;
//	scanf("%f", &a);
//	asd(a);
//	return 0;
//}
//void asd(int a)
//{
//	int i = 0;
//	while ( i < a )
//	{
//		printf("#");
//		i++;
//}
//}

//void teperature(double a);
//int main(void)
//{
//	double a;
//	while (scanf("%lf", &a) == 1)
//	{
//		teperature(a);
//	}
//	return 0;
//}
//void teperature(double a)
//{
//	double s, d;
//	s = 5.0 / 9.0 * (a - 32.0);
//	d = s + 273.15;
//	printf("huashhi = %lf\n", s);
//	printf("kaishi = %lf\n", d);
//
//}

//int main()
//{
//	float q = 1.23;
//	int w = 5;
//	char a = 'a';
//	unsigned b = 'b';
//	printf("%c\n%hh\n", a, a);
//	printf("%c\n%hh\n", b, b);
//	printf("12345678901234567890123456789\n");
//	printf("% 5f% 5f", q,-q);
//	printf("\n");
//	printf("% 5d%     5d", w, -w);
//	printf("\n");
//	printf("% d% d\n", w, -w);
//	scanf("%f%d", &q, &w);
//	printf("%f\n%d\n", q, w);
//	return 0;
//}



//int main(void)
//{
//	int i, j;
//	char k = '$';
//	for (i = 0;i < 4; i++)
//	{
//
//		for (j = 0;j < 8;j++)
//		{
//			printf("%c", k);
//		}
//		printf("\n");
//	}
//	
//	return 0;
//}


//6.16

//int main(void)
//{
//	int i;
//	char shu[26];
//	for (i = 'a'; i <= 'z'; i++)
//	{
//		shu[i] = i;
//		printf("%c", shu[i]);
//	}
//
//	return 0;
//}

//int main(void)
//{
//	int i,j;
//	for (i = 1;i <= 5;i++)
//	{
//		for (j = 0;j < i;j++)
//		{
//			printf("$");
//		}
//		printf("\n");
//	}
//	return 0;
//}

//int main(void)
//{
//	int i, j;
//	for (i = 'F';i >= 'A';i--)
//	{
//
//		for (j = 'F';j >= i;j--)
//		{
//			printf("%c", j);
//		}
//		printf("\n");
//	}
//	return 0;
//}

//int main(void)
//{
//	int i, n;
//	char j = 'A';
//	for (i = 1;i <= 6;i++)
//	{
//		for (n=1;n<=i;n++,j++)
//		{
//			printf("%c", j);
//		}
//		printf("\n");
//	}
//
//	return 0;
//}

//int main(void)
//{
//	int i;
//	int j, k, l, m;
//	char n;
//	for (scanf("%d", &i), j = 1;j <= i;j++)
//	{
//
//		for (k=0;k<i-j;k++)
//		{
//			printf(" ");
//		}
//
//		for (n = 'A', l = 1;l <= i-k;l++,n++)
//		{
//			printf("%c", n);
//		}
//		for (n = 'A' + l - 3, m = 1;m < i - k;m++, n--)
//		{
//			printf("%c", n);
//
//		}
//
//		printf("\n");
//	}
//	return 0;
//}

//int main(void)
//{
//	int up, down;
//	int i, j, k;
//	
//	while (scanf("%d%d", &up, &down) == 2)
//	{
//		for (i = up;i <= down;i++)
//		{
//			j = i * i;
//			k = i * j;
//			printf("%d\t%d\t%d\n", i, j, k);
//
//		}
//	}
//
//	return 0;
//}

//int main(void)
//{
//	char arr[20];
//	int j;
//	scanf("%s", arr);
//	for (j = strlen(arr) - 1 ;j >= 0;j--)
//	{
//		printf("%c", arr[j]);
//	}
//	return 0;
//}

//int main(void)
//{
//	float num1, num2;
//	float a;
//	while (scanf("%f%f", &num1, &num2)==2)
//	{
//		a = (num1 - num2) / (num1 * num2);
//		printf("%f", a);
//	}
//	return 0;
//}

//int main(void)
//{
//
//	float a, b;
//	int n;
//	scanf("%d", &n);
//	for (a = 1,b = 0;a <= n;a++)
//	{
//		b += 1 / a;
//	}
//	printf("%f", b);
//	return 0;
//}

//int main(void)
//{
//	int i = -1;
//	char letters[255];
//
//	do
//	{
//		i++;
//		scanf("%c", &letters[i]);
//	} while (letters[i] != '\n');
//	for (;i >= 0;i--)
//		printf("%c", letters[i]);
//
//	return 0;
//}


//int main(void)
//{
//	char ch;
//	while ((ch = getchar()) != '#')
//	{
//		if (ch == '\n')
//			continue;
//		printf("step 1\n");
//		if (ch == 'c')
//			continue;
//		else if (ch == 'b')
//			break;
//		else if (ch == 'h')
//			goto laststep;
//		printf("step 2\n");
//	laststep:printf("step 3\n");
//
//	}
//	printf("done\n");
//
//
//	return 0;
//}

// 7.12

//#include<ctype.h>
//int main(void)
//{
//	char ch;
//	int kong = 0, line = 0, num = 0;
//	while ((ch = getchar()) != '#')
//	{
//		if (ch == ' ')
//		{
//			kong++;
//			
//		}
//		else if (ch == '\n')
//			line++;
//		else
//		{
//			num++;
//		
//		}
//	}
//	printf("kong = %d , line = %d , num = %d\n", kong, line, num);
//	return 0;
//}

//int main(void)
//{
//	int i=0;
//	char ch;
//	while (
//		(ch = getchar())
//		!= '#')
//	{
//		printf("%c:%d ", ch, ch);
//		i++;
//		if (i % 8 == 0)
//			printf("\n");
//	}
//	return 0;
//}

//int main(void)
//{
//	int ji = 0, ou = 0;
//	int ch;
//	float j = 0, o = 0;
//	while (
//		(scanf("%d",&ch)) == 1)
//	{
//		if (0 == ch)
//			break;
//		if (0 == ch % 2)
//		{
//			ou++;
//			o+= ch;
//		}
//		else
//		{
//			ji++;
//			j += ch;
//		}
//	}
//	printf("偶数个数：%d\n偶数平均值：%.2f\n", ou, (float)o / ou);
//	printf("奇数个数：%d\n奇数平均值：%.2f\n", ji, (float)j / ji);
//	return 0;
//}

//int main(void)
//{
//	char ch;
//	int i = 0, j = 0;
//	while ((ch = getchar()) != '#')
//	{
//		
//		if (ch == '.')
//		{
//			ch = '!';
//			i++;
//			putchar(ch);
//		}
//		else if (ch == '!')
//		{
//			ch = '!!';
//			j++;
//			putchar(ch);
//			putchar(ch);
//		}
//		else
//			putchar(ch);
//	}
//
//	printf("替换句号个数：%d\n替换感叹号个数：%d\n", i, j);
//
//	return 0;
//}

//int main(void)
//{
//
//	char ch;
//	char j = '0', k = '0', l = '0';
//	int i = 0;
//	int num = 0;
//	while ((ch = getchar()) != '#')
//	{
//		if (j == 'e' && ch == 'i')
//			i++;
//			j = ch;
//	}
//	printf("%d", i);
//	return 0;
//}

//int main(void)
//{
//	int i, num;
//	int j, k;
//	printf("please enter a number\n");
//
//	
//	for (i = 2, scanf("%d", &num);i <= num;i++)
//	{
//		for (j = 0, k = 1;k * k <= i;k++)
//		{
//			if (i % k == 0)
//				j++;
//		}
//		if (j == 1)
//			printf("%d  ", i);
//	}
//	return 0;
//}

//float dan(float a);
//float hu(float a);
//float yigong(float a);
//float yili(float a);
//int main(void)
//{
//	float a;
//	int b, c;
//	printf("1      2        3        4\n");
//		
//	while (
//		scanf("%d",&b)==1
//		&&
//		b>0&&b<5
//		)
//	{
//			scanf("%f", &a);
//			switch (b)
//			{
//			case 1:
//				printf("%f\n", dan(a));
//				break;
//			case 2:
//				printf("%f\n", hu(a));
//				break;
//			case 3:
//				printf("%f\n", yigong(a));
//				break;
//			case 4:
//				printf("%f\n", yili(a));
//				break;
//			default:
//				break;
//			}
//	}
//	if (b > 1 && b < 4)
//		;
//	else
//		printf("over\n");
//	return 0;
//}
//float dan(float a)
//{
//	int b;
//	if (a <= 17850)
//		b = a * 0.15;
//	else
//		b = 17850 * 0.15 + (a - 17850) * 0.28;
//	return b;
//}
//float hu(float a)
//{
//	int b;
//	if (a <= 23900)
//		b = a * 0.15;
//	else
//		b = 17850 * 0.15 + (a - 23900) * 0.28;
//	return b;
//}
//float yigong(float a)
//{
//	int b;
//	if (a <= 23750)
//		b = a * 0.15;
//	else
//		b = 17850 * 0.15 + (a - 23750) * 0.28;
//	return b;
//}
//float yili(float a)
//{
//	int b;
//	if (a <= 14875)
//		b = a * 0.15;
//	else
//		b = 17850 * 0.15 + (a - 14875) * 0.28;
//	return b;
//}

//8.11

//int main(void)
//{
//	int num;
//	char ch;
//	for (num = 0;(ch = getchar()) != EOF;num++)
//		;
//	printf("%d", num);
//	return 0;
//}

/*
int main(void)
{
	int i;
	char ch;
	for (i = 0;(ch = getchar())!=EOF;i++)
	{
		if (i < 10)
			;
		else
		{
			printf("\n");
			i = 0;
		}
		switch (ch)
		{

		case '\n':
			printf("'\\n'  %d  ", ch);
			break;
		case '\t':
			printf("'\\t'  %d  ", ch);
			break;
		default:
			printf("'%c'  %d  ", ch, ch);
		}

	}

	return 0;
}
*/

//int main(void)
//{
//    int ch;
//    int i = 0;
//
//    printf("Please enter some characters:\n");
//    while ((ch = getchar()) != EOF)
//    {
//        if (i++ == 10)
//        {
//            putchar('\n');
//            i = 1;
//        }
//        if (ch >= 32) //空格的十进制ASCII码;
//        {
//            printf(" \'%c\' - %3d ", ch, ch);
//        }
//        else if (ch == '\n')
//        {
//            printf(" \\n - \\n\n ");
//            i = 0;
//        }
//        else if (ch == '\t')
//        {
//            printf(" \\t - \\t ");
//        }
//        else
//        {
//            printf(" \'%c\' - ^%c ", ch, ch + 64);
//        }
//    }
//    puts("Done.");
//
//    return 0;
//}

//int main(void)
//{
//	char ch;
//	int dnum = 0, snum = 0;
//	while ((ch = getchar()) != EOF)
//	{
//		if(ch>='a'&&ch<='z')
//		{
//			snum++;
//		}
//		else if(ch>='A'&&ch<='Z')
//		{
//			dnum++;
//		}
//	}
//	printf("daxie=%d,xiaoxie=%d", dnum, snum);
//
//	return 0;
//}

//int main(void)
//{
//
//	int num = 0, i = 0;
//	char ch;
//	while ((ch = getchar()) != EOF)
//	{
//		if (i)
//		{
//			if (isalpha(ch))
//				;
//			else
//				i = 0;
//		}
//		else if (isalpha(ch))
//		{
//			i = 1;
//			num++;
//		}
//	}
//	printf("%d\n", num);
//	return 0;
//}

//int main(void)
//{
//	int up = 100;
//	int low = 0;
//	int guess = 50;
//	char ch;
//	printf("Pick an integer from 1 to 100. I will try to guess it.\n ");
//	printf("enter y to yes\n");
//	printf("enter b to bigger\n");
//	printf("enter s to smaller\n");
//	printf("Uh...is your number %d?\n", guess);
//	
//	while ((ch = getchar()) != 'y')
//	{
//		if (ch == 's')
//		{
//			low = guess;
//			guess = (guess + up ) / 2;
//			printf("Uh...is your number %d?\n", guess);
//		}
//		else if (ch == 'b')
//		{
//			up = guess;
//			guess = (guess + low + 1) / 2;
//			printf("Uh...is your number %d?\n", guess);
//
//		}
//		else if(ch == '\n')
//		{
//			printf("please enter a ture choose\n");
//			continue;
//		}
//		else
//			printf("please enter a ture choose\n");
//			getchar();
//	}
//	printf("it is %d\n", guess);
//
//	return 0;
//}

//char get_first(void);
//int main(void)
//{
//	char ch;
//	ch = get_first();
//	printf("%c", ch);
//
//	return 0;
//}
//char get_first(void)
//{
//	char ch;
//	
//	while (isspace(ch = getchar()))
//		;
//		return ch;
//}

//char get_first(void);
//float aaa(float a, float b);
//float bbb(float a, float b);
//float ccc(float a, float b);
//float ddd(float a, float b);
//float p1(float a);
//float p2(float b);
//void caidan();
//int main(void)
//{
//	char ch;
//	float num = 0, a = 0, b = 0;
//
//	
//	do
//	{
//		caidan();
//		ch = get_first();
//		while (ch != 'a' && ch != 'b' && ch != 'c' && ch != 'd' && ch != 'q')
//		{
//			printf("choose again\n");
//			ch = getchar();
//		}
//
//		if (ch == 'a')
//		{
//			a = p1(a);
//			b = p2(b);
//			num = aaa(a, b);
//			printf("%f + %f = %f\n", a, b, num);
//		}
//		else if (ch == 'b')
//		{
//			a = p1(a);
//			b = p2(b);
//			num = bbb(a, b);
//			printf("%f - %f = %f\n", a, b, num);
//		}
//		else if (ch == 'c')
//		{
//			a = p1(a);
//			b = p2(b);
//			num = ccc(a, b);
//			printf("%f * %f = %f\n", a, b, num);
//		}
//		else if (ch == 'd')
//		{
//			a = p1(a);
//
//			while ((b = p2(b)) == 0)
//				printf("enter wrong\n");
//			num = ddd(a, b);
//			printf("%f / %f = %f\n", a, b, num);
//		}
//
//		
//	} while (ch != 'q');
//
//		return 0;
//}
//void caidan()
//{
//	printf("a.  +              b.  -\n");
//	printf("c.  *              d.  /\n");
//	printf("q.  quet                \n");
//}
//char get_first(void)
//{
//	char ch;
//	
//	while (isspace(ch = getchar()))
//		;
//	while ((getchar()) != '\n')
//		;
//	return ch;
//}
//float p1(float a)
//{
//	printf("enter the first number\n");
//	while ((scanf("%f", &a)) != 1)
//	{
//		char m;
//		while ((m = getchar()) != '\n')
//			;
//		printf("choose again the first number\n");
//	}
//	return a;	
//}
//float p2(float b)
//{
//	printf("enter the second number\n");
//	while ((scanf("%f", &b)) != 1)
//	{
//		char m;
//		while ((m = getchar()) != '\n')
//			;
//		printf("choose again the second number\n");
//	}
//	return b;
//}
//float aaa(float a, float b)
//{
//	float c;
//	c = a + b;
//	return c;
//}
//float bbb(float a, float b)
//{
//	float c;
//	c = a - b;
//	return c;
//}
//float ccc(float a, float b)
//{
//	float c;
//	c = a * b;
//	return c;
//}
//float ddd(float a, float b)
//{
//	float c;
//	c = a / b;
//	return c;
//}

//9.11

//double power(double n, int p);
//
//int main(void)
//{
//    double x, xpow;
//    int exp;
//
//    printf("Enter a number and the integer power");
//    printf(" to which\nthe number will be raised. Enter q");
//    printf(" to quit.\n");
//    while (scanf("%lf %d", &x, &exp) == 2)
//    {
//        xpow = power(x, exp);
//        printf("%.3g to the power %d is %.5g.\n", x, exp, xpow);
//        printf("Enter next pair of numbers or q to quit.\n");
//    }
//    printf("Hope you enjoyed this power trip -- bye!\n");
//
//    return 0;
//}
//
//
//
//
//
//double power(double n, int p)
//{
//    int i;
//    double pow = 1.0;
//
//    if ((0 == p) && (0 == n))
//    {
//        printf("0 to the 0 undefined, using 1 as the value.\n");
//        return pow;
//    }
//    if (0 == n)
//    {
//        pow = 0.0;
//        return pow;
//    }
//    if (0 == p)
//    {
//        return pow;
//    }
//    if (p > 0)
//    {
//        /*for (i = 1; i <= p; i++)
//        {
//            pow *= n;
//        }
//        return pow;*/
//        pow = n * power(n, p - 1);
//        return pow;
//
//    }
//    else
//    {
//        /*for (i = 1; i <= -p; i++)
//        {
//            pow *= 1 / n;
//        }
//        return pow;*/
//        pow = 1 / n * power(n, p + 1);
//        return pow;
//    }
//}

//void to_binary(unsigned long n, int exp);
//
//int main(void)
//{
//	unsigned long number;
//	int exp;
//	printf("Enter an integer (q to quit):\n");
//	while (scanf("%lu%d", &number,&exp) == 2 && exp > 1 && exp < 11)
//	{
//		printf("Binary equivalent: ");
//		to_binary(number,exp);
//		putchar('\n');
//		printf("Enter an integer (q to quit):\n");
//	}
//	printf("Done.\n");
//
//	return 0;
//}
//void to_binary(unsigned long n, int exp)
//{
//	int r;
//	char ch;
//	r = n % exp;
//	if (n >= exp)
//		to_binary(n / exp, exp);
//	
//	putchar(ch = n % exp + '0');
//
//	return;
//}

//int main(void)
//{
//	int n, i;
//	long p = 1;
//	int a = 1, b = 1;
//	scanf("%d", &n);
//	for (i = 0; i < n; i++)
//	{
//		if (i < 2)
//		{
//			printf("%ld   ", p);
//		}
//		else
//		{
//			p = a + b;                          // 计算前两个数和
//			printf("%ld   ", p);
//			                                    // 为下次输出做准备
//			a = b;                              // a取其后面的b的值 
//			b = p;                              // b取其后面的p的值
//		}
//	}
//	return 0;
//}

//10.13

//#define MONTHS 12
//#define YEARS   5
//int main(void)
//{
//    const float rain[YEARS][MONTHS] =
//    {
//        { 4.3, 4.3, 4.3, 3.0, 2.0, 1.2, 0.2, 0.2, 0.4, 2.4, 3.5, 6.6 },
//        { 8.5, 8.2, 1.2, 1.6, 2.4, 0.0, 5.2, 0.9, 0.3, 0.9, 1.4, 7.3 },
//        { 9.1, 8.5, 6.7, 4.3, 2.1, 0.8, 0.2, 0.2, 1.1, 2.3, 6.1, 8.4 },
//        { 7.2, 9.9, 8.4, 3.3, 1.2, 0.8, 0.4, 0.0, 0.6, 1.7, 4.3, 6.2 },
//        { 7.6, 5.6, 3.8, 2.8, 3.8, 0.2, 0.0, 0.0, 0.0, 1.3, 2.6, 5.2 },
//
//    };
//    int year, month;
//    float subtot, total;
//
//    printf(" YEAR     RAINFALL  (inches)\n");
//    for (year = 0, total = 0; year < YEARS; year++)
//    {
//        for (month = 0, subtot = 0; month < MONTHS; month++)
//            subtot += *(*(rain + year) + month);
//        printf("%5d %15.1f\n", 2010 + year, subtot);
//        total += subtot;
//    }
//    printf("\nThe yearly average is %.1f inches.\n\n", total / YEARS);
//    printf("MONTHLY AVERAGES:\n\n");
//    printf(" Jan Feb Mar Apr May Jun Jul Aug Sep Oct ");
//    printf(" Nov Dec\n");
//
//    for (month = 0; month < MONTHS; month++)
//    {
//        for (year = 0, subtot = 0; year < YEARS; year++)
//            subtot += *(*(rain + year) + month);
//        printf("%4.1f ", subtot / YEARS);
//    }
//    printf("\n");
//
//	return 0;
//}

//void q(double a[], double b[],int c);
//void w(double *a, double *b, int c);
//void e(double a[], double b[], double *c);
//void f(double* a, int b);
//int main(void)
//{
//	double asd[6] = { 1.1,2.2,3.3,4.4,5.5,6.6 };
//	double qwe[6], zxc[6], jkl[6];
//
//	q(qwe, asd, 6);
//	w(zxc, asd, 6);
//	e(jkl, asd, asd + 6);
//
//	f(qwe, 6);
//	putchar('\n');
//	f(zxc, 6);
//	putchar('\n');
//	f(jkl, 6);
//	putchar('\n');
//
//
//	return 0;
//}
//void q(double a[], double b[], int c)
//{
//	int i;
//	for (i = 0;i < c;i++)
//	{
//		a[i] = b[i];
//	}
//}
//void w(double* a, double* b, int c)
//{
//	int i;
//	for (i = 0;i < c;i++)
//	{
//		*(a + i) = *(b + i);
//	}
//}
//void e(double a[], double b[], double* c)
//{
//	
//	double* p;
//	for (p = b;p < c;p++)
//	{
//		*(a++) = *p;
//	}
//}
//void f(double* a, int b) 
//{
//	for (int i = 0;i < b;i++)
//	{
//		printf("%.1lf   ", a[i]);
//	}
//}

//int asd(int* a, int n);
//int main(void)
//{
//	int a[5] = { 10,54,908,1,304 };
//	int max;
//	max = asd(a, 5);
//	printf("%d\n", max);
//
//
//	return 0;
//}
//int asd(int* a, int n)
//{
//	int max, i;
//	for (i = 0, max = a[0];i < n; i++)
//	{
//		if (max < a[i])
//			max = a[i];
//	}
//	return max;
//}

//int asd(double* a, int n);
//int main(void)
//{
//	double a[5] = { 10.41,5400.458,9.8,141,304.14 };
//	int max;
//	max = asd(a, 5);
//	printf("%d\n", max);
//
//
//	return 0;
//}
//int asd(double* a, int n)
//{
//	int i, m;
//	double max;
//	for (i = 0, max = a[0];i < n; i++)
//	{
//		if (max < a[i])
//		{
//			max = a[i];
//			m = i;
//		}
//	}
//	return m;
//}

//double asd(double* a, int n);
//int main(void)
//{
//	double a[5] = { 10.41,54.458,9.8,141,304.14 };
//	double cha;
//	cha = asd(a, 5);
//	printf("%lf\n", cha);
//	return 0;
//}
//double asd(double* a, int n)
//{
//	int i;
//	double max,  min;
//	for (i = 0, max = a[0], min = a[0];i < n; i++)
//	{
//		if (max < a[i])
//		{
//			max = a[i];
//		}
//		if (min > a[i]) 
//		{
//			min = a[i]; 
//		}
//	}
//	printf("max = %lf\nmin = %lf\n", max, min);
//	return (max - min);
//}

//void asd(double* a, int n);
//int main(void)
//{
//	double a[5] = { 10.41, 54.458, 9.8, 141, 304.14 };
//	double cha;
//	asd(a, 5);
//	putchar('\n');
//	for (int i = 0;i < 5;i++)
//	{
//		printf("%.3lf\n", a[i]);
//	}
//	return 0;
//}
//void asd(double* a, int n)
//{
//	int i, k;
//	double max;
//	for (;n > 0;n--)
//	{
//		for (i = 0, k = 0, max = a[0];i < n; i++)
//		{
//			if (max < a[i])
//			{
//				max = a[i];
//				k = i;
//			}
//		}
//		printf("%d    %.3lf   %d\n", n, max,k);
//		a[k] = a[n - 1];
//		a[n - 1] = max;
//	}
//}

//void q(double a[], double b[], int c);
//int main(void)
//{
//	double num1[3][4] = { {1,2,3,4},{5,6,7,8},{9,10,11,12} };
//	double num2[3][4];
//
//
//	for (int i = 0;i < 3;i++)
//	{
//		q(num2[i], num1[i], 4);
//
//		for (int a = 0; a < 4; a++)
//		{
//			printf("%.1f  ", num2[i][a]);
//		}
//	}
//	return 0;
//}
//void q(double a[], double b[], int c)
//{
//	int i;
//	for (i = 0;i < c;i++)
//	{
//		a[i] = b[i];
//	}
//}

//void q(double a[], double b[],int c);
//int main(void)
//{
//	double asd[7] = { 1,2,3,4,5,6,7 };
//	double s[3];
//	q(s, &asd[2], 3);
//	for (int i = 0; i < 3; i++)
//	{
//		printf("%.3lf  ", s[i]);
//	}
//	return 0;
//}
//void q(double a[], double b[], int c)
//{
//	int i;
//	for (i = 0;i < c;i++)
//	{
//		a[i] = b[i];
//	}
//}

// 11.

//char* ch(char* a, int size);
//int main(void)
//{
//	char a[40];
//	ch(a,40);
//	puts(a);
//	return 0;
//}
//char* ch(char* a, int size)
//{
//	int i;
//	for (i = 0;i < size - 1;i++)
//	{
//		a[i] = getchar();
//		if (a[i] == '\n')
//			break;
//	}
//	while ((getchar()) != '\n')
//		;
//	a[i + 1] = '\0';
//	return a;
//}

//char* ch(char* a, int size);
//int main(void)
//{
//	char a[40];
//	ch(a, 40);
//	puts(a);
//	return 0;
//}
//char* ch(char* a, int size)
//{
//	int i;
//	for (i = 0;i < size - 2;i++)
//	{
//		a[i] = getchar();
//		if (isspace(a[i]))
//			break;
//	}
//	while ((getchar()) != '\n')
//		;
//	a[i] = '\0';
//	return a;
//}

//char * ch(char* a,int n);
//int main(void)
//{
//	char a[30] = {'0'};
//	ch(a, 30);
//	puts(a);
//
//	char h = getchar();
//	putchar(h);
//
//	return 0;
//}
//char* ch(char* a,int n)
//{
//	for (int i = 0;i < n;i++)
//	{
//		a[i] = getchar();
//		if (i == 0 && isspace(a[i]))
//			i--;
//		if (i > 0 && isspace(a[i]))
//		{
//			a[i] = '\0';
//			return a;
//		}
//		if(i == (n-1) && !isspace(a[i]))
//		{
//			a[i] = '\0';
//			while ((getchar()) != '\n')
//				;
//			return a;
//		}
//	}
//}

//char* ch(char* a, char b);
//int main(void)
//{
//	char a[30] = {'0'};
//	char* h;
//	char b = 'm';
//	fgets(a,30,stdin);
//	h = ch(a, b);
//	puts(h);
//
//	return 0;
//}
//char* ch(char* a, char b)
//{
//	for (int i = 0; i <= (strlen(a));i++)
//	{
//		if (a[i] == b)
//			return &a[i];
//	}
//	return NULL;
//}

//char* ch(char* a, char* b, int c);
//int main(void)
//{
//	char a[20] = { 0 };
//	char b[10] = { 0 };
//	while ((fgets(b, 10, stdin)) != NULL)
//	{
//		if (b[9] != '\n')
//			while ((getchar()) != '\n')
//				;
//		ch(a, b, 15);
//		puts(a);
//		
//	}
//	return 0;
//}
//char* ch(char *a, char *b, int c)
//{
//	
//	
//	if (c <= (strlen(b)))
//	{
//		for (;c > 0;c--)
//		{
//			a[c-1] = b[c-1];
//		}
//	}
//	else
//	{
//		int i = strlen(b);
//		for (;i > 0;i--)
//		{
//			a[i - 1] = b[i - 1];
//		}
//
//	}
//	return a;
//}

//#define LIN 10
//char* ch(char* a, char* b);
//int main(void)
//{
//	char a[LIN*2], b[LIN];
//	char* c;
//	fgets(a, LIN*2, stdin);
//	fgets(b, LIN, stdin);
//	c = ch(a, b);
//	puts(c);
//	return 0;
//}
//char* ch(char* a, char* b)
//{
//	for (int i = 0, m = 0;i < (strlen(a) - 1);)
//	{
//		if (*(b + m) == *(a + i))
//		{
//			m++;
//			i++;
//			if (m == (strlen(b) - 1))
//				return (a + i - m);
//		}
//		else
//			i++;
//		
//	}
//	return NULL;
//}

//void ch(char* a);
//char* s_gets(char* st, int n);
//int main(void)
//{
//	char a[10];
//	s_gets(a, 10);
//	ch(a);
//	puts(a);
//	return 0;
//}
//void ch(char* a)
//{
//	int i = 0;
//	char j = '\0';
//	for (;i < (strlen(a)/2);i++)
//	{
//		j = *(a + i);
//		*(a + i) = *(a + strlen(a) - 1 - i);
//		*(a + strlen(a) -1 - i) = j;
//	}
//}
//char* s_gets(char* st, int n)
//{
//	char* ret_val;
//	char* find;
//
//	ret_val = fgets(st, n, stdin);
//	if (ret_val)
//	{
//		find = strchr(st, '\n');
//		if (find)
//		{
//			*find = '\0';
//		}
//		else
//		{
//			while (getchar() != '\n')
//				continue;
//		}
//	}
//	return ret_val;
//}

//char* s_gets(char* st, int n);
//char * ch(char* a);
//int main(void)
//{
//	char a[10];
//	s_gets(a, 10);
//	ch(a);
//	puts(a);
//	return 0;
//}
//char* s_gets(char* st, int n)
//{
//	char* ret_val;
//	char* find;
//
//	ret_val = fgets(st, n, stdin);
//	if (ret_val)
//	{
//		find = strchr(st, '\n');
//		if (find)
//		{
//			*find = '\0';
//		}
//		else
//		{
//			while (getchar() != '\n')
//				continue;
//		}
//	}
//	return ret_val;
//}
//
//char* ch(char* a)
//{
//	char* p;
//	int k = 0;
//	for (int i = 0; i < strlen(a);i++)
//	{
//		if ((p = strrchr(a, ' '))!=NULL)
//		{
//			k++;
//
//			while (p < (a + strlen(a) - 1))
//			{
//				*p = *(p + 1);
//				*(p + 1) = '\n';
//				p++;
//			}
//		}
//	}
//	p = strrchr(a, '\n');
//	*p = '\0';
//	if (k == strlen(a))
//		return NULL;
//	else
//		return a;
//	/*void cancel(char* str)
//	{
//		int j = 0, len = strlen(str);
//
//		for (int i = 0; i < len; ++i)
//		{
//			if (str[i] != ' ')
//			{
//				str[j++] = str[i];
//			}
//		}
//		str[j] = '\0';
//	}*/
//}

//#define LIN 20
//void caidan(void);
//int s_gets(char st[LIN]);
//int choose(void);
//void _puts(char a[][LIN], int i);
//void second(char a[][LIN], int i);
//void third(char a[][LIN], int i);
//void fourth(char a[][LIN], int i);
//int firstlong(char a[LIN]);
//
//int main(void)
//{
//	char a[10][LIN];
//	int i = 0, num = 0;
//	char eof = EOF;
//	caidan();
//	puts("选择");
//	num = choose();
//
//	puts("10个字符串");
//	while (i < 10)
//	{
//		if ((s_gets(a[i])) == EOF)
//			break;
//		if (i == 9)
//			break;
//		i++;
//	}
//	
//
//	switch (num)
//	{
//	case 1:
//		_puts(a, i);
//		break;
//	case 2:
//		second(a, i);
//		break;
//	case 3:
//		third(a, i);
//		break;
//	case 4:
//		fourth(a, i);
//		break;
//	default:
//		break;
//	}
//
//
//	return 0;
//}
//
//void caidan(void)
//{
//	puts("*****************************************************************");
//	puts("1. 打印源字符串列表          2. 以ASCII中的顺序打印字符串");
//	puts("3. 按长度递增顺序打印字符串   4. 按字符串中第一个单词的长度打印字符串");
//	puts("5. 退出");
//	puts("*****************************************************************");
//}
//int s_gets(char st[LIN])
//{
//	int j;
//	char c;
//	for (j = 0; j < LIN; j++)
//	{
//		if ((c = getchar()) != EOF)
//		{
//			
//			st[j] = c;
//			if (st[j] == '\n')
//			{
//				st[j] = '\0';
//				break;
//			}
//		}
//		else
//		{
//			st[j] = '\0';
//			return EOF;
//		}
//	}
//
//
//	if (j == LIN)
//	{
//		while (getchar() != '\n')
//			;
//		st[LIN-1] = '\0';
//	}
//	
//	return 1;
//}
//int choose(void)
//{
//	char i = 0;
//	int n = 0;
//	i = getchar();
//	while(getchar()!='\n')
//		;
//	if (i == '1')
//		n = 1;
//	else if (i == '2')
//		n = 2;
//	else if (i == '3')
//		n = 3;
//	else if (i == '4')
//		n = 4;
//	else
//		n = 5;
//	return n;
//}
//void _puts(char a[][LIN], int i)
//{
//	int n = 0;
//	for (n = 0; n <= i; n++)
//	{
//		puts(a[n]);
//	}
//}
//void second(char a[][LIN], int i)
//{
//	int l, j;
//	char b[LIN];
//	for (j = 1; j < i; j++)
//	{
//		for (l = 0; l < i - j;l++)
//		{
//			if (strcmp(a[l], a[l + 1]) > 0)
//			{
//				strcpy(b, a[l]);
//				strcpy(a[l], a[l + 1]);
//				strcpy(a[l + 1], b);
//			}
//
//		}
//	}
//	_puts(a, i);
//}
//void third(char a[][LIN], int i)
//{
//	char b[LIN];
//	for (int j = 1;j < i;j++)
//	{
//		for (int l = 0; l < i - j;l++)
//		{
//			if ((strlen(a[l])) > (strlen(a[l + 1])))
//			{
//				strcpy(b, a[l]);
//				strcpy(a[l], a[l + 1]);
//				strcpy(a[l + 1], b);
//			}
//
//		}
//	}
//	_puts(a, i);
//}
//void fourth(char a[][LIN], int i)
//{
//	int j, l;
//	char b[LIN];
//	for (j = 1;j < i;j++)
//	{
//		for (l = 0;l < i - j;l++)
//		{
//			if (firstlong(a[l]) > firstlong(a[l + 1]))
//			{
//				strcpy(b, a[l]);
//				strcpy(a[l], a[l + 1]);
//				strcpy(a[l + 1], b);
//			}
//		}
//
//	}
//	_puts(a, i);
//}
//int firstlong(char a[LIN])
//{
//	int i = 0, n = 0;
//	while (isspace(a[i])&&(i<LIN))
//		i++;
//	while (!isspace(a[i])&&(i<LIN))
//	{
//		n++;
//		i++;
//	}
//	return n;
//}

//int num(char[100]);
//int dnum(char[100]);
//int xnum(char[100]);
//int bnum(char[100]);
//int snum(char[100]);
//
//int main(void)
//{
//	char ch[100];
//	int i = 0;
//	int n, d, x, b, s;
//	while (i < 100 && ((ch[i] = getchar()) != EOF))
//		i++;
//	if (i < 100)
//		ch[i - 1] = '\0';
//	n = num(ch);
//	d = dnum(ch);
//	x = xnum(ch);
//	b = bnum(ch);
//	s = snum(ch);
//	printf("单词%d\n大写%d\n小写%d\n标点%d\n数字%d\n", n, d, x, b, s);
//	return 0;
//}
//int num(char a[100])
//{
//	int n = 0;
//	int b = 0;
//	for (int i = 0; i < strlen(a);i++)
//	{
//		if (!b)
//		{
//			if (!isspace(a[i]))
//			{
//				b = 1;
//				n++;
//			}
//		}
//		else if(isspace(a[i]))
//			b = 0;
//	}
//	return n;
//}
//int dnum(char a[100])
//{
//	int n = 0;
//	for (int i = 0; i < strlen(a); i++)
//	{
//		if (isupper(a[i]))
//			n++;
//	}
//	return n;
//}
//int xnum(char a[100])
//{
//	int n = 0;
//	for (int i = 0; i < strlen(a); i++)
//	{
//		if (islower(a[i]))
//			n++;
//	}
//	return n;
//}
//int bnum(char a[100])
//{
//	int n = 0;
//	for (int i = 0; i < strlen(a); i++)
//	{
//		if (ispunct(a[i]))
//			n++;
//	}
//	return n;
//}
//int snum(char a[100])
//{
//	int n = 0;
//	for (int i = 0; i < strlen(a); i++)
//	{
//		if (isdigit(a[i]))
//			n++;
//	}
//	return n;
//}

//int main(int argc,char *argv[])
//{
//	int n = 1;
//	int a = atoi(argv[0]);
//	int b = atoi(argv[1]);
//	if (argc != 2)
//	{
//		puts("wrong");
//	}
//	else
//	{
//		for (int i = 0; i < b; i++)
//		{
//			n *= a;
//		}
//		printf("%d\n", n);
//	}
//	return 0;
//}

//#include<math.h>
//int atoi(char a[20]);
//int main(void)
//{
//	int a = 0;
//	char ch[20];
//	fgets(ch, 20,stdin);
//	a = atoi(ch);
//	printf("%d\n", a);
//	return 0;
//}
//int atoi(char a[20])
//{
//	int len = strlen(a) - 1;
//	int num = 0;
//
//	for (int i = 0;i < len; i++)
//	{
//		if (!isdigit(a[i]))
//		{
//			return 0;
//		}
//	}
//	for (int i = 0;i < len;i++)
//	{
//		switch(a[i])
//		{
//		case '0':
//			num += 0 * pow(10, len - i - 1);
//			break;
//		case '1':
//			num += 1 * pow(10, len - i - 1);
//			break;
//		case '2':
//			num += 2 * pow(10, len - i - 1);
//			break;
//		case '3':
//			num += 3 * pow(10, len - i - 1);
//			break;
//		case '4':
//			num += 4 * pow(10, len - i - 1);
//			break;
//		case '5':
//			num += 5 * pow(10, len - i - 1);
//			break;
//		case '6':
//			num += 6 * pow(10, len - i - 1);
//			break;
//		case '7':
//			num += 7 * pow(10, len - i - 1);
//			break;
//		case '8':
//			num += 8 * pow(10, len - i - 1);
//			break;
//		case '9':
//			num += 9 * pow(10, len - i - 1);
//			break;
//		}
//	}
//	return num;
//}

//int main(int argc,char* argv[])
//{
//	char ch;
//	if (argc != 2)
//		printf("wrong\n");
//	else if (argv[1][0] == '-')
//	{
//		while ((ch = getchar()) != EOF)
//		{
//			switch (argv[1][1])
//			{
//			case 'p':
//				putchar(ch);
//				break;
//			case 'u':
//				putchar(toupper(ch));
//				break;
//			case 'l':
//				putchar(tolower(ch));
//				break;
//			}
//		}
//	}
//
//	return 0;
//}

//int sum(int a, int b);
//int main(void)
//{
//	int x, y;
//	int i = 0;
//	int c;
//	scanf("%d%d", &x, &y);
//	while (i < 5)
//	{
//		c = sum(x, y);
//		printf("%d\n", c);
//		i++;
//	}
//	
//	return 0;
//}
//int sum(int a, int b)
//{
//	static int v = 0;
//	v += (a + b);
//	return v;
//}


//int* twoSum(int* nums, int numsSize, int target, int* returnSize);
//int main(void)
//{
//	int arr[5] = { 1,2,3,4,5 };
//	int* an[2];
//	int returnSize[2];
//	*an = twoSum(arr, 5, 7, returnSize);
//	for (int i = 0;i < 2; i++)
//		printf("%d\n", an[i]);
//	return 0;
//}
//int* twoSum(int* nums, int numsSize, int target, int* returnSize) 
//{
//	int i, j;
//	
//	
//	for (i = 0; i < numsSize; i++)
//	{
//		for (j = i + 1; j < numsSize; j++)
//		{
//			if (nums[i] + nums[j] == target)
//			{
//				returnSize[0] = i;
//				returnSize[1] = j;
//				
//				return returnSize;
//			}
//		}
//	}
//	*returnSize = 0;
//	return NULL;
//}                                   //  wrong


