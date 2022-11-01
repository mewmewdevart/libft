<p align="center">
  <img src="https://user-images.githubusercontent.com/50052600/196072481-d6070db0-93aa-4d6a-a9c7-e014c04ec27f.png" />
</p>

<h1 align="center">
 Libft
</h1>

<p align="center">
	<b><i>My first library in C : a collection of functions that will be a useful tool for 42 Cursus.</i></b><br>
</p>

<p align="center">
	<img alt="GitHub code size in bytes" src="https://img.shields.io/github/languages/code-size/mewmewdevart/libft?color=6272a4" />
	<img alt="Main language" src="https://img.shields.io/github/languages/top/mewmewdevart/libft?color=6272a4"/>
	<img alt="Main language" src="https://img.shields.io/github/license/mewmewdevart/libft?color=6272a4"/>
	<img alt="Number of lines" src="https://img.shields.io/tokei/lines/github/mewmewdevart/libft?color=6576AA"/>
</p>

## 💡 About the project

> _Building my own basic C static library, which will be used throughout the rest of the program (42 Cursus). The ```ft_*``` functions mostly mimic the behaviour of the traditional C functions, and must be written using at most ```write()``` and ```malloc()```.

<p align="center">
	📌 In the libft folder is the most up-to-date version of the library with functions learned in other projectsre.
</p>


<p align="center">
	<a href="src/README.md">See more about this project! 🚀🌎</a> 
</p>

## 🛠️ Usage

### Requirements

The function is written in C language and thus needs the **`make`** and **`gcc` compiler** and some standard **C libraries** to run. <br>
❗️| Make sure you have all the required tools installed on your local machine then continue with these steps.

### Instructions

**0. Download the archives**

Download the archives and go to the standard_library directory:

```bash
# Clone the repository
$ git clone https://github.com/mewmewdevart/libft
	
# Enter into the directory
$ cd libft/standard_libft/
```

**1. Compiling the library**

Run the command in your terminal :

```shell
$ make
```

**2. Using it in your code**

To use the library functions in your code, simply include its header:

```C
#include "libft.h"
```

If you try to compile your .c files with cc using "cc example.c" you will get an undefined symbol error for libft functions.

You have to tell the file which library it's using:  ↓
```shell
$ cc example.c libft.a -o prog_example
```
That's it. Now run it using ./prog_example

## 📋 Credits

* [Acelera/Rodsmade](https://github.com/rodsmade/Projets_42_SP/)
* [libftTester/Tripouille](https://github.com/Tripouille/libftTester)
* [libft-war-machine/y3ll0w42](https://github.com/y3ll0w42/libft-war-machine)

<p align="center"> Developed with love 💜 by Larissa Cristina Benedito (Mewmew/Larcrist). </p>
