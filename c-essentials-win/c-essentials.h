#pragma once
#include <stdio.h>

/*Checks if file exists*/

bool check_file_exists(char* filename) {
    errno_t err;
    FILE* file;
    if ((err = fopen_s(&file, filename, "r")) == 0) {
        fclose(file);
        return true;
    }
    return false;
}