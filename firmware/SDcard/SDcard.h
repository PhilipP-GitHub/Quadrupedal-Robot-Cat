#ifndef __SDcard_h_
#define __SDcard_h_

#include "fatfs.h"

typedef enum {
	SDcard_READ_OK,
	SDcard_READ_COUNT_ERROR,
	SDcard_READ_FAIL
} SDcard_READ_STATUS;

typedef enum {
	SDcard_WRITE_OK,
	SDcard_WRITE_COUNT_ERROR,
	SDcard_WRITE_FAIL
} SDcard_WRITE_STATUS;

typedef enum {
	SDcard_OK,
	SDcard_FAIL
} SDcard_STATUS;


SDcard_STATUS SD_Init();
SDcard_READ_STATUS SD_ReadFile();
SDcard_WRITE_STATUS SD_WriteFile();


#endif __SDcard_h_

