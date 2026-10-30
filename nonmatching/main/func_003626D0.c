/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_0021E000(u32);
extern int func_002DCA30(void);
extern void func_001F04F0(s32, void *);
extern s32 func_001DD3C0(s32);
extern s32 func_0021DF90(s32);
M2C_UNK func_001D5EE0(M2C_UNK, s32 *);              /* extern */
s32 func_001DA380(M2C_UNK);                         /* extern */
M2C_UNK func_001DA550(M2C_UNK, s32 *);              /* extern */
M2C_UNK func_001DD680(M2C_UNK, s32 *);              /* extern */
M2C_UNK func_001E75A0(s32, s32 *);                  /* extern */
extern s8 D_003EA004;
extern s8 D_003EA008;
extern s8 D_003EA00C;
extern u8 D_003EA010;
extern s8 D_003EA014;

void func_003626D0(void *arg0, s32 arg1, s32 arg2) {
    s32 sp38;
    s32 sp3C;

    if (D_003EA010 == 0) {
        if (arg0 == NULL) {
            sp3C = 1;
            sp38 = 1;
        } else {
            sp38 = M2C_FIELD(arg0, s32 *, 0);
            sp3C = M2C_FIELD(arg0, s32 *, 4);
        }
        func_001E75A0(func_0021E000(0x75U), &sp38);
        func_001F04F0(func_0021DF90(0xA), &sp38);
        if (func_002DCA30() == 0) {
            if (arg2 == 0) {
                func_001D5EE0(0x10238, &sp38);
            } else {
                goto block_10;
            }
        } else {
block_10:
            D_003EA014 = 1;
            func_001D5EE0(0x10239, &sp38);
        }
        if (func_001DD3C0(0x17) == 0) {
            func_001DD680(0x17, &sp38);
            D_003EA004 = 1;
        }
        if (func_001DD3C0(0x19) == 0) {
            func_001DD680(0x19, &sp38);
            D_003EA008 = 1;
        }
        if ((arg1 != 0) && (func_001DA380(1) == 0)) {
            func_001DA550(1, &sp38);
            D_003EA00C = 1;
        }
        D_003EA010 = 1;
    }
}
