#define _CRT_SECURE_NO_WARNINGS 1;    //  scanf����
#include<stdio.h>;
#include<string.h>                     //strlen  strcmp ����
#include<windows.h>                    // Sleep ����
#include<time.h>


//int main()
//{
//	printf("hello world\n");     //  \nΪ����
//	int ���� = 1;
//	char dj = 'a';
//	short a1 = 10;
//	long b = 20;
//	long long ����� = 30;
//	double asd = 3.14;
//	float uio = 2.456f;
//	printf("%d\n", sizeof(double));    //sizeofΪ��Ŀ���������������ͻ������С
//	printf("%d\n", sizeof(int));       //"%\n"��ʾ�������Ϊ����
//	printf("%d\n", sizeof(short));     //"%lf"��ʾ�������Ϊ������double��"%f"��ʾ�������Ϊ������float
//	printf("%d\n", sizeof(long));
//	printf("%d\n", sizeof(long long));
//	printf("%d\n", sizeof(char));
//	printf("%d\n", sizeof(float));
//	        //bitΪ������е�λ��8 bit=1 byte���ֽڣ���1024 byte = 1 kb ��1024 kb = 1 mb ��1024 mb = 1 gb��1024 gb = 1tb��1024 tb = 1 pb ��
//	return 0;
//  }


//int main()
//{
//	int ������ = 1;           //������������ 
//	������ = ������ + 1;  
//	double UI ;
//	UI = 2.2548;             //��������������
//	UI = UI - 1;
//	printf("%d\n", ������);
//	printf("%lf\n", UI);
//
//
//	return 0;
//}


//int a = 1;             //ȫ�ֱ���
//int main()
//{
//	int a = 10;        //�ֲ�����
//	printf("%d\n", a); //�ֲ�������ȫ�ֱ���ͬ��ʱ�����Ϊ�ֲ�������������ͬ��
//	return 0;
//}


//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	scanf("%d %d", &a, & b);   //Ϊa��b��ֵ��ֵΪ���������ֵ     ��������ʹ��scanf_s�������ú���Ϊvs �������ṩ����c�����ṩ��
//                               //������ͷ�ļ� #define _CRT_SECURE_NO_WARNINGS 1����Ϊ��һ��
//	c = a + b;
//	printf("c=%d\n", c);
//	return 0;
//}


//extern int bbb;   //�� Դ1.cpp �е��ã��ļ��ⲿ���á�bbb�������ж����bbb���ᱨ��
//int main()
//{
//	printf("bbb=%d\n", bbb);
//	return 0;
//}


//#define max 10000;      //"max"Ϊ��ʶ������
//int main()
//{
//	133;
//	"��";
//	"asd";   //���泣��
//	
//	const int a = 123;   //"a"Ϊ�����������������ɸ��ģ���intΪ�������ͣ��ɻ�Ϊshort��long�ȡ�  *������Ϊ����
//	int b[8] = { 0 };        //???????��8��Ϊa����֤��aΪ������
//
//    #define min 1;         //�ɷŴ�������
//	int c = min;
//	int d = max;
//	printf("a=%d\n", c);
//	printf("b=%d\n", d);
//	return 0;
//}


//enum sex    //��sex��ö�����ͱ�����ֻ��Ϊ���¼���ֵ��
//{
//   male = 7,  //��=7��Ϊ����  ��ֵ���������������ֱ�Ϊ7,8,9,10��
//   famale,
//   secret,
//   a123��   //Ϊö�ٳ�������ֵĬ�ϴ�0��ʼ������Щ�ַ����������Ϊ 0,1,2,3�����ɸ�����Щ����
//};
//int main()
//{
//	enum sex a = male;    //����a����
//	printf("%d\n", a);
//	printf("%d\n", secret);
//	return 0;
//}



//int main()
//{
//	char arr[] = "sex"; //���ȱ���Ϊ3���ַ�'s''e''x'��ʵ��Ϊ4���ַ���ĩβ����һ�����ص�'\0'��\0Ϊ�ַ���������־
//	                    arrΪ���ƣ�[]�ڲ�δ����Ԫ�ظ���ʱ������ݺ��������"sex"����ʼ��[]
//	                    ��F10��ɴӲ���-���ڴ򿪼���
//	char arr1[] = "jk   l";
//	char arr2[] = { 'j','k','l' }; //������'\0'�ַ���ֻ��3���ַ�����ӡ����������ʱ����Ϊ��\0������־������ʣ���ڴ���ӡ���룬����'\0'Ԫ���򲻻�����
//	char arr3[] = { 'j','k','l','\0' };
//	printf("%s\n", arr1);            //��ӡarr��arr1��arr2ʱ��%s�����ַ�����%cΪ�ַ���
//	printf("%s\n", arr2);
//	printf("%s\n", arr3);
//	���ַ�������
//	int len = strlen("jkl");    //������ͷ�ļ� #include<string.h>��strlen��string length
//	printf("%d\n", len);        //���ַ�������ʱ��������������'\0',�����ڣ������ַ��������Ԫ�ظ���ʱ�����\0
//	printf("%d\n", strlen(arr1));
//	printf("%d\n",strlen(arr2));  //��Ϊarr2�޽�����־�����Դ�ӡֵΪ�����
//	printf("%d\n", strlen(arr3));
//    printf("%d\n",strlen("c:\test\168\test"));  //  \16Ϊһ����8����8����
//
//	return 0;
//}


//int main()
//{
//	printf("c:\test\test.c\n");       //   ����\t���޷���ӡ��\tΪת���ַ�����ʹ�������ܣ�������Ϊ�ַ�
//	printf("(asdasd??)\n");           //   ??)Ϊ3��ĸ�ʼ�]         *��������������
//	printf("%c\n",'\130');            //  ��\ddd��(ddd��ʾ1~3��8��������)��\130(�˽���130����Ϊʮ���ƣ�1*8^2+3*8^1+0*8^0=88)��88��ASCII��ֵΪX
//	printf("%c\n", '\'');             //   ��ӡ'
//	printf("%s\n", "\"");             //   ��ӡ"
//	printf("%s\n", "\\\\");           //   ��ӡ����\�������ĸ�
//	printf("%s\n", "'");              //   ��ʱ'������ǰ��ġ��γ���������
//	printf("%c\n", '"');
//	printf("%c\n", '\x31');           //   \xdd(dd��ʾ2��ʮ��������)��31=49����1
//	return 0;
//}


//int main()
//{
//	int input = 0;
//	printf("����ʲô��\n");
//	scanf("%d", &input);
//	if (input == 0)                          //  ==Ϊ�Ƚ��Ƿ�Ϊ���ڣ�=Ϊ��ֵ
//	{
//		printf("��\n");
//	}
//	else
//	{
//		printf("��\n");
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
//		printf("��ʥ���ڿ���%d\n",a);
//		a++;
//	}
//	if (a > 8000)
//	{
//		printf("���ֽ���");
//	}
//
//
//	return 0;
//}


//int d(int e, int q);
//int main()                    //ʹ��
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
//}                             //��������


//int main()
//{
//	int a[11] = { 1,2,3,4,5,6,7,8,9,10,11 };           //�������±�����Ϊ0,1,2,3,4,5,6,7,8,9,10������ӡa[0]���Ϊ1
//	int b[5] = { 1,2,3, };                             //����ȫ��ʼ��ʱ������2��Ԫ��Ĭ��Ϊ\0,��0
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
//	float d = 9 / 2;             //��ȻΪfloat������9/2��/���Ҿ�Ϊ���Σ�����9/2Ϊ���μ�4�������Ϊ4
//	printf("%f\n", d);
//	float e = 9.0 / 2;
//	printf("%f\n", e);
//
//	int a = 2;
//	int b = a << 1;                              //aռ4���ֽ�32������λ������Ϊa=2������aʵ��Ϊ000000000000000000000010��
//	printf("%d\n", b);                           //  <<Ϊ���Ʋ�����(2������λ)��ԭ��|00000000000000000000010|,���ƺ�1����������Ϊ   0|000000000000000000000100|����4��>>ͬ��
//                                               //  ��λ������    &����λ��  |:��λ��  ^:��λ���
//	int a = 4;
//	a = a + 4;
//	a += 4;
//
//	a = a % 3;
//	a %= 3;            //ͬ������
//	return 0;
//}


//int main()
//{
//	int a = 0;           //0Ϊ�٣���0Ϊ��
//	a = !a;              //   !���߼������� 
//	scanf("%d", &a);
//	printf("%d\n", a);
//	                  //!�÷����� 
//	if (a)            //������aΪ��
//	{
//		printf("111111%d\n", a);
//	}
//	if (!a)           //����aΪ��
//	{
//		printf("000000%d\n", a);
//	}
//	return 0;
//}


//  ~  ��Ŀ������֮һ  ��λȡ������������λȡ���Ѷ�����������1��0��0��1
//   1��0000 0000 0000 0000 0000 0000 0000 0001        ~1��1111 1111 1111 1111 1111 1111 1111 1110
//   ������ԭ�뷴�벹����ͬ��������ʱ��������ǲ���
//1��������
//
//һ�����ڼ�����еĶ����Ʊ�ʾ��ʽ, ����������Ļ��������������Ǵ����ŵģ��ڼ������һ���������λ��ŷ���, ����Ϊ0, ����Ϊ1.
//���磬ʮ�����е��� + 3 ��������ֳ�Ϊ8λ��ת���ɶ����ƾ���00000011������� - 3 ������ 10000011 ��
//��ô������� 00000011 �� 10000011 ���ǻ�������
//2����ֵ
//
//��Ϊ��һλ�Ƿ���λ�����Ի���������ʽֵ�Ͳ�������������ֵ������������з����� 10000011�������λ1��������������ֵ�� - 3 ��������ʽֵ131��10000011ת����ʮ���Ƶ���131�������ԣ�Ϊ�����������������λ�Ļ�������Ӧ��������ֵ��Ϊ����������ֵ��
//����0000 0001����ֵ = +000 0001 = +1��1000 0001����ֵ = �C000 0001 = �C1
//��.ԭ��, ����, ����Ļ�������ͼ��㷽��.
//��̽��Ϊ�λ���Ҫʹ�ò���֮ǰ, ���������˽�ԭ��, ����Ͳ���ĸ���.����һ����, �����Ҫʹ��һ���ı��뷽ʽ���д洢.ԭ��, ����, �����ǻ����洢һ���������ֵı��뷽ʽ.
//1. ԭ��
//
//ԭ����Ƿ���λ������ֵ�ľ���ֵ, ���õ�һλ��ʾ����, ����λ��ʾֵ.���������8λ������:
//[+1] ԭ = 0000 0001
//[-1]ԭ = 1000 0001
//��һλ�Ƿ���λ.��Ϊ��һλ�Ƿ���λ, ����8λ����������ȡֵ��Χ����:
//[1111 1111, 0111 1111]
//��
//[-127, 127]
//2. ����
//����ı�ʾ������ :
//�����ķ������䱾��
//�����ķ���������ԭ��Ļ�����, ����λ���䣬�������λȡ��.
//[+1] = [00000001]ԭ = [00000001]��
//[-1] = [10000001]ԭ = [11111110]��
//�ɼ����һ�������ʾ���Ǹ���, �����޷�ֱ�۵Ŀ�����������ֵ.ͨ��Ҫ����ת����ԭ���ټ���.
//3. ����
//����ı�ʾ������ :
//�����Ĳ�������䱾��
//�����Ĳ���������ԭ��Ļ�����, ����λ����, �����λȡ��, ��� + 1. (���ڷ���Ļ����� + 1)
//[+1] = [00000001]ԭ = [00000001]�� = [00000001]��
//[-1] = [10000001]ԭ = [11111110]�� = [11111111]��


//int main()
//{
//	int a = 1;
//	int e = 1;
//	int g = 1;
//	int b = ~a;
//	printf("%d\n", b);
//	int c = a++;              //��c=a����a+1
//	printf("%d\n", c);
//	printf("%d\n", a);
//	int d = ++e;              //��e+1����d=e
//	printf("%d\n", e);
//	printf("%d\n", d);
//
//	int f = (++g) + (++g) + (++g);    //�������о��������ͬ�����������ͬ
//	printf("%d\n", f);
//	printf("%d\n", g);
//	return 0;
//}


//int main()
//{
//	int a = 3.14;      //����־�ʾ���ܶ�ʧ����
//	int b = (int)3.14; //ǿ������ת��  ������־�ʾ
//	                   //���ڵ��ڣ�>=  �����ڣ�!=   ���ڣ�=
//
//	int c = 8;
//	int d = 9;
//	int e = 0;
//	int f = c && d;            //&&���߼��루����һ��Ϊ�٣� ||:�߼��򣨲���һ��Ϊ�棩
//	int g = c && e;
//	printf("%d\n", f);         //c��d��Ϊ��Ϊ���������Ϊ1
//	printf("%d\n", g);         //һ��һ������Ϊ��0
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
//	int asd = a > b ? a : b;      //����������  exp1��exp2��exp3
//	                              //exp1������exp2���㣬���Ϊexp2
//	                              //exp1��������exp3���㣬���Ϊexp3
//	printf("%d\n", asd);
//
//	return 0;
//}


//int main()
//{
//	int a = 1;
//	int s = 2;
//	int d = 3;
//	int  f = (a = s + 3, s = a * 8, d = s - 13);   //���ű��ʽ�����������μ��㣬���Ϊ���һλ
//	printf("fΪ%d\n", f);
//	printf("sΪ%d\n", s);
//
//
//	     int e = 0;//auto  �Զ������Զ�����-�Զ����������ͷʡ�Ե��ˣ�Ҳ�������÷�
//
//	return 0;
//}


//typedef unsigned int q123;    //typedefΪ���Ͷ��壬�˴��� unsigned int  ������Ϊ  q123��ʡ��
//int main()
//{
//	register int a = 123;   //����洢�ڼĴ����У��Ƿ����ȡ���ڱ�����������Ƶ��ʹ�õ����ݻᱻ����Ĵ����У����Ч��
//	                        //define include�����ǹؼ��֣���Ԥ����ָ��
//
//	 unsigned int s = 456;
//	 q123 e = -789;
//	 printf("s=%d\ne=%d\n", s, e);
//	return 0;
//}


//void test()                           //������������������void��test
//{
//	static int a = 10;                //static�������Σ�*ȫ�ֱ��� *�ֲ����� *����
//	a++;                              //static���ξֲ��������ı��˱���a���������ڱ���Ϊ�洢���͸ı䣬��ջ����Ϊ��̬����
//	printf("%d\n", a);                //��static�����ȫ��11����������������
//	                                  //ջ�����ֲ���������������  ��������̬�ڴ����  ��̬����ȫ�ֱ�����statiic���εı���
//	                                  //static���ε�ȫ�ֱ���ֻ�����Լ���Դ�ļ���ʹ�ã�����Դ�ļ�����ʹ�ã�externҲ����      *�����εĺ���ͬ��
//	                                  //ȫ�ֱ�������������Դ�ļ��б�������extern����Ϊ������ⲿ�������ԣ���static���κ��Ϊ���������ԣ�����Դ�ļ��������ӵ������̬��ȫ�ֱ���  *����ͬ��
//}
//int qwe(int, int);                    //����qwe��������Դ1�д���������������������������externҲ����
//int main()
//{
//	int b = 0;
//	while (b <= 250)                  //������������a
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
//#define qwe(x,y,z) ((x)+(y)+(z))              //x��y��z����Ϊһ������
//int main()
//{
//	printf("%d\n", add(4, 5, 6));
//	printf("%d\n", 5 * add(4, 5, 6));         //��Ϊû��������ʵ������Ϊ��5* 4+5+6
//	printf("%d\n", 5 * qwe(4, 5, 6));         //�˴�����Ϊ��5*����4��+��5��+��6����
//	return 0;
//}


//int main()
//{
//	int a = 12;         // ����-�ڴ�-&a��(����) 0x00000077B80FF674   0c 00 00 00 d3 8e 95 c1 fd 7f 00
//	                    // 0c 00 00 00 ��4���ֽڣ�a��ռ���ڴ棩
//	                    // 0x00000077B80FF674 ��a�ĵ�һ���ֽڵĵ�ַ
//	char b = 'aaaa';    //  ???:charΪʲôֻ��4���ַ�
//	printf("%p\n%p\n", &a, &b);   // %pר��������ӡ��ַ
//	int* c = &a;
//	char* d = &b;                 // char Ϊָ�����b�����ͣ�dΪָ�������*˵��dΪָ�����
//	printf("%p\n%p\n", c, d);      // c��dֵΪa��b�ĵ�ַ
//	*c = 90;
//	*d = 1;                        //* �������ò�����*d����ͨ��d��ߵĵ�ַ�ҵ�b
//	printf("%d\n%d\n", a, b);        // a,b��ֵ���ı�
//	printf("%d\n%d\n", sizeof(char*), sizeof(int*));    // 32λ�����λ4�ֽڣ�64λ�����Ϊ8�ֽڣ�ָ���Сȡ���ڵ�ַ�Ĵ�����Ҫ���ռ䣬�������޹�
//	return 0;
//}


//struct student 
//{
//	char name[20];
//	float score;
//	int age;
//};                              //  struct �ṹ�崴��
//struct book
//{
//	char name[20];
//	float price;
//	char author[20];
//};
//int main()
//{
//	struct student a = { "����",90.5,16 };       //�ṹ�� a �Ĵ������ʼ��
//	struct book b = { "����",45,"��" };
//	printf("1:  %s\n %lf\n %d\n", a.name, a.score, a.age); // ��ʽ�� �ṹ�����.��Ա����
//	struct student* c = &a;                             //����Ϊ struct student ������struct
//	printf("2:  %s\n %lf\n %d\n", (*c).name, (*c).score, (*c).age); //ָ��Ӧ��
//	printf("3:  %s\n %lf\n %d\n", c->name, c->score, c->age);     //��ʽ3��ʽ�� �ṹ��ָ��->��Ա������
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
//		printf("δ����\n");
//	}
//	else if (age>=18 && age <= 26)   //��������ʽ
//	{
//		printf("����\n");
//	}                             //һ��ʱ��{}��ʡ��
//
//	else if (age <= 60)           //�˴���age<40��һ����,�����������39����˳���ڴ˴����ϣ������ ���� ����������Ҫ��׳�꣬����һ��else if ���Բ��ã���Ϊ��Ĭ����if�������������
//		printf("����\n");
//	else if (age <= 40)
//		printf("׳��\n");
//	else if (age <= 100)
//		printf("����\n");
//	else                       //�ɲ���Ҫelse���������
//		printf("�ϲ���\n");
//
//
//	int a = 1;
//	int b = 2;
//	if (a == 0)
//		if (b == 2)                    //����������ǰ����Ϊ��� b = 2 ��������ִ�д����ױ����֣��� 2 = b ʱ����ᱻ��ǳ����޷�ִ��
//			printf("hh\n");
//	else                      
//		printf("mm\n");               //�������ӡ����Ϊ���else�������ifƥ�䣬��else���һ��if��������
//	if (a == 0)
//	{
//		if (b == 2)
//		{
//			printf("hh\n");
//		}
//	}                                 //��������ź��򲻻�
//	else
//	{
//		printf("mm\n");
//	}
//	return 0;                           //return��������������壬�����ѡ���������return����ô����Ĵ��벻�ᱻִ��
//}


//int main()
//{
//	int a ;
//	scanf("%d", &a);
//	if (a % 2 == 1 && a <= 100)
//	{
//		printf("����\n");
//		printf("%d\n", a);
//	}
//	else if (a % 2 == 1 && a > 100)
//	{
//		printf("����\n");
//	}
//	else if (a % 2 == 0 && a <= 100)
//	{
//		printf("ż��\n");
//		printf("%d\n", a);
//	}
//	else
//	{
//		printf("ż��\n");
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
//	switch (a)                      // �����ڱ���Ϊ  ���α��ʽ
//	{
//	case 1:                         // case�����  ���γ������ʽ
//		printf("����һ\n");
//		break;                       //  switch ���,case������break ������֧
//	case 2:
//		printf("���ڶ�\n");
//		break;
//	case 3:
//		printf("������\n");
//		break;
//	case 4:
//		printf("������\n");
//		break;
//	case 5:
//		printf("������\n");
//		break;
//	case 6:
//		printf("������\n");
//		break;
//	case 7:
//		printf("������\n");
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
//			printf("������\n");
//			break;
//		case 6:
//		case 7:
//			printf("��Ϣ��\n");
//			break;
//		default:                             //  ��������������ִ�д˷�֧����˳��֮��
//			printf("�������\n");
//			break;
//
//
//	}                                      //  ����
//
//	return 0;
//}


//int main()
//{
//	int i = 1;
//	while (i <= 10)
//	{
//		if (i == 5)
//			break;                 //while��break���������ս�ѭ��
//		printf("%d\n", i);
//		i++;
//	}
//	int a = 1;
//	while (a <= 10)
//	{
//		printf("%d\n", a);
//		if (a == 5)
//			continue;              //while��continue����������ѭ�������´��ж��Ƿ������һ��ѭ�����˴�������ѭ��
//		printf("%d\n", a);
//		a++;
//	}
//	return 0;
//}


//int main()
//{
//	int b = 0;
//	while ((b = getchar()) != EOF)        // ctrl + z ����getchar��ȡ
//		                                  //getchar����һ���ļ�����ͷ���׼���루���̣����ȡһ���ַ�   ������˵    �س�Ҳ���ַ�        ������һ����
//		                                  //         ���ص�����������int��ASCII��ֵ������ȡ��������ļ���������EOF(����Ϊ-1)
//	{
//		putchar(b);                       // putchar�����һ���ַ�                                                           ��������һ����
//	}                                     // eg������1�س������ڻ��������� 123\n��getchar����123���ٴ�ѭ��ʱ��Ϊ����������һ�� \n�����Եڶ�������\n��������û���˱�ȴ�����
//	                                      // scanfҲ�Ǵӻ�������ȡ���ݣ�������ȡ\n���������scanf����getchar����getchar��ֱ�Ӷ�ȡscanfʣ�µ�\n
//
//	char password[20] = { 0 };
//	printf("���������룺");
//	scanf("%s", password);                // �������־��ǵ�ַ���Բ���  &
//	while (int q = getchar() != '\n')     //���������
//	{
//		;
//	}
//	printf("��ȷ������(Y/N):");                            
//	int a = getchar();
//	if (a == 'Y')
//		printf("ȷ�ϳɹ�\n");
//	else
//		printf("ȷ��ʧ��\n");
//	return 0;
//}


//int main()
//{
//	int a = 0;
//	while ((a = getchar()) != EOF)
//	{
//		if (a < '0' || a>'9')       //   ||������
//			continue;
//			putchar(a);
//	}
//	return 0;
//}


//int main()
//{
//	int a = 0;
//	for (a = 1;10 >= a;a++)                //   for(��ʼ��;�ж�;����1������2....����n)����������Ҳ�ɷŵ�{ }��,���ⲿ�־���ʡ�Ե�( ; ; )�����٣��ж����˾�����ѭ����
//	{
//		if (5 == a)
//			continue;                      // forѭ����continue֮�󲻻���ѭ����û����a++����ͬ��while
//		printf("%d   ", a);
//	}
//	return 0;
//
//	/*int main()                                      //��ѭ��
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
//	/*int main()                                        //��ӡ9��
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
//	/*int main()                                      //��ӡ3�Σ���һ����ѭ��ѭ��3�κ�ڶ��δ�ѭ����������ѭ���ˣ��������ˣ������������ٴγ�ʼ������ÿ�δ�ѭ������3��Сѭ��
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
//	/*int main()                                   //һ��ѭ��  0  �Σ���Ϊ�жϲ�����=��b��ֵ0�����٣�����==�ж��Ƿ���ڣ����Բ�ִ��ѭ��
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
//	do                                 //  �ص㣺����ѭ��һ�Σ���ִ��һ�����ж��Ƿ�ѭ����
//	{
//		printf("jjjjjj     ");
//		a++;
//	} while (a <= 10);
//	return 0;
//}


//int main()
//{
//	/*int a = 0;                                                                     // �׳�:1*2*3*....*n=
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
//	/*int a = 0;                                                                      //˫ѭ���� 1��+2��+3��+...+n��=
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
//	//int a = 0;                                                                    //�ɽ�
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
//	int a[15] = { 2,3,4,5,6,7,8,9,10,11,12,13,14,15,16 };                           //��һ�����������ĳ���±�
//	int an = 0;
//	printf("������2-16��һ����\n");
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
//			printf("�����±�Ϊ%d\n", mi);
//			break;
//		}
//	}
//	if (le > ri)
//		printf("�������ڴ�������\n");
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
//		Sleep(100);                 //˯��500����=0.5��
//		system("cls");              //�����Ļ
//	}
//	printf("%s\n", b);
//	return 0;


//	int a = 0;
//	int c = 0;
//	char b[20] = { 0 };                                 //��Ϊstrcmp��Ҫ��char����
//	for (a = 0;a < 3;a++)
//	{
//		printf("����������\n");
//		scanf("%s", b);                                 //  ��ΪbΪchar������%s������%d��������"123456"�Ƚ�
//		system("cls"); 
//		if (strcmp(b, "123456") == 0)                   // �ַ����Ƚϲ�����  if(b=="123456"),Ӧ����strcmp,  strcmp����ֵΪ0��������0�ж�
//		{                                               //strcmp���ڱȽ������ַ��������ݱȽϽ������������
//			printf("������ȷ\n");                       //������ʽΪstrcmp(str1,str2)����str1=str2���򷵻��㣻��str1<str2���򷵻ظ�������str1>str2���򷵻�����
//			break;                                      //�Ƚϵ���ASCII��ֵ��  abcc��abcd�Ƚϣ���Ϊd��ֵ��c������abcd>abcc
//		} 
//		else
//		{
//			printf("�������\n");
//			printf("ʣ��%d�λ���\n", 2 - a);
//		}
//		c = a;
//	}
//	if (c == 2)
//	{
//		printf("���Դ������࣬�˳���¼\n");
//	}
//	return 0;
//}


//void caidan()
//{
//	printf("                      1.��ʼ                        \n");
//	printf("                      2.�˳�                        \n");
//}
//void game()
//{
//
//	
//	int ret = rand()%100+1;           // rand() ����������ɺ��� 0~32767    %100+1�������������1-100
//	int guese = 0;
//	while (1)
//	{
//		printf("�������\n");
//		scanf("%d",&guese);
//		if (guese < ret)
//		{
//			printf("��С��\n");
//		}
//		else if (guese > ret)
//		{
//			printf("�´���\n");
//		}
//		else
//		{
//			printf("��ϲ�㣬�¶���\n");
//			break;
//		}
//	}
//
//}
//int main()
//{
//	int input;
//	srand((unsigned int)time(NULL));  // srand()�����������㣨��unsigned int���ͣ�  time����ʱ���������ʱ�䷵��һ��������ֵ����������Ϊtime_t���ͣ��������ˣ���ǿ������ת��
//	                                  //????????:  time(NULL)
//	                                  //��������ʹÿһ�ο�ʼ������Ϸ��㲻ͬ��������ϵ���������ͬ
//	do
//	{
//		caidan();
//		printf("��ѡ��");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			game();
//			break;
//		case 2:
//			break;
//		default :
//			printf("�����������������");
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
//		}                                 // ��break������ִ���������
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
//	printf("������3������\n");
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
//	printf("ż��������%d\nż��ƽ��ֵ��%.2f\n", ou, (float)o / ou);
//	printf("����������%d\n����ƽ��ֵ��%.2f\n", ji, (float)j / ji);
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
//	printf("�滻��Ÿ�����%d\n�滻��̾�Ÿ�����%d\n", i, j);
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
//        if (ch >= 32) //�ո��ʮ����ASCII��;
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
//			p = a + b;                          // ����ǰ��������
//			printf("%ld   ", p);
//			                                    // Ϊ�´������׼��
//			a = b;                              // aȡ������b��ֵ 
//			b = p;                              // bȡ������p��ֵ
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
//	puts("ѡ��");
//	num = choose();
//
//	puts("10���ַ���");
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
//	puts("1. ��ӡԴ�ַ����б�          2. ��ASCII�е�˳���ӡ�ַ���");
//	puts("3. �����ȵ���˳���ӡ�ַ���   4. ���ַ����е�һ�����ʵĳ��ȴ�ӡ�ַ���");
//	puts("5. �˳�");
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
//	printf("����%d\n��д%d\nСд%d\n���%d\n����%d\n", n, d, x, b, s);
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

int manin(void)
{
	
	const int a = 10;

	return 0;
}