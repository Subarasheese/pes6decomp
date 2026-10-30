/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u32 func_0017A670(s32);
M2C_UNK func_00C706F0(s32);                         /* extern */
M2C_UNK func_00C70720(s32);                         /* extern */
M2C_UNK func_00C721E0(s32);                         /* extern */
M2C_UNK func_00C72290(M2C_UNK, M2C_UNK);            /* extern */
M2C_UNK func_00C722F0(s32);                         /* extern */
M2C_UNK func_00C72340(s32);                         /* extern */
M2C_UNK func_00C8AB20();                            /* extern */
M2C_UNK func_00C91270(M2C_UNK, M2C_UNK);            /* extern */
M2C_UNK func_00C91450(M2C_UNK *, M2C_UNK *, M2C_UNK *); /* extern */
M2C_UNK func_00C91680(M2C_UNK, s32);                /* extern */
M2C_UNK func_00C92560();                            /* extern */
s32 func_00C99810();                                /* extern */
extern s16 D_003EA890;
extern char D_00591DE1[];
extern char D_00591DE5[];
extern char D_00591DE9[];
extern char D_00591DEE[];
extern char D_00591F11[];
extern char D_00CCD074[];

void func_00C8A6E0(void) {
    func_00C72290(0, 0);
    func_00C72290(1, 0);
    if ((func_0017A670(0) != 0xC) && ((*(u8 *)D_00CCD074) & 1)) {
        if (func_00C99810() != 0) {
            func_00C91680(1, (s32) ((*(u16 *)D_00591DEE) & 0x80) >> 7);
        } else {
            func_00C91680(0, (s32) ((*(u16 *)D_00591DEE) & 0x40) >> 6);
        }
        func_00C91450(((void *)D_00591DE1), ((void *)D_00591DE5), ((void *)D_00591DE9));
        func_00C91270(0, 0);
        func_00C92560();
    }
    if ((*(u8 *)D_00591F11) == 1) {
        if ((func_0017A670(0) != 0xC) && (D_003EA890 != 0)) {
            if (D_003EA890 < 0x3F) {
                do {
                    func_00C8AB20();
                } while (D_003EA890 < 0x3F);
            }
            goto block_16;
        }
    } else {
        func_00C72340((s32) ((*(u16 *)D_00591DEE) & 4) >> 2);
        func_00C722F0((s32) ((*(u16 *)D_00591DEE) & 0x100) >> 8);
        func_00C721E0((s32) ((*(u16 *)D_00591DEE) & 0x200) >> 9);
        func_00C706F0((s32) ((*(u16 *)D_00591DEE) & 8) >> 3);
        func_00C70720((s32) ((*(u16 *)D_00591DEE) & 0x10) >> 4);
        if ((func_0017A670(0) != 0xC) && (D_003EA890 != 0)) {
            if (D_003EA890 < 0x3F) {
                do {
                    func_00C8AB20();
                } while (D_003EA890 < 0x3F);
            }
block_16:
            D_003EA890 = 0;
        }
    }
}
