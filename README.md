# Memory Tracker (C++)

A simple yet powerful memory tracking utility written in C++ that simulates
manual memory allocation and deallocation tracking using tagged identifiers.
This project is designed to help understand memory usage patterns and detect
logical memory leaks in system-level applications.

---

## ✨ Features
- Tagged memory allocation tracking
- Safe deallocation handling
- Allocation summary and reporting
- Warning system for invalid deallocations
- Clean and extensible design

---

## 🧠 Use Case
This tracker models how low-level systems monitor memory usage internally,
making it useful for learning:
- Debugging memory-heavy applications
- Tracking logical memory leaks
- Understanding allocation lifecycles

---

## 🛠️ Technologies Used
- **Language:** C++
- **Standard Library:** `unordered_map`
- **Concepts:** Memory management, debugging tools, encapsulation

---

## ▶️ How to Run
```bash
g++ tracker.cpp -o memory_tracker
./memory_tracker
