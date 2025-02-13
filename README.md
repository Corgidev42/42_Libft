# Libft - Your Own C Library

## 📌 Description
**Libft** is a custom C library containing a comprehensive set of utility functions commonly used in C programming. This project is part of the **42 School** curriculum and aims to help students master fundamental programming concepts such as memory management, string manipulation, and linked lists.

---

## 🎮 Features

- 🔢 **Conversion Functions** (ft_atoi, ft_itoa)
- 📝 **String Handling** (ft_strlen, ft_strchr, ft_strrchr, ft_strdup, ft_strncmp, ft_strnstr, ft_strlcpy, ft_strlcat, ft_strjoin, ft_strtrim, ft_substr, ft_strmapi, ft_striteri, ft_split)
- 🔤 **Character Checking & Conversion** (ft_isalpha, ft_isdigit, ft_isalnum, ft_isascii, ft_isprint, ft_toupper, ft_tolower)
- 🧠 **Memory Manipulation** (ft_memset, ft_memcpy, ft_memmove, ft_memchr, ft_memcmp, ft_bzero, ft_calloc)
- 🖨 **File Descriptor Output** (ft_putchar_fd, ft_putstr_fd, ft_putendl_fd, ft_putnbr_fd)
- 🔗 **Linked List Operations** (ft_lstnew, ft_lstadd_front, ft_lstadd_back, ft_lstsize, ft_lstlast, ft_lstdelone, ft_lstclear, ft_lstiter, ft_lstmap)

---

## 🛠 Compilation and Usage

### 🔧 **Compilation**
```sh
make
```
This will generate the `libft.a` static library file.

### ▶️ **Usage**
To use `libft` in your project:
```c
#include "libft.h"
```
And compile your project with:
```sh
gcc your_file.c -L. -lft
```

---

## 📂 Project Structure

```
libft/
├── (Source files for all the functions)
├── libft.h
├── Makefile
├── README.md
```

---

## 📜 Author
- **vbonnard** (<vbonnard@student.42perpignan.fr>)

---

## 📌 Note
This project was developed as part of **42 School**. Feel free to use it as a foundation for your own projects! 🚀

