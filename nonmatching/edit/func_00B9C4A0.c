/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_00BCF3A0(s32);
extern void * func_00B9C490(void);
extern s32 func_00BCF3C0(s32);
extern void func_00B9CC20(void);
M2C_UNK func_0026E840(M2C_UNK);                     /* extern */
M2C_UNK func_00B982A0(M2C_UNK);                     /* extern */
M2C_UNK func_00B9C620(M2C_UNK, u8);                 /* extern */
M2C_UNK func_00B9C880(M2C_UNK, u8);                 /* extern */
M2C_UNK func_00B9CA90(M2C_UNK, u8);                 /* extern */
M2C_UNK func_00B9CB80(M2C_UNK, u8);                 /* extern */
M2C_UNK func_00B9CDC0();                            /* extern */
M2C_UNK func_00B9D120();                            /* extern */
extern char D_00CE4080[];
extern char D_00CE4082[];

void func_00B9C4A0(void) {
    void *temp_v0;

    switch (M2C_FIELD(((void *)D_00CE4080), u8 *, 0)) {      /* switch 1; irregular */
    case 0x50:                                      /* switch 1 */
        M2C_FIELD(((void *)D_00CE4080), u8 *, 0) = 0xF0U;
        return;
    case 0x20:                                      /* switch 1 */
        if (func_00BCF3C0(0x1000) == 0) {
            if (func_00BCF3C0(0x4000) != 0) {
                func_0026E840(0x84008401);
                switch ((*(u8 *)D_00CE4082)) {               /* switch 2; irregular */
                case 3:                             /* switch 2 */
                    M2C_FIELD(((void *)D_00CE4080), s8 *, 2) = 2;
                    break;
                case 2:                             /* switch 2 */
                    M2C_FIELD(((void *)D_00CE4080), s8 *, 2) = 0;
                    break;
                default:                            /* switch 2 */
                    M2C_FIELD(((void *)D_00CE4080), u8 *, 0) = 0x50U;
                    break;
                }
            }
        } else {
            func_00B9D120();
        }
        if (func_00BCF3A0(0x90489) != 0) {
            func_00B9CDC0();
        }
        func_00B9CC20();
        return;
    default:                                        /* switch 1 */
        func_00B9CB80(0xF0, M2C_FIELD(((void *)D_00CE4080), u8 *, 0));
        M2C_FIELD(((void *)D_00CE4080), u8 *, 0) = 0x10U;
        /* fallthrough */
    case 0x10:                                      /* switch 1 */
        M2C_FIELD(((void *)D_00CE4080), u8 *, 0) = 0x20U;
        return;
    case 0x30:                                      /* switch 1 */
        func_00B9CA90(0xF0, M2C_FIELD(((void *)D_00CE4080), u8 *, 0));
        return;
    case 0x40:                                      /* switch 1 */
        func_00B9C880(0xF0, M2C_FIELD(((void *)D_00CE4080), u8 *, 0));
        return;
    case 0x41:                                      /* switch 1 */
        func_00B9C620(0xF0, M2C_FIELD(((void *)D_00CE4080), u8 *, 0));
        return;
    case 0xF0:                                      /* switch 1 */
        temp_v0 = func_00B9C490();
        M2C_FIELD(temp_v0, s32 *, 8) = 1;
        M2C_FIELD(temp_v0, s32 *, 4) = 0x10;
        func_00B982A0(1);
        return;
    }
}
