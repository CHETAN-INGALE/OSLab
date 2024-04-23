#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>
int main(void)
{
    pid_t pid = fork();
    if (pid == 0)
    {
        printf("Child Process\n");
        pid_t process_id;
        pid_t p_process_id;
        pid_t u_process_id;
        pid_t g_process_id;

        process_id = getpid();
        p_process_id = getppid();
        u_process_id = getuid();
        g_process_id = getgid();

        printf("The process id: %d\n", process_id);
        printf("The process id of parent function: %d\n", p_process_id);
        printf("User id of calling process: %d\n", u_process_id);
        printf("Group id of calling process: %d\n", g_process_id);
    }
    return 0;
}
