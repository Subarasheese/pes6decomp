/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern int func_002211C0(int, int, int, int);
M2C_UNK func_00269DF0(u8 *, u8 *, M2C_UNK, void *, M2C_UNK, u8); /* extern */
M2C_UNK func_0026E840(M2C_UNK);                     /* extern */
M2C_UNK func_00C99AD0(void *, s32);                 /* extern */
extern char D_003AE97A[];
extern char D_003AE97B[];
extern char D_003AE97C[];
extern char D_003AE97D[];
extern void *D_003AE9D0;

s32 func_00269680(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    u8 temp_a5;
    void *temp_v0;

    temp_v0 = func_002211C0(arg0, arg1, arg2, arg3);
    (*(u8 *)D_003AE97A) = M2C_FIELD(temp_v0, u8 *, 5);
    temp_a5 = M2C_FIELD(temp_v0, u8 *, 6);
    (*(u8 *)D_003AE97C) = temp_a5;
    (*(u8 *)D_003AE97B) = M2C_FIELD(temp_v0, u8 *, 7);
    M2C_FIELD(D_003AE9D0, s8 *, 0xC5) = 2;
    (*(s8 *)D_003AE97D) = 1;
    func_00269DF0(((void *)D_003AE97B), ((void *)D_003AE97C), 1, D_003AE9D0, 2, temp_a5);
    func_0026E840(0x84028400);
    func_00C99AD0(M2C_FIELD(D_003AE9D0, void **, 0xCC), arg2);
    M2C_FIELD(M2C_FIELD(D_003AE9D0, void **, 0xCC), s16 *, 0x10) = 0;
    return 2;
}
