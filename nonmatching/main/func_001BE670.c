/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_0021E000(u32);
extern void func_003430C0(void);
extern int func_002D5410(void);
M2C_UNK func_001E75A0(s32, f32 *);                  /* extern */
M2C_UNK func_002D5440(M2C_UNK);                     /* extern */
M2C_UNK func_0035A6F0(s32);                         /* extern */
extern char D_00398660[];
extern char D_00398710[];
extern char D_00398714[];
extern char D_00591C09[];

s32 func_001BE670(void) {
    f32 sp28;
    f32 sp2C;

    sp28 = (*(f32 *)D_00398710);
    sp2C = (*(f32 *)D_00398714);
    if (((void *)D_00398660) == NULL) {
        return 0;
    }
    if (M2C_FIELD(((void *)D_00398660), s32 *, 8) == -1) {
        M2C_FIELD(((void *)D_00398660), s32 *, 0x58) = 1;
        M2C_FIELD(((void *)D_00398660), s32 *, 0xC) = 0x8C;
        func_001E75A0(func_0021E000(0x8CU), &sp28);
        M2C_FIELD(((void *)D_00398660), s32 *, 8) = 0x5019;
        if ((((void *)D_00398660) != NULL) && (M2C_FIELD(((void *)D_00398660), s32 *, 0x10) == 0)) {
            M2C_FIELD(((void *)D_00398660), s32 *, 0) = 0x5019;
        }
        func_002D5440(0x5019);
        if (M2C_FIELD(((void *)D_00398660), s32 *, 0x58) != 0) {
            func_003430C0();
            func_0035A6F0(func_002D5410());
        }
        if ((*(u8 *)D_00591C09) != 7) {
            M2C_FIELD(((void *)D_00398660), s32 *, 0x54) = 1;
        }
        M2C_FIELD(((void *)D_00398660), s32 *, 0x10) = 0;
        return 1;
    }
    return 0;
}
