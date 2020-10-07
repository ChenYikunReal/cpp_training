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
