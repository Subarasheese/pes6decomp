/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern int func_001634B0(int, int);
extern int func_00163820(int, int);
extern int func_001635A0(int);
extern int func_001640A8(int, int, int);
extern int func_001636A8(int);
extern int func_00163378(int);
extern int func_001637C0(int, int, int);
M2C_UNK func_001631E8(s32, s32, s32, s32, s32);     /* extern */
M2C_UNK func_00165608(void *, s32);                 /* extern */
extern char D_00384C58[];

void func_00165700(void *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    func_001640A8(M2C_FIELD(arg0, s32 *, 8), M2C_FIELD(arg0, s16 *, 0x3E) << 0xB, M2C_FIELD(arg0, s16 *, 0x3C) << 0xB);
    func_00163820(M2C_FIELD(arg0, s32 *, 8), (*(s32 *)D_00384C58));
    func_001637C0(M2C_FIELD(arg0, s32 *, 8), 0, 0);
    func_001634B0(M2C_FIELD(arg0, s32 *, 8), 0);
    func_001636A8(M2C_FIELD(arg0, s32 *, 8));
    func_00163378(M2C_FIELD(arg0, s32 *, 8));
    func_001631E8(M2C_FIELD(arg0, s32 *, 8), arg1, arg2, arg3, arg4);
    func_001635A0(M2C_FIELD(arg0, s32 *, 8));
    func_00165608(arg0, M2C_FIELD(arg0, s32 *, 0x10));
}
