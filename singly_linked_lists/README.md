# 📌 Singly Linked Lists

This project covers the basics of **singly linked lists** in C. Each task demonstrates how to manipulate nodes, add elements, and iterate through the list.

---

## ✅ Task 0: print_list
- **File:** `0-print_list.c`
- **Description:** Prints all elements of a `list_t` linked list.
- **Features:**
  - Handles `NULL` strings by printing `[0] (nil)`.
  - Returns the number of nodes.
  - Fully formatted according to **Betty style**.
  
---

## ✅ Task 1: list_len
- **File:** `1-list_len.c`
- **Description:** Returns the number of elements in a `list_t` linked list.
- **Features:**
  - Iterates through all nodes counting them.
  - `1-main.c` provided for local testing (not uploaded).

---

## ✅ Task 2: add_node
- **File:** `2-add_node.c`
- **Description:** Adds a new node at the **beginning** of the list.
- **Features:**
  - Duplicates the string using `strdup`.
  - Updates the head pointer to the new node.
  - Returns the pointer to the new node or `NULL` if allocation fails.

---

## ✅ Task 3: add_node_end
- **File:** `3-add_node_end.c`
- **Description:** Adds a new node at the **end** of the list.
- **Features:**
  - Handles empty list case by setting the new node as head.
  - Iterates to the last node before inserting.
  - Returns the pointer to the new node or `NULL` if allocation fails.

---

## 🎯 Betty Style Compliance
- All files follow **Betty coding style**:
  - Tabs for indentation.
  - No spaces at the start of lines.
  - Proper formatting for functions and headers.

---

## 📂 Notes
- Only `.c` files and `lists.h` are uploaded for evaluation.
- `*_main.c` files are for local testing and **not uploaded**.
