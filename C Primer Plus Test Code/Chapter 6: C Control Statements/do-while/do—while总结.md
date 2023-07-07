### 关键字
do,while
### 总体注解
    do while语句创建了一个在判断表达式为假（或零）之前重复执行的循环。do while语句是一个退出条件循环，是否再次执行循环的决定是在执行了一次循环之后做出的。因此循环必须至少被执行一次。该形式的statement部分可以是一个简单语句或一个复合语句
### 形式：
```
do
    statement
while (expression)
```
### 例如：
```c
do 
        scanf("%d",&number);
while (number != 20)
```
