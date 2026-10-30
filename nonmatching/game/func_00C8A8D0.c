/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u32 func_0017A670(s32);
M2C_UNK func_00C706F0(s32);                         /* extern */
M2C_UNK func_00C70720(s32);                         /* extern */
M2C_UNK func_00C721E0(s32);                         /* extern */
M2C_UNK func_00C722F0(s32);                         /* extern */
M2C_UNK func_00C72340(s32);                         /* extern */
M2C_UNK func_00C8AB20();                            /* extern */
extern s16 D_003EA890;
extern char D_00591DEE[];
extern char D_00591F11[];

void func_00C8A8D0(void) {
    if ((*(u8 *)D_00591F11) == 1) {
        if ((func_0017A670(0) != 0xC) && (D_003EA890 != 0)) {
            if (D_003EA890 < 0x3F) {
                do {
                    func_00C8AB20();
                } while (D_003EA890 < 0x3F);
            }
            D_003EA890 = 0;
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
            D_003EA890 = 0;
        }
    }
}
