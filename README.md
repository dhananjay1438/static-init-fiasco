# 🛠️ Static Initialization Order Fiasco - Issue & Fix 🚀

## 📌 Overview
This repository demonstrates a critical issue in C++ called **Static Initialization Order Fiasco**, where global/static objects across different `.cpp` files initialize in an **unpredictable order**, leading to **undefined behavior, crashes, or incorrect program execution**.

We also implement a **minimal fix** using **Meyers' Singleton (`getInstance()`)** to ensure proper initialization order.

---

## ❌ The Problem: Static Initialization Order Fiasco

### ⚠️ What is the Issue?
- In C++, **global/static objects are initialized before `main()` starts**, but **their order of initialization across separate `.cpp` files is undefined**.
- If a **global object depends on another global object** that hasn't been initialized yet, it can cause:
  - ❌ **Crashes (segmentation faults)**
  - ❌ **Garbage values (uninitialized access)**
  - ❌ **Silent failures (wrong output without errors)**

---

## 🔍 How the Issue Occurs
In this project, we demonstrate the issue using two classes:
1. **`ConfigManager`** (a global object that loads configuration settings).
2. **`Database`** (a global object that reads configurations from `ConfigManager` during initialization).

Since the **initialization order of `ConfigManager` and `Database` is undefined**, `Database` **may initialize first** and try to access uninitialized data from `ConfigManager`, leading to **incorrect behavior or crashes**.

### ⚠️ Symptoms of the Issue:
- The program may crash at runtime.
- The database connection may use **empty or garbage values**.
- The issue may not appear immediately, making it **hard to debug**.

---

## ✅ The Fix: Using Meyers' Singleton

### 🔹 What We Did to Fix It
To ensure **`ConfigManager` is always initialized before `Database`**, we applied the following minimal fix:
- **Removed the global `ConfigManager` object** and replaced it with **Meyers' Singleton (`getInstance()`)**.
- **Ensured `ConfigManager` is always initialized before use**.
- **Kept the structure almost the same** while fixing the issue with **minimal changes**.

### 🔹 Why This Fix Works:
- **Ensures correct initialization order** without requiring manual intervention.
- **Eliminates global static initialization dependencies**.
- **Thread-safe since C++11**, making it safe for multi-threaded applications.

