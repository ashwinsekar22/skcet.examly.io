# Practicals Preparation Questions
## **Exception Files**

### 12. Create a vector of `n` size and add elements to it. Get a position and a value and modify the same.

If the position exceeds the size of the vector, `throw` and `catch` an exception and print the same.

### **Input Format:**
  - The first line of the input consists of the `n` value.
  - The next line of the input consists of the `values` of the vector.
  - The last line of the input consists of the **position** and the **element to be replaced**.

### **Output Format:**
The output prints the **modified/original** vector and the exception.

Refer to the sample *input* and *output* for the formatting specifications.

### **Sample testcases**
**Input 1**
```
5
12 85 32 45 65
3 120
```
**Output 1**
```
12 85 32 120 65 
```

**Input 2**
```
5
12 85 32 45 65
6 88
```
**Output 2**
```cpp
vector::_M_range_check: __n (which is 6) >= this->size() (which is 5)
12 85 32 45 65 
```