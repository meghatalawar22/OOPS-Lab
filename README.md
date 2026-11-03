# OOPS Lab Programs

## Student Details

| Details | Information |
|---|---|
| **Name** | Megha Talawar |
| **Roll No** | 337 |
| **Division** | C |
| **SRN** | 01FE23BEC131 |
| **Semester** | 7th |

---

## About the Repository

This repository contains the programs completed as part of the **Object Oriented Programming using C++ (OOPS)** laboratory.

The programs demonstrate fundamental and advanced concepts of Object-Oriented Programming using C++. Each program is organized into appropriate folders and includes relevant comments and explanations for better understanding.

---

## OOPS Concepts Covered

### 1. Classes and Objects

**Class:**  
A class is a user-defined data type in C++ that combines data members and member functions into a single unit. It acts as a blueprint for creating objects.

**Object:**  
An object is an instance of a class. It represents a real-world entity and is used to access the data members and member functions of the class.

---

### 2. Constructors

A constructor is a special member function of a class that is automatically invoked when an object of the class is created. It is mainly used to initialize the data members of an object.

A constructor:
- Has the same name as the class.
- Does not have a return type.
- Is automatically called when an object is created.
- Can be overloaded.

---

### 3. Static Data Members

A static data member is a data member that belongs to the class rather than to individual objects. Only one copy of a static data member exists and it is shared by all objects of the class.

Static data members are declared using the `static` keyword and are generally defined outside the class.

---

### 4. Destructors

A destructor is a special member function that is automatically called when an object is destroyed. It is mainly used to perform cleanup operations and release resources used by an object.

A destructor:
- Has the same name as the class preceded by `~`.
- Does not have a return type.
- Does not take arguments.
- Cannot be overloaded.
- Is automatically called when an object goes out of scope.

---

### 5. Inheritance

Inheritance is an Object-Oriented Programming mechanism in which a new class, called the **derived class**, acquires the properties and behaviors of an existing class, called the **base class**.

Inheritance promotes code reusability and allows a derived class to extend or modify the functionality of the base class.

Common types of inheritance include:
- Single Inheritance
- Multilevel Inheritance
- Multiple Inheritance
- Hierarchical Inheritance
- Hybrid Inheritance

---

### 6. Runtime Polymorphism

Runtime polymorphism is a feature of C++ in which the function to be executed is determined at runtime rather than at compile time.

It is achieved through function overriding and virtual functions. It allows a base class pointer or reference to call the overridden function of a derived class.

---

### 7. Abstract Class

An abstract class is a class that contains at least one pure virtual function. A pure virtual function is declared by assigning `= 0` in its declaration.

Objects of an abstract class cannot be created directly. Abstract classes are mainly used as base classes to provide a common interface for derived classes.

---

### 8. Operator Overloading

Operator overloading is a feature in C++ that allows existing operators such as `+`, `-`, `*`, and `==` to be redefined to perform specific operations on user-defined data types such as classes and objects.

It makes operations on objects more natural and readable.

---

### 9. String Operator Overloading

String operator overloading allows operators to perform operations on string objects.

For example, the `+` operator can be overloaded to concatenate two strings, while other operators can be overloaded to compare or manipulate string objects.

It demonstrates how operators can be customized for user-defined string classes.

---

### 10. Exception Handling

Exception handling is a mechanism in C++ used to handle runtime errors and maintain the normal flow of program execution.

C++ provides three main keywords for exception handling:

- `try` – Defines a block of code where exceptions may occur.
- `throw` – Used to generate an exception.
- `catch` – Handles the exception thrown by the try block.

Exception handling helps make programs more reliable and prevents unexpected termination.

---

### 11. Virtual Base Class

A virtual base class is used in multiple inheritance to avoid duplicate copies of a common base class when a class is inherited through multiple paths.

It is declared using the `virtual` keyword during inheritance.

Virtual base classes help resolve ambiguity in diamond-shaped inheritance and ensure that only one shared copy of the common base class is inherited.

---

### 12. Function Overriding

Function overriding occurs when a derived class provides its own implementation of a member function that is already defined in its base class.

The overridden function in the derived class has the same function signature as the base class function.

Function overriding is commonly used to achieve runtime polymorphism with virtual functions.

---

## Repository Structure

```text
OOPS-Lab
│
├── README.md
│
├── 01_Classes_and_Objects
│   ├── program1.cpp
│   ├── program2.cpp
│   ├── program3.cpp
│   └── ...
│
├── 02_Constructors
│   ├── constructor1.cpp
│   ├── constructor2.cpp
│   └── ...
│
├── 03_Static_Data_Members
│   ├── static_data_member.cpp
│   └── ...
│
├── 04_Destructors
│   ├── destructor1.cpp
│   └── ...
│
├── 05_Inheritance
│   ├── single_inheritance.cpp
│   ├── multilevel_inheritance.cpp
│   └── ...
│
├── 06_Runtime_Polymorphism_Abstract_Class_Operator_Overloading
│   ├── runtime_polymorphism.cpp
│   ├── abstract_class.cpp
│   ├── operator_overloading.cpp
│   └── ...
│
├── 07_String_Operator_Overloading_Exception_Handling
│   ├── string_operator_overloading.cpp
│   ├── exception_handling.cpp
│   └── ...
│
└── 08_Virtual_Base_Class_Function_Overriding
    ├── virtual_base_class.cpp
    ├── function_overriding.cpp
    └── ...
```

---

## Programming Language

**C++**

---

## Purpose

The purpose of this repository is to maintain, organize, and document all programs completed as part of the OOPS laboratory.

Each program demonstrates a particular Object-Oriented Programming concept and includes appropriate comments and explanations to improve understanding of the concepts.

This repository will be periodically updated with additional programs and concepts covered during the semester.
