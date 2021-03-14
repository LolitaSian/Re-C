就是两年不写C++快忘光了。我工作都找好了，又莫名其妙有上岸了。所以重拾写代码这个大业。从最基础的迅速过一遍，然后再写几个项目。虽然我会，但是说不定会有什么新收获呢。

![](https://gitee.com/LolitaAnn/rec/raw/master/img/pic.jpg)



# 项目

打算用C++写三个小项目，难度由浅入深。

## 通讯录管理系统

实现一个通讯录管理系统系统，需要实现的功能如下
添加联系人：向通讯录中添加新人
显示联系人：显示通讯录中所有联系人信息
删除联系人：按照姓名迸行删除指定联系人
查找联系人：按照姓名查看指定联系人信息
修改联系人：按照姓名重新修改指定联系人
清空联系人：清空通讯录中所有信息
退出通讯录：退出当前使用的通讯录

第一个小demo就用到了最简单的函数，结构体之类的，之后的会继续增加东西。



3.12 今天出国家线了，大概是快要复试了，没空写什么项目了，复试完了再搞。

---

# Note

## 1 基础

**变量**：类型 名称 = 值

`int num = 5;`

**常量**：记录程序中不可以更改的部分
`#define num 7`
`const int num 7`

**sizeof**(类型或变量)

**数据类型**

- 整型：表示的是整数数据
  - short:2字节
  - int:4字节
  - long:Windows4字节 linux（32位）4字节 linux（64位）8字节
  - long long:8字节
- 浮点型
  - float:4B
  - 会默认3.14是double类型，用float接收时会产生一个类型转换，所以声明float变量时后边加f
    `float f2 = 3.14f; `
  - double:8B
- 字符型
  - char:1B
  - 用单引号括起来，只能是一个字符
  - 字符对应的ASCII码，cout<<(int)a；即可输出a的ASCII码 A64 a97
- 字符串
  - C语言风格 char a[] = "sdf";
  - C++风格 string a = "asd"; 需要头文件#include<string>,vs2019不用加这个头文件了
  - 用双引号括起来
- 布尔型
  - true 1
  - false 0


**科学计数法** AeB = A*10^B

**转义字符**

| 字符 | 含义     |
| ---- | -------- |
| \b   | 退格     |
| \n   | 换行     |
| \r   | 回车     |
| \t   | 水平制表 |

**运算符**

- 算术运算符 + - * / % ++ --
- 赋值运算符 = += -= *= /= %=
- 比较运算符 ==相等 !=不等 > < >= <=
- 逻辑运算符 !非 &&与 ||或

## 2 程序流程结构

 最基本的三种程序运行结构：顺序、选择、循环

### 2.1 选择结构

**if语句** `if - esle if - esle`

**三目元算符**`条件?1:0`

**switch**`switch case: break`

### 2.2 循环结构

**while**`while(条件){条件满足执行}`

**do while**`do{循环语句}while(条件)`不管条件是否符合都会执行一次

**for**`for(起始表达式0;条件表达式1;终止表达式3){循环语句2}`执行顺序0 123 123 123……

**补充：随机数**

C/C++里没有自带的random(int number)函数。
如果你只要产生随机数而不需要设定范围的话，你只要用rand()就可以了：rand()会返回一随机数值, 范围在0至RAND_MAX（2147483647）间。

但是生成的随机数都只能是一次性的，如果你第二次运行的时候输出结果仍和第一次一样。这与srand()函数有关。srand()用来设置rand()产生随机数时的随机数种子。在调用rand()函数产生随机数前，必须先利用srand()设好随机数种子（seed）, 如果未设随机数种子, rand()在调用时会自动设随机数种子为1。上面的两个例子就是因为没有设置随机数种子，每次随机数种子都自动设成相同值1 ，进而导致rand()所产生的随机数值都一样。

srand()函数定义 ：`srand ((unsigned)int seed);`一般用时间做种子`srand((unsigned)time(NULL));`，需要头文件`#include<ctime>`

### 2.3 跳转语句

**break**用于跳出选择或者循环

**continue**跳过本次循环中未执行的语句继续下一循环

**goto**不要用

```c++
	cout << 1 << endl;
	cout << 2 << endl;
	cout << 3 << endl;
	goto FLAG;
	cout << 4 << endl;
	cout << 5 << endl;
	FLAG:	//位置用冒号，一般都大写
	cout << 6 << endl;
```

##　3 数组

放在一块连续的内存空间，数组中每个元素都是相同的数据类型。

### 3.1一维数组

**定义方式**

`数据类型 数组名[长度];`
`数据类型 数组名[长度]={值1，值2……};`  
`数据类型 数组名={值1，值2……};`

**长度**`sizeof(arr)/sizeof(arr[0])`

数组名就是数组首地址

### 3.2**二维数组**

`数据类型 数组名[行][列];`
`数据类型 数组名[行][列]={{值1,值2},{值1,值2}};`  
`数据类型 数组名[行][列]={值1,值2……};`
`数据类型 数组名[][列]={值1,值2……};`

## 4 函数

封装代码，降低代码重复率。

**定义**：`返回值类型 函数名(参数列表) {函数体}`

**声明：**如果自定义函数写在main函数后边会报错，所以可以提前声明。

**==值传递==**：函数中值传递，形参的改变不会引起实参改变。因为内存中是给形参分配空间之后将实参的值赋值给形参，并不会影响实参本身。

### 4.1 <font color=red>函数分文件编写</font>

1. 创建后缀名为.h的头文件
2. 创建后缀名为.cpp的源文件，源文件中用`#include"头文件"`
3. 在有文件中写函数的声明
4. 在源文件中写函数的定义
5. 在代码中引用`#include"头文件"`

### 4.2 函数默认参数

给形参设置默认参数之后，如果函数运行时传入数据，那就使用传入的数据，要不然就使用默认参数。

**注意**：

1. 不设置默认参数的位置只能位于左侧，即某一位置设默认参数之后，它右边的所有形参都必须设置默认参数。

2. 函数声明和函数体分开时，函数声明和函数实现中只有一个能设默认值，否则会出现二义性问题。

   ```c++
   int add(int a, int b );
   int add(int a = 5, int b = 2)
   {
   	return a + b;
   }
   ```

### 4.3 函数占位参数

`返回值类型 函数名(数据类型)`

占位参数也可以设默认值。

`int add(int a, int);`第二个int就是一个占位参数。

### 4.4 重载

采用相同的函数名，提高函数的复用性。但是必须满足一下条件：

- 同一个作用域下
- 函数参数类型不同或者个数不同或者顺序不同

**引用作为重载条件时**：

```c++
void func(int& a)
{
	cout << "void func(int& a)" << endl;
}
void func(const int& a)
{
	cout << "void func(const int& a)" << endl;
}

	int a = 5;
	func(a);	//"void func(int& a)" 
	func(5);	//"const void func(int& a)" 
```

const修饰的实参是为了限制为只读状态，`func(a);`正常情况下传入一个变量会执行`void func(int& a)`；但是`func(5);`传入一个数字`int& a = 5`不合法，就只能走`const void func(int& a)`，原因见8.2。

**形参有默认参数时**：可能会出现二义性，注意区分。函数重载时尽量不用默认参数。

## 5 指针

指针就是一个地址。

**定义：**`数据类型 *指针名 `

在32位系统下指针4字节，64位占8字节。

**空指针**：指针变量指向内存中编号为0的空间，用于初始化指针很，空指针是不能访问的。`int *p = NULL;`

**野指针**：指针变量指向非法内存空间，程序中要避免出现野指针

**const修饰指针**：

- const修饰指针：常量指针，指针指向可以修改，值不可以修改

  ```c++
  const int* q = &a;
  *q = 20;	//×
  q = &b;		//√
  ```

  

- const修饰常量：指针常量，指针指向不可以改，指向的值可以改

  ```c++
  int* const s = &a;
  *s = 666; 	//√
  s = &b; 	//×
  ```

  

- const修饰指针又修饰常量：都不能改

**指针和数组**

```c++
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int* a = arr; //数组名就是数组首地址
	for (int i = 0; i < 10; i++)
	{
		cout << *a << " ";
		a++;
	}
```

**指针和函数**

（4函数中提到）**==值传递==**：函数中值传递，形参的改变不会引起实参改变。因为内存中是给形参分配空间之后将实参的值赋值给形参，并不会影响实参本身。

**==地址传递==**：内存中给指针分配空间之后，指针指向对应的实参，函数运行时对，对形参指针指向的实参进行修改。

## 6 结构体

`struct 结构体名 {结构体成员列表}`

**声明结构体变量**

`struct 结构体名   {};  结构体名 变量名; 变量.xxx = ;`
`struct 结构体名 {};  结构体名 变量名={xxx xxx xxx}; `
`struct 结构体名 {} 变量名; 变量.xxx = ;`

**结构体指针**用`->`访问

**const修饰结构体**

结构体做实参的时候，可以将形参设为指针以此来节省空间。因为形参是结构体，那函数调用时候是申请一个空间复制实参的结构体，如果换成指针只需要一个指针的字节就可以了。

但指针作为形参会改变实参的值。因此声明指针的时候使用const修饰。

## 7 内存分区模型

C++程序在执行时，将内存大方向划分为4个区域

- 代码区：存放函数体的二进制代码，由操作系统进行管理的
- 全局区：存放全局变量、静态变量、常量
- 栈区：由编译器自动分配释放，存放函数的参数值局部变量等
- 堆区：由程序员分配和释放，若程序员不释，放程序结束时由操作系统回收

### 7.1 程序运行前
在程序编译后，生成了exe可执行程序，**未执行该程序前**分为两个区域
- **代码区**：存放CPU执行的机器指令

  代码区是共享的，共享的目的是对于频繁被执行的程序，只需要在内存中有一份代码即可

  代码区是只读的，使其只读的原因是防止程序意外地修改了它的指令

- **全局区**：全局变量和静态变量存放在此

  全局区还包含了常量区，字符串常量和const修饰的全局常量也存放在此，该区域的数据在程序结束后由操作系统释放

### 7.2 程序运行后

- **栈区**：由编译器自动分配释放，存放函数的形参，局部变量等

  **注意事项**：不要返回局部变量的地址，栈区开辟的数据由编译器自动释放

- **堆区**：由程序员分配释放，若程序员不释放，程序结束时由操作系统回收

  在C++中主要利用new在堆区开辟内存

### 7.3 new操作符

C++中利用new操作符在堆区开辟数据

由程序员手动开辟，手动释放，释放利用操作符 delete

**new**：

- 声明变量：`int* p = new int(10);`在堆区声明一个变量10，返回一个该数据类型的指针，要用指针接收
- 声明数组：`int* arr =  new int[10];`

**delete**：`delete p;`  `delete[] arr;`

## 8 引用

可以理解为给变量起别名。实际上是指针常量。

**语法**：`int &b = a;`

引用必须初始化，一旦初始化之后就不可以更改。 

```c++
int b=20, c=10;
int& a = b;
cout<<"a="<<a<<"\tb="<<b<<"\tc="<<c<<endl;
//20 20 10
a = c;	//是赋值，不是更改引用
cout<<"a="<<a<<"\tb="<<b<<"\tc="<<c<<endl;
//10 10 10
```

**应用在函数中的应用**

### 8.1 做函数参数

 **==值传递==**：函数中值传递，形参的改变不会引起实参改变。因为内存中是给形参分配空间之后将实参的值赋值给形参，并不会影响实参本身。

**==地址传递==**：内存中给指针分配空间之后，指针指向对应的实参地址，函数运行时对，对形参指针指向的实参进行修改。

**==引用传递==**：可以理解为形参相当于是给实参起了个别名，**形参不开辟新空间**， 用的都是同一块地址，函数运行时直接对该地址的数据进行修改。然而实际上是系统给你搞了个指针常量。

### 8.2 做函数返回值

如果函数返回值是引用，函数的调用可以作为左值。

### 8.3 常量引用

`int &q = 10; `会报错，但是`const int &q = 10; `就不报错，因为加上const之后编译器会将代码修改为`int temp =10; const int &q = temp;`

引用只能引用合法的内存空间，即在栈或者堆中的数据。直接=10，10是常量，在常量区，所以不能直接引用。

**用来修饰形参，防止误操作。**

## 9 类和对象

C++面向对象的三大特征：封装、继承、多态

###　9.1 封装

将属性（变量）和行为（函数）作为一个整体，表现生活中的事物并对其加以权限控制。

在设计类的时候，属性和行为写在一起，表现为事物。**属性和行为统称为成员**。属性-成员属性、成员变量；行为-成员函数、成员方法。

**访问权限**：

- public：成员在类内**可以**访问，类外**可以**访问
- private：成员在类内**可以**访问，类外**不可以**访问，子类**不可以**继承
- protect：成员在类内**可以**访问，类外**不可以**访问，子类**可以**继承

```c++
#define pi 3.14
class circle {
private:
	int r2;
public:
	//属性
	int r1;	//半径 
	//行为 
	double circumference()	//周长 
	{		return 2*pi*r1;	}
	double dimensions()
	{		return pow(pi,r2);	}
	void set(int n)
	{		r2 = n;	} 
}; 
int main()
{
	circle c1;	//实例化一个对象 
	c1.r1 = 5;
	//c1.r2=7; 私有成员不可以直接访问 
	c1.set(2);
	cout<<"c1的周长："<<c1.circumference()<<endl;
	cout<<"c1的面积："<<c1.dimensions()<<endl; 
	return 0;
} 
```



**struct和class的区别**：struct默认权限为公有，class默认权限为私有

将成员属性设置为私有我们可以自己控制读写权限。由于外部不能直接访问，所以我们在类内设置不同的成员函数来限制类外对于属性的读写。

对于读写权限我们可以检测数据的有效性。在成员函数中设置检测语句。

```c++
#include<iostream>
using namespace std;
class Person
{
public:
	void SetMessage(string s1,int n,string s2)
	{
		name = s1;
		address = s2;
		if(age<0||age>110)
			return;
		age = n;
	}
	void print()
	{
		cout<<"姓名："<<name;
		if(age>0 && age<110)
			cout<<" 年龄："<<age; 
		cout<<"\n";
	}
private:
	string name;
	int age ; 
	string address; //设置只可写不可读 
};
int main()
{
	Person p1,p2;
	p1.SetMessage("张三",120,"");
	p2.SetMessage("李四",23,"");
	p1.print();
	p2.print();
	return 0;
}
```

### 9.2 对象的初始化和清理

9.2.1 构造函数和析构函数

对象的初始化和清理是两个非常重要的安全问题。C++利用了构造函数和析构函数解决上述问题，这两个函数会被编译器自动调用。因此如果**我们不提供构造函数和析构函数，编译器会提供，但是是空实现**。

**构造函数**：`类名(){}`

- 没返回值，也不写void
- 函数名与类名相同
- 可以有参数，可以重载
- 调用对象时会自动调用构造函数，只调用一次

**析构函数**：`~类名(){}`

- 没返回值，也不写void
- 函数名与类名相同
- 没有参数
- 对象销毁前会自动调用，只会调用一次

#### 9.2.1.1 构造函数的分类及调用

**两种分类方式**：

- 按参数分为：有参构造和无参构造（默认构造）

- 按类型分为：普通构造和拷贝构造

  ```c++
  Person(const Person &p) 
  //拷贝构造函数参数列表都这样写
  ```

  

**三种调用方式**：

- 括号法：调用默认构造函数时候不能加()
- 显示法
- 隐式转换法

```c++
#include<iostream>
using namespace std;
class Person
{
public:
	Person()
	{
		cout<<"调用无参构造函数"<<endl; 
	}
	Person(int a)
	{
		cout<<"调用有参构造函数"<<endl; 
	}
	Person(const Person &p)
	{
		cout<<"调用拷贝构造函数"<<endl; 
		age = p.age;
	}
	~Person()
	{
		cout<<"调用析构函数"<<endl; 
	}
private:
	string name;
	int age ; 
	string address; //设置只可写不可读 
};
int main()
{
	//括号法 
	Person p1;
	Person p2(1);
	Person p3(p1);
	//	Person p() 会被认为是声明函数 
	
	// 显示法
	Person p4;
	Person p5 = Person(10);
	Person p6 = Person(p4);
	//单独的Person(10)是匿名对象，不能用拷贝函数初始化匿名对象
	//编译器会默认Person(p4) === Person p4
	
	//隐式转换法 --- 编译器会给转换成显示法 
	Person p7 = 10;
	Person p8 = p7;
	 
	system("pause");
	return 0;
}
```

#### 9.2.1.2 拷贝构造函数调用时机

1. 使用一个 已经创建完毕的对象来初始化一个新对象 
2. 为函数参数传值 
3. 作为返回值

```c++
#include<iostream>
using namespace std;
class Person
{
public:
	Person()
	{
		cout<<"调用无参构造函数"<<endl; 
	}
	Person(int a)
	{
		cout<<"调用有参构造函数"<<endl; 
		age = a;
	}
	Person(const Person &p)
	{
		cout<<"调用拷贝构造函数"<<endl; 
		age = p.age;
	}
	~Person()
	{
		cout<<age<<endl; 
		cout<<"调用析构函数"<<endl; 
	}
	int age ; 
};
//2.为函数参数传值 
void func1(Person p)
{	p.age++;
	cout<<"这是函数1"<<endl; 
}
//3.作为返回值 
Person func2()
{
	Person p;
	cout<<"这是函数2"<<endl; 
	return p;
}
int main()
{
	//1.使用一个 已经创建完毕的对象来初始化一个新对象 
	Person p1(17);
	Person p2(p1);
	
	func1(p1);
	func2();
	
	return 0;
} 
```

#### 9.2.1.3 构造函数调用规则

默认情况下C++编译器会至少提供：默认构造函数，默认析构函数，拷贝函数。**但是**，

- 如果用户定义有参构造函数，C++就不会提供默认无参构造函数了，但是依旧提供拷贝构造函数。
- 如果用户定义拷贝构造函数，C++就不提供其他构造

#### 9.2.2 深拷贝浅拷贝

浅拷贝：赋值拷贝

深拷贝：在堆区重新声明空间进行拷贝操作，就是自己new一个

```c++
#include<iostream>
using namespace std;
class test
{
public:
	int a;
	int* p;
	test(int n,int m)
	{
		a = n;
		p = new int(m);
		cout<<"调用有参构造函数"<<endl; 
	} 
	//如果在VS里这么写会报错（但是dev没报错。
	//浅拷贝，声明两个对象，析构函数也释放两次p，造成同一区域重复释放 
	/*test(const test &s)
	{
		a = s.a;
		p = s.p;
		cout<<"调用拷贝构造函数"<<endl;
	} */
	test(const test &s)
	{
		a = s.a;
		p = new int(*s.p); //对s.p指针解引用 
		cout<<"调用拷贝构造函数"<<endl;
	}
	~test()
	{
		delete p;
		cout<<"调用析构函数"<<endl;
	} 
};
void func(){test t1(1,2);test t2(t1);} 
int main()
{
	func();
	return 0;
} 
```

#### 9.2.3 初始化列表

**语法**：`构造函数():属性(值),...{}`

```c++
test(int n1,int n2,int n3):a(n1),b(n2),c(n3){}
```

#### 9.2.4 类对象作为类成员

C++类中的成员可以是另一个类的对象，成为**对象成员**。

**作为成员对象的类先构造，后析构**。

```c++
#include<iostream>
#include<string>
using namespace std;
class message
{
public:
	string PhoneNumber;
	string EMail;
	message(string s1,string s2):PhoneNumber(s1),EMail(s2)
	{
		cout<<"messagee的构造函数"<<endl; 
	}
	~message()
	{
		cout<<"messagee的析构函数"<<endl; 
	}
};
class person
{
public:
	string name;
	message mes;
	person(string s1,string s2,string s3):name(s1),mes(s2,s3)
	{
		cout<<"person的构造函数"<<endl; 
	}
	void print()
	{
		cout<<"姓名："<<name<<endl;
		cout<<"个人信息："<<endl;
		cout<<" -电话："<<mes.PhoneNumber<<"\n -邮件:"<<mes.EMail<<endl; 
	}
	~person()
	{
		cout<<"person的析构函数"<<endl; 
	}
};
int main()
{
	person p("张三","111111111","asdada@ada.com");
	p.print(); 
	return 0;
}
```

#### 9.2.5 静态成员

静态成员就是在前面加上static。静态成员分为：

- 静态成员变量：
  - 所有对象共享同一份数据，有两种访问方式，可使用`类名::变量`使用`对象.变量`
  - 在编译阶段分配内存
  - 类内声明类外初始化
- 静态成员函数：
  - 所有成员共享一个函数，有两种访问方式
  - 静态成员函数只能访问静态成员变量

### 9.3 对象模型和this指针

#### 9.3.1 成员对象和成员函数分开存储

在C++中，类内的成员变量和成员函数分开存储，只有非静态的成员变量才属于类的对象上

输出：1 4 4

```c++
#include<iostream>
using namespace std;
class test1
{
	 
};
class test2
{
	int a;
};
class test3
{
	int a;
	static int b;
	void func(){};
	static void f(){}
};
int main()
{
	//C++给每个空对象分配一个字节的空间，为了区分空对象占内存的位置
	//每个空对象也有一个独一无二的内存地址 
	test1 t1;
	cout<<"sizeof(t1)="<<sizeof(t1)<<endl;
	
	//如果不是空的，就按照内部数据分配空间 
	test2 t2;
	cout<<"sizeof(t2)="<<sizeof(t2)<<endl;
	
	//只有非静态的成员变量才属于类的对象上
	test3 t3;
	cout<<"sizeof(t3)="<<sizeof(t3)<<endl;
	return 0;
}
```

#### 9.3.2 this指针

多个同类型的对象会公用类中非静态成员函数的同一块代码，为区分是哪个对象调用的，**this指针可以解决对象冲突**。**this指针指向被调用的成员函数指向的对象**。每个非静态成员函数都有this指针。**也可以用this返回对象本身**。

this指针本质是指针常量，指向是不可以修改的

```c++
#include<iostream>
using namespace std;
class test
{
public:
	int a;
	test(int a)
	{
		this->a = a;
	}
	void print()
	{
		cout<<"a="<<a<<endl;
	}
	test& add(test &p)	
	/*类型后一定要加引用，否则会调用拷贝构造函数（9.1.2.1）
	形成新对象，之后的操作都是在新对象上执行的*/
	{
		this->a += p.a;
		return *this;
		//用this返回对象本身
	}
	~test(){} 
};
int main()
{
	test t(1);
	t.print();
	/*如果没加引用，t.add(t)返回形成一个新对象t'，
	之后是对t'进行.add(t).add(t).add(t)，然后返回t''...
	以此类推，之后的操作都是在拷贝之后的新对象上，
	因此t只会进行一次相加操作*/ 
	t.add(t).add(t).add(t).add(t);
	t.print();
	return 0;
}
```

#### 9.3.3 空指针访问成员函数

空指针也可以调用成员函数，但是要注意有没有用到this指针。也就是说空指针可以访问类中没有非静态成员变量的成员函数。

```c++
#include<iostream>
using namespace std;
class test
{
public:
	int a;
	void print()
	{
		cout<<"a="<<a<<endl;
	}
	~test(){} 
};
int main()
{
	test *y = NULL;
	y->print();	//这种无法访问，因为a默认是this.a
	return 0;
}
```

#### 9.3.4 const修饰成员函数

**常函数**：成员函数后加const

- 常函数不可修改成员属性
- 成员属性声明时加关键字mutable后在常函数中可以修改

**常对象**：声明对象前加const

- 常对象只能调用常函数

```c++
#include<iostream>
using namespace std;
class test
{
public:
	int a;
	mutable int b;
	test(){} 
	void func() const 
	//test* const this 变为 const test* const this 
	{
		// a = 1;  此时a已经不可修改了 
		/*相当于this->a = 1; 
		this是指针常量test* const this 
		指向不可以修改，但是值可以改
		在成员函数后加const，令其值也不可更改*/ 
		
		b = 2;	//加mutable可以修改 
	}
	void f(){} 
	~test(){} 
};
int main()
{
	const test t;	//常对象 
	//t.a = 2; 报错，常对象只能修改加mutable的变量 
	t.b = 6;
	//t.f(); 报错，常对象只能调用常函数，因为普通成员函数可能会修改属性 
	t.func();
	return 0;
}
```



需要头文件`#include<fstream>`

文件类型：

- 文本文件：以ASCII码存在于计算机中
- 二进制文件：以二进制存在于计算机中

三大操作：

- ofstream：写文件
- ifstream：读文件
- fstream：读写文件

### 9.4 友元

在程序里，有些私有属性也想让类外的一些特殊函数或者类进行访问，就需要用到友元。友元的目的就是让一个函数或者类访问另一个类中的私有成员。

友元关键字是`friend`

**三种实现**：

- 全局函数：类中加上`friend 全局函数声明;`，类外写一个完整的全局函数即可。
- 类：`friend 类的声明;`再写一个完整的类即可。
- 成员函数：`friend 类::函数声明`，因为前后两个类互相引用，所以会出现奇奇怪怪的错误，要好好使用预声明和类外定义函数。

### 9.5 运算符重载

对已有的运算符重新进行定义，赋予另一种意义，以适应不同的据类型。

#### 9.5.1 加号运算符重载

使用默认的`operator+`，也可以重载。

```C++
#include<iostream> 
using namespace std;
class number
{
public:
	int a,b;
	number(int m=0,int n=0):a(m),b(n){}
	//成员函数重载 
	/*number operator+ (number &p)
	{
		number s;
		s.a = p.a + this->a;	//写法1 
		s.b = p.b + this->b;	//写法2
		return s;
	}*/
};
//全局函数重载
number operator+(number &p,number &q)
{
	number s;
	s.a = p.a + q.a;
	s.b = p.b + q.b;
	return s;
}
int main()
{
	number a(5,8),c(1,3);
	number b = operator+(a,a);	//写法1 
	cout<<b.a<<" "<<b.b<<endl;
	b = c + a;					//写法2 
	cout<<b.a<<" "<<b.b<<endl;
	return 0;
}
```

#### 9.5.2 重载<<

重载运算符配合友元可以输出自定义数据类型。

注意cout是ostream类型。

```c++
#include<iostream >
using namespace std;
class number
{
public:
	int a,b;
	number(int m=0,int n=0):a(m),b(n){}
}; 
//只能用全局函数重载左移运算符
ostream& operator<<(ostream &cout,number &p)
{	
	cout<<"a = "<<p.a<<", b = "<<p.b<<endl;
	return cout;	//实现链式编程 
}  
int main()
{
	number a;
	cout<<a; 
	number b(1,3);
	cout<<b;
	return 0;
}
```

#### 9.5.3 ++重载

用到了之前占位符的知识，占位符用于区分，实现函数重载。

tips：下面的代码在dev c++中无法运行，vs可以。

```c++
#include<iostream>
using namespace std;
class myInteger
{
	friend ostream & operator<<(ostream &cout,myInteger s);
private:
	int n ; 
public:
	myInteger():n(0){}
	//重载前置++运算符
	myInteger& operator++()	
	//返回引用为了对同一个数据操作  
	{
		n++;
 		return *this;
	} 
	//重载后置++运算符 
	myInteger& operator++(int) 
	{
		myInteger temp = *this;
		n++;
		return temp;
	} 
	//int占位符，用于区分前置后置的重载 
};
ostream & operator<<(ostream &cout,myInteger s)
{
	cout<<s.n;
	return cout;
} 
int main()
{
	myInteger n;
	cout<<n++<<endl;
	return 0;
}
```

#### 9.5.4 赋值运算符重载

C++编译器至少会给一个类添加四个默认函数

- 默认构造函数，无函数体
- 默认析构函数，无函数体
- 默认拷贝函数
- 默认赋值运算符operator=

```c++
#include<iostream>
using namespace std;
class number
{
public:
	int *n;
	number(int a)
	{
		n = new int(a);	
	}
	void operator=(number &p)	//一定要加上&，否则执行完后p就被析构了。
    /*不加&执行完之后会析构形参，但是形参的属性是指针，因此销毁形参的时候会析构掉main中的a，加上&之后表示引用，引用做形参不会开辟新地址，执行完后也不会被析构*/
	{
		//编译器提供的是浅拷贝，要自己重载写一个深拷贝
		if (n != NULL)
		{
			delete n;
			n = NULL;
		}
		n = new int(*p.n);
	}
	~number()
	{
		if (n != NULL)
		{
			delete n;
			n = NULL;
		}
	}
};
int main()
{
	number a(5);
	number b(7);
    cout << *a.n << endl;
	cout << *b.n << endl;
	b = a;
	cout << *a.n << endl;
	cout << *b.n << endl;
	return 0;
}
```

#### 9.5.5 关系运算符重载

```C++
#include<iostream>
using namespace std;
class number
{
public:
	int n;
	number(int a):n(a){}
	int operator==(number &p)
	{
		if(this->n==p.n)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
};
int operator!=(number &p,number &q)
{
	if(q.n==p.n)
	{
		return 0;
	}
	else
	{
		return 1;
	}
}
int main()
{
	number a(8);
	number b(8);
	cout<<(a==b)<<endl;
	cout<<(a!=b)<<endl;
	return 0;
}
```

#### 9.5.6 函数调用运算符重载

函数调用运算符`()`也可以重载，由于重载后使用方式非常像函数调用，因此被称为”仿函数“，仿函数没有固定写法， 十分灵活。

**补充**：匿名对象，比如`print()("hello world")`

```c++
#include<iostream>
#include<string>
using namespace std;
class print
{
public:
	void operator()(string test)
	{
		cout<<test<<endl;
	}	
};
class Add //写法灵活，写什么函数都可以
{
public:
	int operator()(int a,int b)
	{
		return a+b;
	}
};
int main()
{
	print s;
	s("hello world");
	Add a;
	cout<<a(2,5)<<endl;
	cout<<Add()(1,7)<<endl;
	//Add()是匿名函数对象，声明一个a占空间没啥用，所以声明一个匿名对象操作。 
	return 0;
} 
```

### 9.6 继承

继承是面向对象的三大特征之一，有共性的一些类可以运用继承来减少重复的代码量。子类又称派生类，父类又称基类。

**语法**：

`class 子类:继承方式 父类`

多继承：`class 子类:继承方式 父类,继承方式 父类,...` 

多继承可能会引发同名成员出现，会出现二义性，区分访问起来比较麻烦，实际不建议用多继承。

**继承方式**：

- 公共继承：父类共有→子类共有，父类保护→子类保护，父类私有→子类不可访问
- 保护继承：父类共有、父类保护→子类保护，父类私有→子类不可访问
- 私有继承：父类共有、父类保护→子类私有，父类私有→子类不可访问

![](https://gitee.com/LolitaAnn/rec/raw/master/img/9.6.1.png)

**继承后的对象模型**：父类的私有成员会被继承，但是子类无法访问。可以用sizeof测一下，或者用vs自带的developer。

进入到相应文件夹下，然后`cl /d1 reportSingleClassLayoutB '文件名'`

![](https://gitee.com/LolitaAnn/rec/raw/master/img/9.6.2.jpg)

```c++
#include<iostream>
using namespace std;
class A
{
public:
	int a;
protected:
	int b;
private:
	int c;
}; 
class B:public A
{
	int d;
};
class C:public A
{
};
class D:public A
{
	int d;
};
int main()
{
	return 0;
} 
```

**构造和析构的顺序**：

父类先构造后析构，子类后构造先析构。

**继承中同名成员的访问**：

子类和父类可以有同名的成员，访问的时候：

- 访问子类成员：直接访问`子类对象.子类同名成员`
- 访问父类成员：加作用域 `子类对象.父类名::父类同成员`
- 访问子类静态成员：`子类对象.子类同名成员`或`子类名::子类同名成员`
- 访问父类静态成员： `子类对象.父类名::父类同成员`或`子类名::父类名::父类同名成员`

tips:

- 如果子类和父类有同名的成员函数，那么子类会覆盖掉所有父类中的成员函数（即包括重载函数）。想访问就得加作用域！！！
- 对象后面用`.`，类名后边用`::`

**菱形继承**：

![](https://gitee.com/LolitaAnn/rec/raw/master/img/9.6.3.png)

两个类继承了某一个基类，又有一个类继承了这两个类，而形成一个菱形继承，又称钻石继承。因为同时继承两个类，最低级的子类也会出现二义性，虽然二义性可以通过加作用域访问而解决，但是却会出现继承同类代码（重复继承）的问题，导致资源浪费。可以利用虚继承解决。

**虚继承**：`class B:virtual  public A`，A被称为虚基类。虚继承之后数据就只继承一份了。

下边代码中，底层会发现有个`vbptr`指向一个`vbtable`，就是继承了个指针而已。

- v：virtual
- b：base
- ptr：pointer

![](https://gitee.com/LolitaAnn/rec/raw/master/img/9.6.4.png)

上图中animal 24字节，因为string 24字节。sheep 28字节，在animal基础上加了4字节指针，camel同理。llama继承了前两者，两个指针8字节加animal的24字节，共计32字节。

```C++
#include<iostream>
using namespace std;
class animal
{
	string name;
};
class sheep:virtual public animal {}; 
class camel:virtual public animal {}; 
class llama:public sheep,public camel {}; 
int main()
{
	return 0; 
}
```

### 9.7 多态

- 静态多态：函数重载和运算符重载都属于静态多态，复用函数名
- 动态多态：派生类和虚函数实现运行时多态

区别：

- 静态多态的函数地址早绑定：编译阶段确定函数地址
- 动态多态的函数地址绑定晚：运行阶段确定函数地址

**动态多态的满足关系**：

1. 有继承关系
2. 子类要重写父类的虚函数（函数返回值类型、函数名、参数列表都要完全相同，virtual关键字可写可不写）

**动态多态的使用**：用父类的指针或引用来指向子类的对象

#### 9.7.1 虚函数

```C++
#include<iostream>
using namespace std;
class animal
{
public:
	//加上virtual就是虚函数了 
	virtual void speak(){cout<<"动物在叫"<<endl; }
};
class cat:public animal 
{
public:
	void speak(){cout<<"喵喵喵"<<endl; }
}; 
class dog:public animal 
{
public:
	void speak(){cout<<"汪汪汪"<<endl; }
}; 
void doSpeak(animal &a)
{
	a.speak();
}
int main()
{
	cat c;
	doSpeak(c); 
	/*形参是animal &a 实参是 cat c 父类的引用指向一个子类的对象
	在C++之间允许父子类型直接转换 
	执行这个函数之后输出是“动物在叫”
	因为地址早绑定，在编译阶段就确定了函数地址 
	如果显示传入参数的输出，就得用到动态多态*/ 
	dog d;
	doSpeak(d); 
	return 0;
}
```

cat类中有个`vfptr`，指向一个虚函数表`vftable`，表中记录虚函数的地址。animal类也有`vfptr`指向`vftable`。当子类重写父类的虚函数，那虚函数表内部会替换为子类的虚函数地址。当父类的指针或引用指向子类对象的时候，会发生多态。

- v：virtual
- f：function
- ptr：pointer

![](https://gitee.com/LolitaAnn/rec/raw/master/img/9.7.png)

#### 9.7.2 纯虚函数和抽象类

在多态中，通常父类的虚函数实现是毫无意义的，主要都是调用子类重写的内容，因此可以将虚函数改为纯虚函数。当一个类中有纯虚函数，那这个类就被称为抽象类。

**语法**：`virtual 返回值类型 函数名(参数列表) = 0;`

**抽象类的特点**：

- 无法实例化对象
- 子类必须重写父类中的纯虚函数，否则也属于抽象类

```c++
#include<iostream>
using namespace std;
class animal 	//抽象类 
{
public:
	virtual void speak() = 0;	//纯虚函数 
}; 
class cat:public animal
{
public:
	virtual void speak()
	{
		cout<<"喵喵喵"<<endl; 
	}
};
int main()
{
	cat a;
	a.speak();
	return 0;
}
```

#### 9.7.3 虚析构和纯虚析构

多态使用的时候，如果子类中有属性开辟到堆区，那么父类指针在释放时无法调用到子类的析构代码。可以将父类中的析构函数改为虚析构或纯虚析构来解决。

**二者共性**：

- 可以解决父类指针释放子类对象
- 都需要有具体的实现，纯虚析构类内声明，类外实现

**二者区别**：

- 如果是纯虚析构，该类属于抽象类，无法实例化对象

虚析构：`virtual ~(){};`

纯虚析构：`virtual ~(){}=0;`

```C++
#include<iostream>
#include<string>
using namespace std;
class animal 	//抽象类 
{
public:
	animal()
	{
		cout<<"animal构造"<<endl;
	}
	virtual void speak() = 0;	//纯虚函数
	/*virtual ~animal()	//虚析构 
	{
		cout<<"animal析构"<<endl;
	} */
	//纯虚析构  
	virtual ~animal() = 0;  
}; 
//animal的纯虚析构
animal::~animal()
{
	cout<<"animal纯虚析构"<<endl;
} 
class cat:public animal
{
public:
	string *name; 
	cat(string n)
	{
		name = new string(n);
		cout<<"cat构造"<<endl;
	}
	virtual void speak()
	{
		cout<<*name<<"喵喵喵"<<endl; 
	}
	~cat()
	{
		delete name;
		name = NULL;
		cout<<"cat析构"<<endl;
	}
};
int main()
{
	animal* c = new cat("tom");
	c->speak();
	/*父类指针析构的时候不会调用子类析构函数，
	会导致子类又在堆区的属性，造成子类泄露
	改成虚析构之后就会走子类的析构*/ 
	delete c;
	return 0;
}
```

## 10 文件读写

### 10.1 文本文件

**写文件**：

```c++
	ofstream f;					//创建流对象
	f.open("10.txt",ios::out);	//打开文件和打开方式
	//使用相对路径 
	f<<"test1\ntest2"<<endl;	//向文件输出数据
	f.close(); 					//关闭文件
```

| 打开方式    | 解释                       |
| ----------- | -------------------------- |
| ios::in     | 为读文件                   |
| ios::out    | 为写文件                   |
| ios::ate    | 打开文件直接到最后位置     |
| ios::app​    | 追加方式写文件             |
| ios::trunc  | 文件存在的话，先删除后创建 |
| ios::binary | 二进制方式                 |

补充：利用运算符`|`，用二进制写文件`ios::binary | ios::out`

**读文件**：

```c++
	ifstream i;					//创建流对象	
	i.open("10.txt",ios::in);	//打开文件和打开方式
	if(!i.is_open())			//判断文件是否打开成功
	{
		cout<<"文件打开失败"<<endl;
		return 0;
	} 
	//读文件四种方法
	//读数据1
	char rec[1024]={0};
	while(i>>rec){
		cout<<rec<<endl;
	} 
	//读数据2
	char rec[1024]={0};
	while(i.getline(rec,sizeof(rec))) 
	{
		cout<<rec<<endl;
	}
	//读数据3 
	string rec;
	while(getline(i,rec)){
		cout<<rec<<endl;
	} 
	//读数据4
	char c;
	while((c=i.get())!=EOF)
	{
		cout<<c;
	} 
	i.close(); 					//关闭文件
```

### 10.2 二进制文件

读写二进制文件记得加`ios::binary`

```C++
#include<iostream>
#include<fstream>
class Person
{
public:
	char name[32];	//比较底层的东西用C的方法写不容易出问题 
	int age;
}; 
using namespace std;
int  main()
{
	//创建流对象
	ofstream file("10.2.txt",ios::out|ios::binary);
	
	//打开文件，C++提供了构造函数可以在创建的时候直接打开  
	//file.open("10.2.txt",ios::out|ios::binary); 
	
	//写文件 
	Person zs = {"张三",18};
	file.write((const char*)&zs,sizeof(Person));
	
	//关闭文件 
	file.close();
	
	//创建对象 
	ifstream i;
	
	//打开文件
	i.open("10.2.txt",ios::in|ios::binary); 
	if(!i.is_open())
	{
		cout<<"文件打开失败"<<endl;
		return 0;
	} 
	
	//读文件
	Person p;
	i.read((char*)&p,sizeof(Person)); 
	cout<<p.name<<" "<<p.age<<endl;
	
	//关闭
	i.close();
	 
	return 0;
} 
```

## 11 模板

模板就是建立通用的模具，大大提高复用性。

 ### 11.1 函数模板

建一个通用函数，其数据类型和返回值可以不具体指定，用一个虚拟的类型来代表。

**语法**：

`template<typename T>`

`函数的声明和定义`

**解释**：

- template：声明创建模板
- typename：表面其后面的符号是一种数据类型，可以用class代替
- T 通用数据类型，名称可以替换，通常用大写字母


**注意事项**：

- 自动类型推导，必须推导出一致的数据类型T才可以使用。
- 模板必须要确定出T的数据类型才可以使用，就是调用函数的时候必须让编译器知道是什么数据类型，即使根本用不到。

  ```c++
  template<typename T>
  void print()
  {
  	cout<<"hello"<<endl;
  }
  //main中指名随便一个数据类型才可运行
  print<int>(); 
  ```

**普通函数和函数模板的区别**：

- 普通函数调用时可以发生自动类型转换（隐式类型转换）
- 函数模板调用时如果利用自动类型推导，不会发生隐式类型转换
- 函数模板用显式指定的方式，可以发生隐式类型转换

**普通函数和函数模板调用规则**：

- 函数模板和普通模板都可以实现的时候优先调用普通模板
- 可以通过空模板参数列表优先调用函数模板
- 函数模板也可以重载
- 如果函数模板可产生更好的匹配，优先调用函数模板

**模板局限性**：

有时候传入数组或者传入类的时候是无法正常运行的，为了解决这些特定问题，提供了具体化的模板。

```c++
template<typename T>
void func
{
	a = b;	//传入数组、类无法使用
}
```

上述问题可以使用运算符重载，但是麻烦哦，所以可以使用具体化。具体化的时候写一个同名函数，在前边加上`template<>`关键字。

```c++
#include<iostream>
using namespace std;
template<typename T>
void myswap(T& a,T& b)
{
	T tem = a;
	a = b;
	b = tem;
}
/*-------------------*/
template<typename T>
T add1(T a,T b)
{
	return a+b;
}
int add2(int a,int b)
{
	return a+b;
}
/*-------------------*/
template<typename T>
void print(T a,T b)
{
	cout<<"函数模板"<<a<<b<<endl;
}
void print(int a)
{
	cout<<"函数"<<a<<endl;
}
template<typename T>
void print(T a)
{
	cout<<"函数模板"<<a<<endl;
}
/*-------------------*/
//模板局限性 
class test
{
public:
	int n;
	test(int num):n(num){}
};
template<typename T>
bool compare(T a,T b)
{
	if(a == b)
	{
		return true;
	}
	else
	{
		return false; 
	} 
}
//具体化
template<> bool compare(test a,test b)
{
	if(a.n == b.n)
	{
		return true;
	}
	else
	{
		return false; 
	} 
}
/*-------------------*/
void test1()	//模板的两种施用方法测试 
{
	//两种方法使用模板
	//1.自动推导
	int a=5,b=7;
	cout<<a<<" "<<b<<endl;
	myswap(a,b);
	cout<<a<<" "<<b<<endl;
	
	// 显式指定类型
	double c=2.49,d=4.2;
	cout<<c<<" "<<d<<endl;
	myswap<double>(c,d);
	cout<<c<<" "<<d<<endl;
}
void test2()	//区别 
{
	int a=1;
	double c = 3.1;
	// 会报错add1(a,c);
	cout<<add2(a,c)<<endl;	//c会隐式转换为int类型 
	cout<<add1<int>(a,c)<<endl; 
}
void test3()	//调用规则 
{
	int a = 1;
	print(a);		//函数模板和普通模板都可以实现的时候优先调用普通模板
	print<>(a);		//可以通过空模板参数列表优先调用函数模板
	print(a,a);		//函数模板也可以重载
	
	char c = 's';	//c++觉得普通函数强制类型转换不如直接调用模板 
	print(c);		//如果函数模板可产生更好的匹配，优先调用函数模板
}
void test4()	//具体化 
{
	test a(1),b(1);
	cout<<compare(a,b)<<endl;
}
int main()
{
	test1(); 
	test2();
	test3();
	test4();
	return 0;
} 
```

### 11.2 类模板

建立一个通用的类，用一个虚拟类型表示。因为关键字用typename也行用class也行，所以可以用class来写类模板，与函数模板加以区分。

**语法**：

`template<class T>`

`类的声明和定义`

**函数模板和类模板的区别**：

- 类模板没有自动类型推导
- 类模板在模板参数列表中可以有默认参数

**类模板中成员函数创建时机**：调用的时候才会创建。

**类模板对象做函数的参数**：用类模板实例化出的对象，向函数传参，有三种方式

- 指定传入的类型：直接显式对象的数据类型（开发中最常用）
- 参数模板化：将对象中的参数变为模板进行传递
- 整个类模板化：将这个对象类型模板化进行传参



