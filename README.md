# 🌳 Binary Tree Traversal Project in C

This repository contains a **C implementation of Binary Tree operations**, including all traversal types —  
**Inorder**, **Preorder**, **Postorder**, and **Level-Order (Breadth-First)**.  
It uses a **queue-based helper module** for level-order traversal and a **modular code structure** to separate tree logic, queue utilities, and the main driver program.

---

## 📂 Project Structure
<details>
<summary>Click to expand</summary>

├── main.c # Driver file to test tree operations
├── trees.c # Binary tree functions (create, insert, traverse)
├── trees.h # Tree header file with structure & prototypes
├── queue4trees.c # Queue implementation for level-order traversal
├── queue4trees.h # Queue function declarations
└── README.md

</details>

---

## ⚙️ Features

✨ Dynamic node creation and insertion  
✨ All tree traversal algorithms implemented  
✨ Queue-based level-order (BFS) traversal  
✨ Modular, maintainable design with header/source separation  
✨ Simple build process using GCC  

---

## 🧠 Concepts Demonstrated

- **Binary Trees** — hierarchical data structure  
- **Recursive Traversals** — preorder, inorder, postorder  
- **Queue Implementation** — used for level-order traversal  
- **Modular Programming** — multiple `.c` / `.h` files  
- **C Build Process** — preprocessing, compiling, linking  

---

## 🚀 Build & Run

Compile all modules together:

```bash
gcc main.c trees.c queue4trees.c -o trees
./trees

