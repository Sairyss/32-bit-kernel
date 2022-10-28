#include "shell.h"
#include "stdio.h"
#include "stdlib.h"
#include "os.h"
int main(int argc, char **argv)
{
    print("OS v1.0.0\n");
    while (1)
    {
        print("> ");
        char buf[1024];
        os_terminal_readline(buf, sizeof(buf), true);
        print("\n");
        os_system_run(buf);

        print("\n");
    }
    return 0;
}