/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_002E36D0(void *, u8);
extern s32 func_002E3370(void *, s32);
extern void func_002EC160(int, int);
extern int func_002EBEF0(void *);
M2C_UNK func_008B31A0(s32, s32);                    /* extern */
M2C_UNK func_008CA390(s32, M2C_UNK, s32);           /* extern */
extern s32 D_003EA4A4;
extern void *D_003EABF8;
extern void *D_003EAC00;
extern void *D_00967E44;

void func_00943CC0(s32 arg0) {
    if (func_002EBEF0(D_00967E44) == 1) {
        func_002E36D0(func_002E3370(D_003EAC00, 1), arg0 & 0xFF);
        func_008CA390(D_003EA4A4, 1, arg0 & 0xFF);
    }
    func_008B31A0(M2C_FIELD(D_003EABF8, s32 *, 8), arg0);
    func_002EC160((s32) D_00967E44, arg0);
}
