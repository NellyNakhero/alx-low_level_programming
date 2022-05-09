PID & PPID
A process is an instance of an executing program, that has a unique process ID. This process ID is used by many functions and system calls to interact with and manipulate processes. In order to retrieve the current process’ ID, you can use the system call getpid (man 2 getpid):

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
</table>
</div>
