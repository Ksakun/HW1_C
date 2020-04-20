#ifndef __HW1_MANAGER_H__
#define __HW1_MANAGER_H__

#include <string.h>
#include "hw1_calculator.h"
/*
 * @brief Structure of manager
 * @param char *name
 * @param hw1_calculator_t *calculator
 * @param hw1_error_t error
 */
typedef struct hw1_manager_s hw1_manager_t;
struct hw1_manager_s{
	char *name;
	hw1_calculator_t *calculator;
	hw1_error_t error;
};

//Procedure of manager's working
hw1_manager_t* hw1_manager_init();
void hw1_manager_destroy( hw1_manager_t *manager);
char* hw1_manager_set_name( hw1_manager_t *manager, char *name);
void hw1_manager_process_data( hw1_manager_t *manager, int data);

#endif

