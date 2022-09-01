<h1 align="center">
    <img alt="MarkBuilder" src="https://game.42sp.org.br/static/assets/achievements/ft_printfe.png" width="200px" />
</h1>

# ft_printf

The third project of the 42 school consists in replicating the original printf basic conversions, as "%c", "%s" and so on.

## Execution

The steps to execute are inside the Makefile. But with Make installed just run `make` in the terminal to compile the library, now you can compile a program with some main to use the ft_printf function.

```c
#include <ft_printf.h>

int main(void)
{
    ft_printf("testing, 1, 2, 3\n");
    ft_printf("testing, %s", "another test :)");
    return (0);
}
```

To compile and run this program with the library execute the next command:

```sh
gcc main.c libftprintf.a -I ./includes -I ./libft
```

### Note

I'm uploading too the files to debug inside vscode, because I don't want to lose the configuration.
