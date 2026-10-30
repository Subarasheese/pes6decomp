/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern int func_001633E8(int);
extern void func_0015B478(void *);
extern int func_00164170(int);
extern int func_00163470(int);
extern int func_001641B0(int);
M2C_UNK func_001632D0(s32, M2C_UNK, M2C_UNK);       /* extern */
extern char D_003C8020[];

s32 func_0015CB48(void *arg0, s32 arg1, s32 arg2) {
    s32 temp_v0;

    if (arg1 == 0) {
        func_0015B478(((void *)D_003C8020));
        return -1;
    }
    M2C_FIELD(arg0, s32 *, 0x38) = arg1;
    M2C_FIELD(arg0, s32 *, 0x34) = arg2;
    M2C_FIELD(arg0, s32 *, 0x14) = 0;
    func_001632D0(M2C_FIELD(arg0, s32 *, 4), 0, 0xFFFFF);
    if (func_00163470(M2C_FIELD(arg0, s32 *, 4)) == 4) {
        func_001633E8(M2C_FIELD(arg0, s32 *, 4));
        return -1;
    }
    M2C_FIELD(arg0, s32 *, 0x10) = func_00164170(M2C_FIELD(arg0, s32 *, 4));
    temp_v0 = func_001641B0(M2C_FIELD(arg0, s32 *, 4));
    M2C_FIELD(arg0, s32 *, 0x3C) = 0;
    M2C_FIELD(arg0, s32 *, 0x40) = temp_v0;
    M2C_FIELD(arg0, s32 *, 0xC) = temp_v0;
    return 0;
}
