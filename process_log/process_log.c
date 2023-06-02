#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include "process_log.h"

int get_proc_log_level()
{
        return syscall(435);
}

int set_proc_log_level(int level)
{
        return syscall(436, level);
}

int proc_log_message(int level, char *message)
{
        return syscall(437, level, message);
}


int* retrieve_set_level_params(int new_level){
        int* arr;
        arr = (int*)malloc(sizeof(int)*5);
        arr[0] = 436;
        arr[1] = 1;
        arr[2]= new_level;
        return arr;
}

int* retrieve_get_level_params(){
        int* arr;
        arr = (int*)malloc(sizeof(int)*5);
        arr[0] = 436;
        arr[1] = 0;
        return arr;
}

int interpret_set_level_result(int ret_value) {
	return ret_value;
}

int interpret_get_level_result(int ret_value){
	return ret_value;
}

int interpret_log_message_result(int ret_value) {
	return ret_value;
}
