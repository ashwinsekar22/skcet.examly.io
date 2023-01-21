# Practicals Preparation Questions
## **Abstract Class**

### 8. Write a Program to calculate the current bill.

  - Create a *class currentBill* with a **virtual** method `double amount()`.
  - Create a *class **Fan*** that *extends currentBill* with **watts** and **hours** as its public attributes and overrides the virtual function.
  - Create a *class **Light*** that extends currentBill with watts and hours as its public attributes and overrides the virtual function.
  - Create a *class **TV*** that extends currentBill with watts and hours as its public attributes and overrides the virtual function.

In the main method, prompt the user to enter the power *rate of the appliance* and *the total hours* used, then create the necessary objects and call the methods.

### **Input Format:**
  - The first line consists of the power rating of the **Fan** and the total hours used separated by space.
  - The second line consists of the power rating of **Light** and the total hours used separated by space.
  - The third line consists of the power rating of the **TV** and the total hours used separated by space.

### **Output Format:**
The output prints the **bill amount**.

Refer to the sample *input* and *output* for the formatting specifications.
