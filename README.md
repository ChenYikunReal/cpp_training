# C++入门训练

![在这里插入图片描述](https://github.com/ChenYikunReal/cpp_training/blob/master/images/cpp-c.png?x-oss-process=image/watermark,type_ZmFuZ3poZW5naGVpdGk,shadow_10,text_aHR0cHM6Ly9ibG9nLmNzZG4ubmV0L3dlaXhpbl80Mzg5NjMxOA==,size_16,color_FFFFFF,t_70)

## C++笔记

1. 赋值语句会被判定为true
```cpp
int a = 0;
if (a = 1) {
    // 由于是赋值语句，故必定满足
}
```

2. 浮点数的精确比较不建议直接判等号，可以设置某个阈值
```cpp
const double EPSILON = 1E-14;
double r = sqrt(2.0);
if (abs(r*r-2) < EPSILON) {
    // 在不精确的情况下，小于这个阈值就可以认为相等
}
```

3. 连续比较运算符的效果：
```cpp
if (0 < 200 < 100) {
    // 一定会执行
}
```
先执行0<200为true得到1，然后1<100还是true得到1。  

4. 连续读取键盘输入直到失败：
```cpp
while (cin >> value) {
    // 执行语句
}
```
含有清除失败状态的实现：
```cpp
do {
    // 省略打印输入的提示语句
    cin >> value;
    if (cin.fail()) {
        cin.clear();
        string ite,;
        cin >> item;
        value = -1;
    }
} while (value < 0);
```

5. 伪随机数的使用：
```cpp
// 设置种子值
srand(time(0));
// 生成一个随机数
rand();
```

6. stub这个概念可以这么理解：它是一个函数，返回一个简单的值，只需提供完成测试所需要的值，而这个函数其实还没有完全实现。
```cpp
string generateStr() {
    return "str";
}
```

7. 二维数组`arr[8][3]`为例，可以简单理解为8个长度为3的一维数组凑成的二维数组，再考虑到数组下标兄0开始，所以`arr[3][1]`是第3*3+2=11个元素。<br/>
公式为：`i*行数+j`

8. 动态分配内存需要遵循以下规则：
- 每次new必须恰好调用一次delete
- 使用delete[]删除数组
- 删除内存块后不应再进行访问

9. 动态分配后未释放的内存块成为内存泄漏，程序结束后自然会释放，但若是一直运行程序则会影响程序。

10. C++定义类的结束之处应该使用分号`;`。

11. 后面跟分号结尾的void函数调用是语句；如果函数有返回值则此函数调用是表达式。

12. setf()格式化标志：

| 标志 | 说明 |
|:---:|:---:|
| ios::fixed | 不使用科学计数法 |
| ios::scientific | 使用科学计数法 |
| ios::showpoint | 始终显示浮点数的小数点和尾随的0 |
| ios::showpos | 正整数前带正号+ |
| ios::right | 右对齐 |
| ios::left | 左对齐 |

13. setw()设置含空白的域(iomanip)；setprecision()设置小数位数。

14. C++11遍历数组的两种好方法：
```cpp
for (auto x : arr) {
    cout << x << endl;
}
```
```cpp
for (int& x : arr) {
    x++;
}
```

15. 指针表示地址，地址可用整数表示，但指针不是整数，不能执行标准算术运算。

16. 对于指针p，使用p才能表示指针，而*p表示的是指针指向的内容。

17. 连续声明两个指针变量的正确写法：
```cpp
int *p1, *p2;
```

18. \<cstring>预定义C函数

| 函数 | 说明 |
|:---:|:---:|
| strcpy | 右字符串复制到左字符串 |
| strncpy | 右字符串复制到左字符串(最多N个字符) |
| strcat | 右字符串连接到左字符串后 |
| strncat | 右字符串连接到左字符串后(最多N个字符) |
| strcmp | 左字符串与右字符串比较 |
| strncmp | 左字符串与右字符串比较(最多N个字符) |

19. vector的长度是向量中元素的个数，容量是当前实际分配了内存的元素的个数。

20. 如果所有成员变量都是public的，且无成员函数，通常使用结构体。(事实上，C++结构体可包含私有变量和成员函数)
