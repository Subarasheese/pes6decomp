#ifndef PES6_HTTPS_MULTIPRECISION_H
#define PES6_HTTPS_MULTIPRECISION_H
#include "types.h"
typedef struct {
    s32 capacity, length;
    u64 *digits;
} HttpsMagnitude;

extern s32 func_00BED6C8(const HttpsMagnitude *left, const HttpsMagnitude *right);
extern s32 func_00BED9D0(const HttpsMagnitude *left, const HttpsMagnitude *right, HttpsMagnitude *result);
extern s32 func_00BED758(const HttpsMagnitude *left, const HttpsMagnitude *right, HttpsMagnitude *result);
#endif
