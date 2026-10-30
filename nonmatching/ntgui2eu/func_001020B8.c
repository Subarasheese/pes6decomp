/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"
typedef int s128 __attribute__((mode(TI)));
typedef unsigned int u128 __attribute__((mode(TI)));
typedef char Check128Width[sizeof(s128)==16?1:-1];


M2C_UNK func_00101FF0();                            /* extern */
M2C_UNK func_00199E48(s32, M2C_UNK);                /* extern */
M2C_UNK func_00199F50(s32, M2C_UNK);                /* extern */
M2C_UNK func_00199FA8(s32);                         /* extern */
M2C_UNK func_00199FD8(s32, s128);                   /* extern */
M2C_UNK func_00199FF0(s32);                         /* extern */
M2C_UNK func_0019A140(s32, M2C_UNK, u64);           /* extern */
extern char D_005CCE30[];
extern s32 D_0060258C;

void func_001020B8(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s64 arg4) {
    s32 temp_s3;
    s32 temp_s4;
    s64 temp_s0;
    s64 temp_s1;

    func_00199E48(D_0060258C, 0);
    func_00199F50(D_0060258C, 0);
    temp_s3 = (arg0 * 0x10) + 0x6C00;
    func_00199FD8(D_0060258C, (*(s128 *)D_005CCE30));
    func_0019A140(D_0060258C, 0, 4U);
    func_0019A140(D_0060258C, 0x47, 0x30000U);
    func_0019A140(D_0060258C, 1, (u64) (arg4 << 0x20) >> 0x20);
    temp_s0 = ((arg2 * 0x10) + 0x7900) << 0x10;
    func_0019A140(D_0060258C, 5, temp_s3 | temp_s0);
    temp_s4 = (arg1 * 0x10) + 0x6C00;
    func_0019A140(D_0060258C, 5, temp_s4 | temp_s0);
    temp_s1 = ((arg3 * 0x10) + 0x7900) << 0x10;
    func_0019A140(D_0060258C, 5, temp_s3 | temp_s1);
    func_0019A140(D_0060258C, 5, temp_s4 | temp_s1);
    func_00199FF0(D_0060258C);
    func_00199FA8(D_0060258C);
    func_00101FF0();
}
