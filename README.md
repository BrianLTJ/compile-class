# 编译原理实验

Author: 李亭君

Github Repository: https://github.com/BrianLTJ/compile-class

系统要求：

- Windows
  - MinGW / MSYS2
  - gcc
  - flex
  - bison
- Linux
  - gcc
  - flex
  - bison



预编译可执行文件信息

- exp2/a.exe, exp3/a.exe

  编译平台: Windows 10 x64

  bash: MSYS2

  gcc: 6.3.0

  flex: 2.6.3

  bison: 3.0.4

- exp2/a.out, exp3/a.out

  编译平台: Ubuntu 16.04 x64

  gcc:5.4.0
 
  flex: 2.6.0

  bison: 3.0.4



## 实验二

### 构建

```shell
$ flex exp2.l
$ gcc lex.yy.c
```

### 使用
```
(Linux)$ ./a.out test1.c
(Windows)> a.exe test1.c
```

识别的内容将会输出在终端/命令行中。



## 实验三

### 构建

```shell
$ bison exp3.y
$ flex exp3.l
$ gcc -lfl lex.yy.c
```

### 使用

```
(Linux)$ ./a.out test1.test.c
(Windows)> a.exe test1.test.c
```

识别的内容将输出在终端/命令行中。

