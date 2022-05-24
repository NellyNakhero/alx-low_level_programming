PID & PPID
A process is an instance of an executing program, that has a unique process ID. This process ID is used by many functions and system calls to interact with and manipulate processes. In order to retrieve the current process’ ID, you can use the system call getpid (man 2 getpid):

<h2>execve </h2>
<p>&nbsp;&nbsp; execv() system call  loads a new program into the process memory <br/> -the existing process is discarded <br/> -the newly created process  gets all stack data and heap <br/> -since it replaces the processe's memory the return value is always -1 <br/> <br/> <b> Parameters</b> <br/> <i> execve(pathname,argv,env_list) </i> Note: argv and env_list parameters are array of pointers </p>
<div>
<table>
<tr>
	<td> pid & pid.c </td>
	<td> add files to diplay current id and parent id of a process </td>
</tr>

<tr>                                                                                                                                                                                           
        <td> 0x00-getppid </td>                                                                                                                                                                 
        <td> 1. /proc/sys/kernel/pid_max
	<br/> &nbsp; &nbsp;Write a shell script that prints the maximum value a process ID can be. </td>                                                                                                                   
</tr> 
<tr>                                                                                                                                                                                           
        <td> 0x00-av </td>                                                                                                                                                                 
        <td> <b>Arguments</b> <br/> <code>av.c </code> - Write a program that prints all the arguments, without using ac.
 	 		<br/>	<code> readline.c </code> - Write a program that prints "$ ", wait for the user to enter a command, prints it on the next line.
			<br/>  <code>splitstringtoarray.c </code> - Write a function that splits a string and returns an array of each word of the string.

</td>                                                                                                                   
</tr>

<tr>                                                                                                                                                                                           
        <td> Executing_a_program </td>                                                                                                                                                                 
        <td> The system call execve allows a process to execute another program (man 2 execve). Note that this system call does load the new program into the current process’ memory in place of the “previous” program: on success execve does not return to continue the rest of the “previous” program. </td>                                                                                                                   
</tr>  

<tr>                                                                                                                                                                                           
        <td> Creating_processes </td>                                                                                                                                                                 
        <td> The system call fork (man 2 fork) creates a new child process, almost identical to the parent (the process that calls fork). Once fork successfully returns, two processes continue to run the same program, but with different stacks, datas and heaps. </td>                                                                                                                   
</tr> 

<tr>                                                                                                                                                                                           
        <td> Wait </td>                                                                                                                                                                 
        <td> The wait system call (man 2 wait) suspends execution of the calling process until one of its children terminates. </td>                                                                                                                   
</tr> 

<tr>                                                                                                                                                                                           
        <td> fork + wait + execve </td>                                                                                                                                                                        
        <td> <code> fork+wait+execve.c </code> - a program that executes the command ls -l /tmp in 5 different child processes. Each child should be created by the same process (the father). Wait for a child to exit before creating a new child. </td>                                                           
                                                                                                                                                                                               
</tr>

</table>
</div>
