#ifndef PES6_HTTPS_SIGNATURE_METHODS_H
#define PES6_HTTPS_SIGNATURE_METHODS_H

#include "types.h"
typedef s32 (*PalSignMethod)(s32, const u8 *, u32, u8 *, u32 *, void *);
typedef s32 (*PalVerifyMethod)(s32, const u8 *, u32, const u8 *, u32, void *);
typedef struct {
    u8 reserved00[0x30];
    PalSignMethod sign;
    PalVerifyMethod verify;
} SignatureMethods;
extern const SignatureMethods *func_00BAD1A0(void);
extern void func_00BB3380(s32, s32, s32, const char *, s32);

#endif
