# Practicals Preparation Questions
## **Polymorphism**

### 5. Write a program to implement function overloading.

Ram is given *two* or *three* inputs as an `integer`.
  - If he has *two* integers, then **add** the two numbers.
  - If he has *three* inputs, then **multiply** the three numbers.


### **Function Header:**
```cpp
public:
    void fun1(int a, int b, int c);
    void fun1(int a, int b);
```

### **Input Format:**
  - First-line represents the number of elements($N$) followed by the elements separated by a single space.
  - If the number of the elements exceeds $2$ or $3$, then display a message as **Invalid Input**.


### **Output Format:**
  - Display the **sum**, if there are *two* integers (or)
  - Displays **product**, if there are *three* integers.


### **Constraints:**
```
N > 0 and N < 4
```

### **Sample testcases**

**Input 1**
```
3 1 2 3
```
**Output 1**
```
6
```

**Input 2**
```
2 14 56
```

**Output 2**
```
70
```

**Input 3**
```
4 67 89 43 21
```
**Output 3**
```
Invalid Input
```