/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_001C48E8(void *, M2C_UNK, M2C_UNK);    /* extern */
s32 func_009F42A0(void *);                          /* extern */
extern char D_00A7E250[];
extern char D_00A7E25C[];

s32 func_009F4450(void *arg0, void *arg1, s32 (*arg2)(void *), s32 arg3) {
    void *temp_s4;

    if (arg0 == NULL) {
        return 0;
    }
    if (((*(s32 *)D_00A7E250) < 0) || ((*(s32 *)D_00A7E250) >= 7)) {
        (*(s32 *)D_00A7E250) = 0;
    }
    switch ((*(s32 *)D_00A7E250)) {                           /* irregular */
    case 0:
        (*(s32 *)D_00A7E250) = 2;
        /* fallthrough */
    case 2:
        temp_s4 = arg0 + 4;
        func_001C48E8(temp_s4, 0, 0x10);
        func_001C48E8(arg0 + 0x24, 0, 0xC000);
        M2C_FIELD(arg0, f32 *, 4) = (f32) M2C_FIELD(arg1, f32 *, 0);
        M2C_FIELD(temp_s4, f32 *, 4) = (f32) M2C_FIELD(arg1, f32 *, 4);
        M2C_FIELD(temp_s4, f32 *, 8) = (f32) M2C_FIELD(arg1, f32 *, 8);
        M2C_FIELD(temp_s4, f32 *, 0xC) = (f32) M2C_FIELD(arg1, f32 *, 0xC);
        (*(s32 *)D_00A7E25C) = arg2(arg1);
        (*(s32 *)D_00A7E250) = 3;
        M2C_FIELD(arg0, s32 *, 0) = arg3;
        return 2;
    default:
        return func_009F42A0(arg0);
    }
}
