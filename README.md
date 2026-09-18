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

This repository contains the programs completed as part of the
**Object Oriented Programming using C++ (OOPS)** laboratory.

The programs demonstrate the fundamental concepts of
Object-Oriented Programming using C++.

## OOPS Concepts Covered

### 1. Classes and Objects

**Class:**  
A class is a user-defined data type in C++ that combines data
members and member functions into a single unit. It acts as a
blueprint for creating objects.

**Object:**  
An object is an instance of a class. It represents a real-world
entity and is used to access the data members and member functions
of the class.

---

### 2. Constructors

A constructor is a special member function of a class that is
automatically invoked when an object of the class is created.

It is mainly used to initialize the data members of an object.

A constructor:

- Has the same name as the class.
- Does not have a return type.
- Is automatically called when an object is created.
- Can be overloaded.

---

### 3. Static Data Members

A static data member is a data member that belongs to the class
rather than to individual objects.

Only one copy of a static data member is created and it is shared
by all objects of the class.

Static data members are declared using the `static` keyword and
are generally defined outside the class.

---

### 4. Destructors

A destructor is a special member function that is automatically
called when an object is destroyed.

It is mainly used to perform cleanup operations and release
resources used by an object.

A destructor:

- Has the same name as the class preceded by `~`.
- Does not have a return type.
- Does not take arguments.
- Cannot be overloaded.
- Is automatically called when an object goes out of scope.

---

### 5. Inheritance

Inheritance is an Object-Oriented Programming mechanism in which
a new class, called the **derived class**, acquires the properties
and behaviors of an existing class, called the **base class**.

Inheritance promotes **code reusability** and allows a derived
class to extend or modify the functionality of the base class.

Common types of inheritance include:

- Single Inheritance
- Multilevel Inheritance
- Multiple Inheritance
- Hierarchical Inheritance
- Hybrid Inheritance

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
└── 05_Inheritance
    ├── single_inheritance.cpp
    ├── multilevel_inheritance.cpp
    └── ...
