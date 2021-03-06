#include "hw1_manager.h"



/*
 * @brief Processing data
 * @param int argc
 * @param char **argv
 * @return int
 */
int main(int argc, char **argv){
	if( argc != 2){
		printf("\n(hw1_main) { Wrong Parameter Rule }\n\n");
		return -1;
	}

	int data = 0;
	hw1_manager_t *manager = hw1_manager_init();
	if( manager == NULL){
		printf("(hw1_main) { Fail to init manager }\n");
		return -1;
	}

	data = atoi( argv[1]);
	hw1_manager_process_data( manager, data);
	hw1_manager_destroy( manager);
}
