<p align="center">
  <img src="https://user-images.githubusercontent.com/50052600/196072481-d6070db0-93aa-4d6a-a9c7-e014c04ec27f.png" />
</p>

<h1 align="center">
 Libft
</h1>

<p align="center">
	<b><i>My first library in C : a collection of functions that will be useful tools for 42 Cursus.</i></b><br>
</p>

<p align="center">
	<img alt="GitHub code size in bytes" src="https://img.shields.io/github/languages/code-size/mewmewdevart/libft?color=6272a4" />
	<img alt="Main language" src="https://img.shields.io/github/languages/top/mewmewdevart/libft?color=6272a4"/>
	<img alt="Main language" src="https://img.shields.io/github/license/mewmewdevart/libft?color=6272a4"/>
</p>

## 💡 About the project

> _Building my own basic C static library, which will be used throughout the rest of the program (42 Cursus). The ```ft_*``` functions mostly mimic the behavior of the traditional C functions, and must be written using at most ```write()``` and ```malloc()```.

<p align="center">
	📌 In the premium libft folder is the most up-to-date version of the library with functions learned in others projects.
</p>


<p align="center">
	<a href="premium_libft">See my custom-made library (up up version)🚀🌎</a> 
</p>

## 🛠️ Usage

### Requirements

This project requires [GNU Compiler Collection](https://gcc.gnu.org/) and [GNU Make](https://www.gnu.org/software/make/) compiler. <br>
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

Run this command in your terminal :

```shell
$ make
```

**2. Using it in your code**

To use the library functions in your code, simply include its header:

```C
#include "libft.h"
```

If you try to compile your .c files with cc using "cc example.c", you will get an undefined symbol error for libft functions.
You have to tell the file which library it's using:  ↓

```shell
$ cc example.c libft.a -o prog_example
```

That's it. Now you can run it using ./prog_example .

## 📋 Credits

* [Acelera/Rodsmade](https://github.com/rodsmade/Projets_42_SP/)
* [libftTester/Tripouille](https://github.com/Tripouille/libftTester)
* [libft-war-machine/y3ll0w42](https://github.com/y3ll0w42/libft-war-machine)

<p align="center"> Developed with love 💜 by Larissa Cristina Benedito (Mewmew/Larcrist). </p>
