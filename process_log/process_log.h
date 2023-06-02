#include <stdio.h>
#include <unistd.h>
#include <sys/syscall.h>
#include <sys/types.h>
#include <stdlib.h>

#define sys_get_proc_log_level 435
#define sys_set_proc_log_level 436
#define sys_proc_log_message 437

int get_proc_log_level(void);
int set_proc_log_level(int new_level);
int proc_log_message(int level, char *message);

int* retrieve_set_level_params(int new_level);
int* retrieve_get_level_params();
int interpret_set_level_result(int ret_value);
int interpret_get_level_result(int ret_value);
int interpret_log_message_result(int ret_value); 
