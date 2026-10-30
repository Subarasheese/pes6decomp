/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"
typedef int s128 __attribute__((mode(TI)));
typedef unsigned int u128 __attribute__((mode(TI)));
typedef char Check128Width[sizeof(s128)==16?1:-1];


extern void *D_003E97FC;
extern char D_004FDDA0[];
extern char D_004FDF70[];
extern char D_004FDF90[];
extern char D_004FDFBD[];

void *func_00144100(void *arg0) {
    s128 var_v0;

    M2C_FIELD(arg0, s64 *, 0) = 0x1000000C;
    M2C_FIELD(arg0, s32 *, 8) = 0x11000000;
    M2C_FIELD(arg0, s32 *, 0xC) = 0x50000004;
    M2C_FIELD(arg0, s64 *, 0x10) = (s64) (0x8001 | (0x30000000 << 0x20));
    M2C_FIELD(arg0, s64 *, 0x18) = 0xEEE;
    M2C_FIELD(arg0, s64 *, 0x28) = 0x47;
    M2C_FIELD(arg0, s64 *, 0x20) = (s64) (*(s64 *)D_004FDF70);
    M2C_FIELD(arg0, s64 *, 0x38) = 0x4A;
    M2C_FIELD(arg0, s64 *, 0x30) = (s64) (*(s64 *)D_004FDF90);
    M2C_FIELD(arg0, s64 *, 0x48) = 0x3F;
    M2C_FIELD(arg0, s64 *, 0x40) = 0;
    M2C_FIELD(arg0, s64 *, 0x50) = 0;
    M2C_FIELD(arg0, s32 *, 0x58) = 0x01000101;
    M2C_FIELD(arg0, s32 *, 0x5C) = 0x6C0301FD;
    M2C_FIELD(arg0, s128 *, 0x60) = (s128) (*(s128 *)D_004FDDA0);
    M2C_FIELD(arg0, s128 *, 0x70) = (s128) M2C_FIELD(D_003E97FC, s128 *, 0xD0);
    M2C_FIELD(arg0, s128 *, 0x80) = (s128) M2C_FIELD(D_003E97FC, s128 *, 0xE0);
    M2C_FIELD(arg0, s64 *, 0x90) = 0;
    M2C_FIELD(arg0, s32 *, 0x98) = 0x01000101;
    M2C_FIELD(arg0, s32 *, 0x9C) = 0x6C0303FD;
    M2C_FIELD(arg0, s128 *, 0xA0) = 0;
    if ((*(u8 *)D_004FDFBD) == 0) {
        M2C_FIELD(arg0, s128 *, 0xB0) = (s128) M2C_FIELD(D_003E97FC, s128 *, 0x110);
        var_v0 = M2C_FIELD(D_003E97FC, s128 *, 0x120);
    } else {
        M2C_FIELD(arg0, s128 *, 0xB0) = (s128) M2C_FIELD(D_003E97FC, s128 *, 0xF0);
        var_v0 = M2C_FIELD(D_003E97FC, s128 *, 0x100);
    }
    M2C_FIELD(arg0, s128 *, 0xC0) = var_v0;
    return arg0 + 0xD0;
}
