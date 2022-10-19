#defin 1_CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;

//#include<iostream>
//using namespace std;
//
//class Vehicle
//{
//private:
//	int maxspeed;
//	int weight;
//
//	//	成员变量
//public:
//	Vehicle(int m, int w)
//	{
//		maxspeed = m;
//		weight = w;
//
//		cout << "Vehicle 构造函数" << endl;
//	}
//	~Vehicle()
//	{
//		cout << "Vehicle 析构函数" << endl;
//	}
//	void run()
//	{
//		cout << "正在进行" << endl;
//	}
//	void stop()
//	{
//		cout << "停止" << endl;
//	}
//};
//class bicycle :virtual public Vehicle
//{
//private:
//	double height;
//public:
//	bicycle(int m, int w, double h) :Vehicle(m, w)
//	{
//		height = h;
//	}
//
//};
//class motocar:virtual public Vehicle
//{
//private:
//	int seatnum;
//public:
//	motocar(int m, int w, int s) :Vehicle(m, w)
//	{
//		seatnum = s;
//	}
//};
//
//class motorcycle :public bicycle, public motocar
//{
//public:
//	motorcycle(int m, int w, double h, int s) :bicycle(m, w, h), motocar(m, w, s), Vehicle(m, w)
//	{ }
//};
//#include<iostream>
//using namespace std;
//class Test
//{
//	int i = 0;
//	int j = 0;
//public:	
//	void init(int x, int y)
//	{
//		i = x;
//		j = y;
//	}
//	void print()
//	{
//		int a = i - j;
//		int c = a + 30;
//		cout <<"测试结果:"<< i << "-" << j << "=" << c << endl;
//	}
//};
//class Test {
//	int i,j;
//public:
//	void init(int x, int y) {
//		i = x;
//		j = y;
//	}
//	void print() {
//		int c = 30 + (i - j);
//		cout << "测试结果:" << i << "-" << j << "=" << c << endl;
//	}
//};
//int main()
//{
//	Test a;
//	a.init(2019, 100);
//	a.print();
//	return 0;
//}
//其执行结果为:
//测试结果: 2019 - 100 = 1949



#include<iostream>
using namespace std;

template <typename T>
void bubblesort(T arr[], int n)
{
	bool done = 0; 
	for (int i = 1; i < n && !done; i++)
	{
		done = 1;
		for (int j = 1; j <= n - 1; j++)
			if (arr[j - 1] > arr[j])
			{
				T temp = arr[j - 1];
				arr[j - 1] = arr[j];
				arr[j] = temp;
				done = 0;
			}
	}
}
int main()
{
	int const len = 20;

	int i, n, a[len];
	cout << "被排序元素的个数 n= ";
	cin >> n;
	cout << "输入" << n << "个元素:";
	for (i = 0; i < n; i++)
		cin >> a[i];
	bubblesort(a, n);
	for (i = 0; i < n; i++)
		cout << a[i] << " ";
	cout << endl;
	return 0;
}

//#include<iostream>
//using namespace std;
//#include<string>
//class School
//{
//public:
//	School(int n = 0,  char* s ={0})
//	{
//		Number = n;
//		strcpy(name, s);
//	}
//protected:
//	int Number = 0;
//	char name[10] = {0};
//};
//
//class Student:public School
//{
//public:
//	Student(int n = 0, char* s = {0}, char* s1 = {0}, double t = 0.0) //:School(n, s)
//	{
//		strcpy(Class_num, s1);
//		double Total = t;
//	}
//	void Disply()
//	{
//		cout << Number << "" << name << "" << Class_num << " " << Total<< endl;
//	}
//private:
//	char Class_num[10];
//	double Toatl = 0.0;
//};
//
//int main()
//{
//	Student s1((2020150601, "张小蒙", "四班", 678));
//	s1.Disply();
//
//	return 0;
//}

//#include<iostream>
//using namespace std;
//
//class Student
//{
//public:
//	Student(char n, int S)
//	{
//		char name = n;
//		int score = S;
//	}
//	void compare(char x, int i, char y, int j)
//	{
//		if (i > j)
//		{
//			cout << "学生：" << x << "为最高分" << "分数为：" << i;
//			cout << "学生：" << y << "为最低分" << "分数为：" << j;
//		}
//		else if (i == j)	
//		{
//			cout << "学生：" << x << "和 " << y << "成绩相同";
//		}
//		else
//		{
//			cout << "学生：" << y << "为最高分" << "分数为：" << j;
//			cout << "学生：" << x << "为最低分" << "分数为：" << i;
//
//		}
//
//	}
//};
//
//int main()
//{
//	return 0;
//}
//template <typename T>
//void bubblesort(T arr[], int n)
//{
//	bool done = 0; 
//	for (int i = 1; i < n && !done; i++)
//	{
//		done = 1;
//		for (int j = 1; j <= n - 1; j++)
//			if (arr[j - 1] > arr[j])
//			{
//				T temp = arr[j - 1];
//				arr[j - 1] = arr[j];
//				arr[j] = temp;
//				done = 0;
//			}
//	}
//}
//int main()
//{
//	int const len = 20;
//
//	int i, n, a[len];
//	cout << "被排序元素的个数 n= ";
//	cin >> n;
//	cout << "输入" << n << "个元素:";
//	for (i = 0; i < n; i++)
//		cin >> a[i];
//	bubblesort(a, n);
//	for (i = 0; i < n; i++)
//		cout << a[i] << " ";
//	cout << endl;
//	return 0;
//}


//#include<iostream>
//#include<fstream>
//using namespace std;
//int main()
//{
//	char id[11], name[21];
//	int score;
//
//	ofstream outFile;
//	outFile.open("score.txt", ios::out);
//	if (!outFile)
//	{
//		cout << "创建文件失败" << endl;
//		return 0;
//	}
//	while (cin >> id >> name >> score)
//		outFile << id << "" << name <<"" << score << endl;
//	outFile.close();
//	return 0;
//}




//int main()
//{
//	char student_number[10];
//	char student_name[20];
//	int student_score = 0;
//	
//	ofstream file;
//	file.open("score.txt", ios::app);
//	if (file.is_open()) {
//
//		file <<student_number<<student_name<<student_score<< endl;
//	}
//	file.close();
//
//	return 0;
//}


