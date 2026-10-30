/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"
typedef int s128 __attribute__((mode(TI)));
typedef unsigned int u128 __attribute__((mode(TI)));
typedef char Check128Width[sizeof(s128)==16?1:-1];

extern void func_0019A140(void *, s32, s64);
extern s32 func_0011A0F0(void);
M2C_UNK func_00199E48(void *, M2C_UNK);             /* extern */
M2C_UNK func_00199F50(void *, M2C_UNK);             /* extern */
M2C_UNK func_00199FA8(void *);                      /* extern */
M2C_UNK func_00199FD8(void *, s128);                /* extern */
M2C_UNK func_00199FF0(void *);                      /* extern */
M2C_UNK func_0019DBD0(M2C_UNK *);                   /* extern */
extern char D_005F8E00[];
extern char D_005F8EF8[];
extern void *D_006024F0;

s32 func_00119BD4(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 temp_s1;
    s32 temp_s2;
    s64 temp_s0;
    s64 temp_s0_2;

    if (func_0011A0F0() >= 0xB) {
        temp_s0 = ((arg1 * 0x10) + 0x7000) << 0x10;
        temp_s2 = (arg0 * 0x10) + 0x6C00;
        func_00199E48(M2C_FIELD(D_006024F0, void **, 0x564), 0);
        temp_s1 = (arg2 * 0x10) + 0x6C00;
        func_00199F50(M2C_FIELD(D_006024F0, void **, 0x564), 0);
        func_00199FD8(M2C_FIELD(D_006024F0, void **, 0x564), (*(s128 *)D_005F8E00));
        func_0019A140(M2C_FIELD(D_006024F0, void **, 0x564), 0, 0x4C);
        func_0019A140(M2C_FIELD(D_006024F0, void **, 0x564), 1, M2C_FIELD(D_006024F0, s32 *, 0x80) | ((s64) M2C_FIELD(D_006024F0, s32 *, 0x8C) << 0x18) | (((s64) M2C_FIELD(D_006024F0, s32 *, 0x88) << 0x10) | ((s64) M2C_FIELD(D_006024F0, s32 *, 0x84) << 8)));
        func_0019A140(M2C_FIELD(D_006024F0, void **, 0x564), 5, temp_s2 | temp_s0);
        func_0019A140(M2C_FIELD(D_006024F0, void **, 0x564), 1, M2C_FIELD(D_006024F0, s32 *, 0x90) | ((s64) M2C_FIELD(D_006024F0, s32 *, 0x9C) << 0x18) | (((s64) M2C_FIELD(D_006024F0, s32 *, 0x98) << 0x10) | ((s64) M2C_FIELD(D_006024F0, s32 *, 0x94) << 8)));
        func_0019A140(M2C_FIELD(D_006024F0, void **, 0x564), 5, temp_s1 | temp_s0);
        temp_s0_2 = ((arg3 * 0x10) + 0x7000) << 0x10;
        func_0019A140(M2C_FIELD(D_006024F0, void **, 0x564), 1, M2C_FIELD(D_006024F0, s32 *, 0xA0) | ((s64) M2C_FIELD(D_006024F0, s32 *, 0xAC) << 0x18) | (((s64) M2C_FIELD(D_006024F0, s32 *, 0xA8) << 0x10) | ((s64) M2C_FIELD(D_006024F0, s32 *, 0xA4) << 8)));
        func_0019A140(M2C_FIELD(D_006024F0, void **, 0x564), 5, temp_s2 | temp_s0_2);
        func_0019A140(M2C_FIELD(D_006024F0, void **, 0x564), 1, M2C_FIELD(D_006024F0, s32 *, 0xB0) | ((s64) M2C_FIELD(D_006024F0, s32 *, 0xBC) << 0x18) | (((s64) M2C_FIELD(D_006024F0, s32 *, 0xB8) << 0x10) | ((s64) M2C_FIELD(D_006024F0, s32 *, 0xB4) << 8)));
        func_0019A140(M2C_FIELD(D_006024F0, void **, 0x564), 5, temp_s1 | temp_s0_2);
        func_00199FF0(M2C_FIELD(D_006024F0, void **, 0x564));
        func_00199FA8(M2C_FIELD(D_006024F0, void **, 0x564));
        return 0;
    }
    func_0019DBD0(((void *)D_005F8EF8));
    return -1;
}
