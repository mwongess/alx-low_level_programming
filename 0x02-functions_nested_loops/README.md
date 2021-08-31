<div class="panel-body">
<ul>
<li>The program should return <code>0</code></li>
</ul>

<p>0 - Write a program that prints <code>Holberton</code>, followed by a new line.</p><pre><code>julien@ubuntu:~/0x02$  gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c 0-holberton.c -o 0-holberton
julien@ubuntu:~/0x02$ ./0-holberton 
Holberton
julien@ubuntu:~/0x02$ 
</code></pre>

 <p>1 - Write a function that prints the alphabet, in lowercase, followed by a new line.</p>

<ul>
<li>Prototype: <code>void print_alphabet(void);</code></li>
<li>You can only use <code>_putchar</code> twice in your code</li>
</ul>

<pre><code>julien@ubuntu:~/0x02$ cat 1-main.c
#include "main.h"

/**
 * main - check the code for ALX School students.
 *
 * Return: Always 0.
 */
int main(void)
{
    print_alphabet();
    return (0);
}
julien@ubuntu:~/0x02$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c 1-main.c 1-alphabet.c -o 1-alphabet
julien@ubuntu:~/0x02$ ./1-alphabet 
abcdefghijklmnopqrstuvwxyz
julien@ubuntu:~/0x02$
</code></pre>
