# 📘 C File I/O – Task 0

## Description
Task 0: **Tread lightly, she is near**  

This program reads a file and prints its content to `stdout`. It handles errors if the file cannot be opened or if no filename is provided.

---

## 📂 Files and Functions

| File | Function | Description |
|------|---------|-------------|
| `0-read_textfile.c` | `int main(int argc, char *argv[])` | Reads a file character by character and prints it to `stdout`. Returns 0 on success, 1 on failure. |

---

## 🎯 Usage

```bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 0-read_textfile.c -o read_file
./read_file filename.txt
