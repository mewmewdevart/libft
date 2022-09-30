<h1 align="center">
 libft [⚠️ In Development] 
</h1>

<p align="center">
	<b><i>My first library in C : a collection of functions that will be a useful tool for 42 Cursus.</i></b><br>
</p>

<p align="center">
	<img alt="GitHub code size in bytes" src="https://img.shields.io/github/languages/code-size/mewmewdevart/libft?color=6272a4" />
	<img alt="Main language" src="https://img.shields.io/github/languages/top/mewmewdevart/libft?color=6272a4"/>
	<img alt="Main language" src="https://img.shields.io/github/license/mewmewdevart/libft?color=6272a4"/>
</p>

## 💡 About the project

> _Building my own basic C static library, which will be used throughout the rest of the program (42 Cursus). The ```ft_*``` functions mostly mimic the behaviour of the traditional C functions, and must be written using at most ```write()``` and ```malloc()```. 

<p align="center">
	<a href="src/README.md">See more about this project! 🚀🌎</a> 
</p>

## 🛠️ Usage

### Requirements

The function is written in C language and thus needs the `make` and **`gcc` compiler** and some standard **C libraries** to run.

### Instructions

**1. Compiling the library**

To compile, download the archives, go to the library path and run the command in your terminal :

```shell
$ make
```

**2. Using it in your code**

To use the library functions in your code, simply include its header:

```C
#include "libft.h"
```

And don't forget in to use the command ↓ to "connect" your main.c with the generated static library (with functions) :

```shell
$ gcc main.c -o main libft.a
```

## 📋 Credits

* [Acelera/Rodsmade](https://github.com/rodsmade/Projets_42_SP/)
* [libftTester/Tripouille](https://github.com/Tripouille/libftTester)
* [libft-war-machine/y3ll0w42](https://github.com/y3ll0w42/libft-war-machine)

<p align="center"> Developed with love 💜 by Larissa Cristina Benedito (Mewmew/Larcrist). </p>
