/* mz_os_win32.h -- System functions for Windows
   Version 2.0.0, October 4th, 2017
   part of the MiniZip project

   Copyright (C) 2012-2017 Nathan Moinvaziri
     https://github.com/nmoinvaz/minizip

   This program is distributed under the terms of the same license as zlib.
   See the accompanying LICENSE file for the full text of the license.
*/

#ifndef _MZ_OS_WIN32_H
#define _MZ_OS_WIN32_H

#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

/***************************************************************************/

typedef struct dirent_s {
    char d_name[260];
} dirent;

typedef void* DIR;

int32_t mz_win32_rand(uint8_t *buf, int32_t size);
int16_t mz_win32_get_file_date(const char *path, uint32_t *dos_date);
int16_t mz_win32_set_file_date(const char *path, uint32_t dos_date);
int16_t mz_win32_change_dir(const char *path);
int16_t mz_win32_make_dir(const char *path);
DIR*    mz_win32_open_dir(const char *path);
dirent* mz_win32_read_dir(DIR *dir);
int32_t mz_win32_close_dir(DIR *dir);
int32_t mz_win32_is_dir(const char *path);

/***************************************************************************/

#define mz_os_rand           mz_win32_rand
#define mz_os_get_file_date  mz_win32_get_file_date
#define mz_os_set_file_date  mz_win32_set_file_date
#define mz_os_change_dir     mz_win32_change_dir
#define mz_os_make_dir       mz_win32_make_dir
#define mz_os_open_dir       mz_win32_open_dir
#define mz_os_read_dir       mz_win32_read_dir
#define mz_os_close_dir      mz_win32_close_dir
#define mz_os_is_dir         mz_win32_is_dir

/***************************************************************************/

#ifdef __cplusplus
}
#endif

#endif
