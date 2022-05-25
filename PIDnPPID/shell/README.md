# Simple Shell

## Introduction 🚀
simple shell is a project designed to emulate the operation of a shell, which contains some of its most basic characteristics, such as : Handle `PATH`, Handle command lines with `arguments`.

## Description 📖
This is the  first version of a super simple shell that can run commands with their full path, without any argument.Its a program of command line arguements. This This shell takes the keyboard commands and delivers them to the system to be executed. some built-in commands implement: exit, env, help, cd.

## Compillation & Run commands 🔧

To compile:
```
	gcc -Wall -Werror -Wextra -pedantic *.c -o shell
```
To execute:
```
	./shell


## Sample Run 💻
* run the executable as `./shell`
* Enter basic commands like: `ls`, you can add flags along with `ls` command such as `-l`, `-la`(`ls -l`, `ls -la`)
* press enter after entering the command
* to end the execution of the `simple shell` program press `ctrl + d` or write the word `exit`

Interactive mode:
```
$ ./shell
   ($) /bin/ls
builtin.c  commands.c  config_commands.c  config_numbers.c  config_paths.c  config_string.c  func_loop.c  library.c  main.c  no_interactive.c  prints.c  shell  shell.h
   ($)
   ($) exit
$
```
In non-interactive mode:
**...working on it**
