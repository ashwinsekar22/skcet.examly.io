---
Module: Friend & Structure
---

# Practicals Preparation Questions

## **Friend & Structure**

### $1.$	Create a structure student with the following members

  - `Roll Number`
  - `Five subject marks`
  - `Average`
  - `Grade`

Given the five subject marks, Calculate the **average** and **grade**.


### **GRADE CALCULATION:**

  1. if $avg > 70$ the grade will be $1$
  2. if *avg 50 to 70* the grade will be $2$
  3. if *avg* is below $50$ the grade will be $3$

### **NOTE:**

  `rn` - Roll Number, 
  `s` - Subjects,
  `avg` - Average


### **Input Format:**

  - The first input consists of the `n` value.
  - The next `n` inputs are the roll numbers and five marks.

### **Output Format:**
The output prints the *roll number, five marks of the subject, average, and grade* of the student.

Refer to the sample *input* and *output* for the formatting specifications.


### **Sample testcases:**

### Input 1
```
2
101
85 78 89 76 67
102
58 69 47 69 84
```

### Output 1
```
101 85 78 89 76 67 79 1
102 58 69 47 69 84 65 2
```

### Input 2
```
1
122
25 23 31 28 29
```

### Output 2
```
122 25 23 31 28 29 27 3
```

### Input 3
```
3
1
84 85 96 97 80
2
65 72 52 46 55
3
24 26 30 15 30
```

### Output 3
```
1 84 85 96 97 80 88 1
2 65 72 52 46 55 58 2
3 24 26 30 15 30 25 3
```