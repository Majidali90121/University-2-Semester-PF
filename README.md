## ============================================= lab 01 ==========================================
# 💻 C++ Console Application - Lab Project

This project includes **6 different C++ programs** that cover basic concepts like user input, conditional statements, arithmetic operations, and functions. Each task is represented with an image from the output for better understanding.

---

## 📚 Tasks Overview

---

### ✅ **Task 01: Student Information System**
The user enters their **name** and **roll number**, and the program displays both.

📸 Output Image:  
<p align="center">
  <img src="./Lab 01/Images/Photo1.png" alt="Task 01 Output" width="600px"/>
</p>

---

### ✅ **Task 02: Rectangle Area & Perimeter Calculator**
The customer enters **width** and **length** of a rectangle.  
The program calculates and displays:
- **Area = width × length**
- **Perimeter = 2 × (width + length)**

📸 Output Image:  
<p align="center">
  <img src="./Lab 01/Images/Lab1 photo2.png" alt="Task 02 Output" width="600px"/>
</p>

---

### ✅ **Task 03: Voter Eligibility Checker**
This program checks whether a person is **eligible to vote** or not.  
If the entered age is **greater than or equal to 18**, the person is eligible.

📸 If Eligible:  
<p align="center">
  <img src="./Lab 01/Images/Lab1 photo3.png" alt="Eligible Voter" width="600px"/>
</p>

📸 If Not Eligible:  
<p align="center">
  <img src="./Lab 01/Images/Lab1 noegligeble.png" alt="Not Eligible" width="600px"/>
</p>

---

### ✅ **Task 04: Celsius to Fahrenheit Converter**
This program takes a temperature in **Celsius** and converts it to **Fahrenheit** using the formula:  
**F = (C × 9/5) + 32**

📸 Output Image:  
<p align="center">
  <img src="./Lab 01/Images/Lab1 Photo4.png" alt="Temperature Conversion" width="600px"/>
</p>

---

### ✅ **Task 05: Simple Calculator**
The program performs basic operations:

- ➕ **Addition**

  <p align="center">
    <img src="./Lab 01/Images/Lab1 photo5.png" alt="Addition" width="600px"/>
  </p>

- ➖ **Subtraction**

  <p align="center">
    <img src="./Lab 01/Images/Lab01 photo5 subtract.png" alt="Subtraction" width="600px"/>
  </p>

- ➗ **Division**

  <p align="center">
    <img src="./Lab 01/Images/Lab01 devide.png" alt="Division" width="600px"/>
  </p>

- ✖️ **Multiplication**

  <p align="center">
    <img src="./Lab 01/Images/Lab01 Multiply.png" alt="Multiplication" width="600px"/>
  </p>

---

### ✅ **Task 06: Product Billing System**
This task accepts:
- **Product Price**
- **Product Quantity**

The program calculates the **total cost** and includes **validation**:
- If input is correct, shows result.
- If **price is negative**, displays a validation error.

📸 Correct Input:  
<p align="center">
  <img src="./Lab 01/Images/lab06 Correction.png" alt="Correct Input" width="600px"/>
</p>

📸 Validation Error:  
<p align="center">
  <img src="./Lab 01/Images/Lab01 photo6 Validation.png" alt="Validation Error" width="600px"/>
</p>

---

## 🛠️ Tools Used
- Language: **C++**
- Compiler: **G++ / Dev-C++ / Code::Blocks**
- Platform: **Console-based Application**

---


---

## 📎 Note
This lab project is designed for **beginners** in C++ and covers the basics of:
- I/O
- Arithmetic operations
- Conditionals
- Data validation
- Functions

---

## =================================================== Lab 02 ============================================
## Task 1:  Default Constructor — Employee 
  ##       Management System
  Create a class named Employee for a basic employee management system.<br/> 
The class should have the following private data members:<br/>
❑ id (int)<br/>
❑ name (string)<br/>
❑ salary (float)<br/>
Implement a default constructor that initializes:<br/>
❑ id = 0<br/>
❑ name = "Not Assigned“<br/>
❑ salary = 0.0<br/>
Also include:<br/>
❑ A displayDetails() method that shows employee details.<br/>
❑ A main() function that creates an object using the default constructor and displays 
its information.<br/>

## 📸 OUT PUT
<p align="center">
  <img src="./Lab 02/Images/4.png" alt="Validation Error" width="600px"/>
</p>

---

## Task 2: Parameterized Constructor — Bank 
##          Account Initialization
Create a class named BankAccount that manages account information.<br/>
It should have the following private data members:<br/>
❑ accountNumber (string)<br/>
❑ accountHolder (string)<br/>
❑ balance (double)<br/>
Implement a parameterized constructor to initialize all three values 
when a new account is created:<br/>
❑ id = 0<br/>
❑ name = "Not Assigned“<br/>
❑ salary = 0.0<br/>
Also include:<br/>
❑ A method showAccountDetails() to display the account information..<br/>
❑ In main(), create an object of BankAccount using user-defined values and display 
the account details.<br/>
## 📸 OUT PUT
<p align="center">
  <img src="./Lab 02/Images/2.png" alt="Validation Error" width="600px"/>
</p>

---
## Constructor Overloading
Create a class named Rectangle with the following private data members:<br/>
❑ length (float) <br/>
❑ width (float) <br/>
Overload the constructor as follows:<br/>
❑ A default constructor that initializes both length and width to 1.0.<br/>
❑ A parameterized constructor that takes two float values to initialize length and 
width.<br/>
❑ A single-parameter constructor that sets both length and width to the same value 
(creating a square).<br/>
Also include:<br/>
❑ A method area() to return the area of the rectangle and a display() method.<br/> 
❑ In main(), create three objects using all constructor versions and display their 
dimensions and area.<br/>

## 📸 OUT PUT
<p align="center">
  <img src="./Lab 02/Images/3.png" alt="Validation Error" width="600px"/>
</p>

---

## Task 4: Destructor
Create a class called Locker that represents a bank locker.<br/>
◼ The constructor should print:<br/>
"Locker allocated to customer.“<br/>
◼ The destructor should print:<br/>
"Locker returned by customer.“<br/>
Inside your main() function:<br/>
❑ Create one locker object inside a block { } to observe automatic 
destructor call.<br/>
❑ Create another locker using new and release it using delete.<br/>

## 📸 OUT PUT
<p align="center">
  <img src="./Lab 02/Images/1.png" alt="Validation Error" width="600px"/>
</p>

---
## ========================================================== Lab 03 =================================================

## Task 1: Copy Constructor –Shallow Copy
Create a BankAccount class using a pointer to store the 
balance.<br/>
◼ Dynamically allocate memory in the constructor.<br/>
◼ Use the default copy constructor by copying an object.<br/>
◼ Modify the copied object.<br/>
◼ Display both balances to show the side effects of shared memory.<br/>
◼ Observe how the destructor is called twice on the same memory<br/>
location, causing a runtime error or undefined behavior (if not
handled safely).<br/>

## 📸 OUT PUT
<p align="center">
  <img src="./Lab 03/Images/1.png" alt="Validation Error" width="600px"/>
</p>

---

## Task 2: Copy Constructor –Deep Copy
Update the BankAccount class (created in task 1) to 
include a deep copy constructor.<br/>
◼ Ensure each object gets its own separate copy of the balance.<br/>
◼ After copying and modifying one object, show that the original<br/>
remains unchanged.<br/>
◼ Use a destructor to safely free memory without double deletion.<br/>

## 📸 OUT PUT
<p align="center">
  <img src="./Lab 03/Images/2.png" alt="Validation Error" width="600px"/>
</p>

---

## Task 3: Single Inheritance

Create a base class Person with the following properties:<br/>
◼ string name, int age.<br/>
Then, create a derived class Student that inherits from Person and adds the
following property:<br/>
◼ int rollNo.<br/>
## Implement the following functionality:
◼ A method setPerson(string, int) in the Person class to initialize name and
age.<br/>
◼ A method setStudent(string, int, int) in the Student class to set the values
of name, age, and rollNo.<br/>
◼ Important: While setting values in setStudent, you must call the setPerson
method from the Person class to set the name and age properties.<br/>
◼ A method showPerson() in the Person class to display the name and age.<br/>
◼ A method showStudent() in the Student class to display the name, age,
and rollNo.<br/>


## 📸 OUT PUT
<p align="center">
  <img src="./Lab 03/Images/3.png" alt="Validation Error" width="600px"/>
</p>

---

## Task 4: Constructor in Inheritance
Create a base class Shape with a constructor that prints "Shape 
constructor called" when it is invoked.<br/>
Then, create a derived class Rectangle that inherits from Shape and 
has its own constructor. The constructor of Rectangle should print 
"Rectangle constructor called" when invoked.<br/>
## Demonstrate the following:
◼ When an object of Rectangle is created, observe the order in which 
the constructors are called.<br/>
◼ Implement constructor calls in main() to see that the base class 
constructor is called before the derived class constructor.<br/>


## 📸 OUT PUT
<p align="center">
  <img src="./Lab 03/Images/4.png" alt="Validation Error" width="600px"/>
</p>

---

## ========================================================== Lab 04 ==================================================

## Task: 01 – Single Inheritance
You are building a student information system. Create a 
Person class and a Student class that inherits from it.<br/>
◼ Classes & Requirements:<br/>
❑ Person:<br/>
Attributes: name, age<br/>
 Functions: display_person_info()<br/>
❑ Student (inherits Person):<br/>
Additional Attribute: student_id<br/>
Additional Function: display_student_info()<br/>
◼ Tasks for Students:<br/>
❑ Define both classes using single inheritance.<br/>
❑ Accept input from the user for all fields.<br/>
❑ Display complete student information using both functions.<br/>

## 📸 OUT PUT
<p align="center">
  <img src="./Lab 04/Images/1.png" alt="Validation Error" width="600px"/>
</p>

---

## Task: 02 – Multilevel Inheritance
You are designing a payroll system.<br/>
◼ Classes & Requirements:<br/>
❑ Person:<br/>
Attributes: name, age<br/>
 Function: display_person()<br/> 
❑ Employee (inherits Person):<br/>
Additional Attribute: employee_id<br/>
Additional Function: display_employee()<br/>
❑ Manager (inherits Employee):<br/>
Additional Attribute: department<br/>
Function: display_manager()<br/>
◼ Tasks for Students:<br/>
❑ Implement multilevel inheritance.<br/>
❑ Accept input and display complete info using all display 
functions.<br/>

<p align="center">
  <img src="./Lab 04/Images/2.png" alt="Validation Error" width="600px"/>
</p>

---

## Task: 03 – Hierarchical Inheritance

In an organization, Employee is a base class. Developer and 
Designer inherit from it.<br/>
◼ Classes & Requirements:<br/>
❑ Employee:<br/>
Attributes: name, salary<br/>
 Function: display_employee()<br/> 
❑ Developer (inherits Employee):<br/>
Additional Attribute: programming_language<br/>
Additional Function: display_developer()<br/>
❑ Designer (inherits Employee):<br/>
Additional Attribute: design_tool<br/>
Function: display_designer()<br/>
◼ Tasks for Students:<br/>
❑ Implement hierarchical inheritance.<br/>
❑ Create objects of both derived classes and display all information.<br/>

<p align="center">
  <img src="./Lab 04/Images/3.png" alt="Validation Error" width="600px"/>
</p>

---

## Task: 04 – Multiple Inheritance

Build a device that behaves as both a Printer and a Scanner.<br/>
◼ Classes & Requirements:<br/>
❑ Printer:<br/>
 Function: print_document ()<br/> 
❑ Scanner<br/>
Function: scan_document()<br/>
❑ Photocopier (inherits from Printer and Scanner):<br/>
Function: photocopy() (calls both above functions)<br/>
Tasks for Students:<br/>
❑ Implement multiple inheritance.<br/>
❑ Create an object of Photocopier and call all functions.<br/>

<p align="center">
  <img src="./Lab 04/Images/4.png" alt="Validation Error" width="600px"/>
</p>

---
======================================================== Lab 05 ===================================

# 🧩 Object-Oriented Concepts — Aggregation & Composition

---

### ✅ **Task 01: Aggregation**
This task demonstrates **Aggregation**, which represents a **“has-a” relationship** between classes.  
- A class contains the reference of another class but both can exist **independently**.  
- Example: A *Department* may have *Students*, but deleting a department does not delete the student.  

📸 Output Image:  
<p align="center">
  <img src="./Lab 05/1.png" width="600px"/>
</p>

---

### ✅ **Task 02: Composition**
This task demonstrates **Composition**, which also represents a **“has-a” relationship**, but it is **stronger** than aggregation.  
- If the container class is destroyed, the contained objects are also destroyed.  
- Example: A *House* contains *Rooms*. If the house is destroyed, the rooms no longer exist.  

📸 Output Image:  
<p align="center">
  <img src="./Lab 05/2.png" width="600px"/>
</p>

---

=========================================================== Lab 06 & 07 ====================================

# 🔄 Function Overloading, Overriding & Operator Overloading

---

### ✅ **Task 01: Function Overloading**
This program shows **Function Overloading**, where multiple functions share the same name but differ in:  
- Number of parameters  
- Types of parameters  

📸 Output Image:  
<p align="center">
  <img src="./Lab 06&07/1.png" width="600px"/>
</p>

---

### ✅ **Task 02: Function Overriding**
This program demonstrates **Function Overriding** using **Inheritance**.  
- A derived class provides a new definition for a base class function.  
- Useful for **runtime polymorphism**.  

📸 Output Image:  
<p align="center">
  <img src="./Lab 06&07/2.png" width="600px"/>
</p>

---

### ✅ **Task 03: Shape Finder (Override & Declaration)**
This task uses **Function Overriding** to calculate shapes:  
- Rectangle  
- Circle  

📸 Output Image:  
<p align="center">
  <img src="./Lab 06&07/3.png" width="600px"/>
</p>

---

### ✅ **Task 04: Operator Overloading for Complex Numbers**
This task implements **Operator Overloading**:  
- Overloads operators to perform addition, subtraction, etc. on **complex numbers**.  
- Shows how user-defined types can behave like built-in types.  

📸 Output Image:  
<p align="center">
  <img src="./Lab 06&07/4.png" width="600px"/>
</p>

---

============================== Lab 08 =============================================

# ⚙️ Advanced Concepts — Virtual & Friend Functions

---

### ✅ **Task 01: Pure Virtual Function**
This program demonstrates **Abstract Classes** using a **Pure Virtual Function**.  
- Ensures derived classes implement their own version.  
- Provides **runtime polymorphism**.  

📸 Output Image:  
<p align="center">
  <img src="./Lab 08/1.png" width="600px"/>
</p>

---

### ✅ **Task 02: Friend Function**
This task shows how a **Friend Function** can access private data of a class.  
- Breaks encapsulation intentionally for flexibility.  
- Useful for operator overloading and utility functions.  

📸 Output Image:  
<p align="center">
  <img src="./Lab 08/2.png" width="600px"/>
</p>

---

===================================== Lab 09 =================================================

# 📌 Static Members in C++

---

### ✅ **Task 01: Static Member Function**
This program demonstrates **Static Members**:  
- A **static variable** is shared among all objects of a class.  
- A **static function** can be called without creating an object.  

📸 Output Image:  
<p align="center">
  <img src="./Lab 09/1.png" width="600px"/>
</p>

---

===================================== Lab 10 ===============================================

# 📂 File Handling in C++

---

### ✅ **Task 01: Read, Write, Delete Files**
Demonstrates file operations like:  
- Writing data  
- Reading data  
- Deleting file contents  

📸 Output Image:  
<p align="center">
  <img src="./Lab10/1.png" width="600px"/>
</p>
📸 File Image:
<p align="center">
  <img src="./Lab10/1a.png" width="600px"/>
</p>

---

### ✅ **Task 02: Count Number of Lines**
This program counts the **number of lines** in a text file.  

📸 Output Image:  
<p align="center">
  <img src="./Lab10/2.png" width="600px"/>
</p>

---

### ✅ **Task 03: Add Student Details**
Appends student details into a text file for **record-keeping**.  

📸 Output Image:  
<p align="center">
  <img src="./Lab 10/3.png" width="600px"/>
</p>

📸 File Image
<p align="center">
  <img src="./Lab10/3a.png" width="600px"/>
</p>

---

### ✅ **Task 04: Copy File Content**
Copies the content from one file to another.  

📸 Output Image:  
<p align="center">
  <img src="./Lab10/4.png" width="600px"/>
</p>



---

============================================================= Lab 11 ======================================

# 📝 File Pointers in C++

---

### ✅ **Task 01: tellp()**
Shows how to get the current **put pointer** position in a file.  

📸 Output Image:  
<p align="center">
  <img src="./Lab 11/1.png" width="600px"/>
</p>

---

### ✅ **Task 02: tellg()**
Shows how to get the current **get pointer** position in a file.  

📸 Output Image:  
<p align="center">
  <img src="./Lab 11/2.png" width="600px"/>
</p>

---

### ✅ **Task 03: seekp()**
Moves the **put pointer** to a specified location in a file.  

📸 Output Image:  
<p align="center">
  <img src="./Lab 11/2.png" width="600px"/>
</p>

---

### ✅ **Task 04: seekg()**
Moves the **get pointer** to a specified location in a file.  

📸 Output Image:  
<p align="center">
  <img src="./Lab 11/2.png" width="600px"/>
</p> 

---

========================================================= Lab 12 ==============================================

# ⚡ Exception Handling in C++

---

### ✅ **Task 01: Exception Handling in Calculator**
Implements exception handling to prevent invalid operations in a **Calculator Program**.  

📸 Output Image:  
<p align="center">
  <img src="./Lab 12/1.png" width="600px"/>
</p>

---

### ✅ **Task 02: Exception Handling in Division**
Handles division operations safely by checking for:  
- Division by zero  
- Invalid input  

📸 Output Image:  
<p align="center">
  <img src="./Lab 12/2.png" width="600px"/>
</p>

---

================================================== Lab 13 ==================================================

# 🧮 Templates in C++

---

### ✅ **Task 01: Calculator using Templates**
This task uses **C++ Templates** to create a calculator that works with multiple data types (**int, float, double**).  

📸 Output Image:  
<p align="center">
  <img src="./Lab 13/1.png" width="600px"/>
</p>

---

## 👨‍💻 Author

**Majid Ali**