#ifndef CONTROLLER_INTERFACE_H
#define CONTROLLER_INTERFACE_H

#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <stdbool.h>
#include <wiringPi.h>
#include <libgen.h>

#include "contSD.h"
#include "contMem.h"
#include "contReplay.h"
#include "contFile.h"

#define CONTROLLER_TYPE 0
#define CONTROLLER_VERSION 1

#define HEARTBEAT_CONFIRM 0xDEADDEEF

#define MAX_FILENAME_LENGTH 512


bool heartbeat();

uint64_t getAttachedHardware();

char* getCurrentISO();

char* getCurrentTAS();

bool setISO(char* isoPath);

bool setTas(char* tasPath);

bool run();

bool abort();

#endif