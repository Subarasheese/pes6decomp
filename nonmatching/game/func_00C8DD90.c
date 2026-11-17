/* compiler: ee-gcc-2.9-G0 */
#include "pes6/m2c.h"

s64 func_002DB830(s32);
s64 func_002DB940(s32);
void func_002DB960(s32, s64, s32);
void func_002DBC20(s32, s64, s32);
s32 func_002DCA30();
void func_0026E840(s32);
extern u8 D_003EA898;
extern u32 D_00CCD550[];
extern u8 D_00CCD88D;

void func_00C8DD90(char *arg0) {
    s16 old;
    s16 cur;
    s16 sel;
    s16 tmp;
    s16 lim;
    u32 flags;
    u32 type;

    old = func_002DB940(M2C_FIELD(arg0, s32 *, 0x174));
    cur = old;
    sel = func_002DB830(M2C_FIELD(arg0, s32 *, 0x174));
    type = M2C_FIELD(arg0, u8 *, 5);
    flags = ((s32)type >= 8) ? 0 : D_00CCD550[type];
    if (flags & 2) {
        if (D_00CCD88D == 0 && func_002DCA30() == 0) {
            if (cur >= (s32)(M2C_FIELD(arg0, u8 *, 6) - 1)) {
                cur = 0;
            } else {
                cur = cur + 1;
            }
        } else if (cur < (s32)(M2C_FIELD(arg0, u8 *, 6) - 1)) {
            cur = cur + 1;
        }
    } else if (flags & 1) {
        if (D_00CCD88D == 0 && func_002DCA30() == 0) {
            if (cur <= 0) {
                cur = M2C_FIELD(arg0, u8 *, 6) - 1;
            } else {
                cur = cur - 1;
            }
        } else if (cur > 0) {
            cur = cur - 1;
        }
    } else if (flags & 8) {
        if (D_00CCD88D != 0 || func_002DCA30() != 0) {
            if (sel == 0) {
                cur = 0;
            } else {
                tmp = cur - sel;
                sel = sel - D_003EA898;
                if (sel < 0) {
                    sel = 0;
                }
                cur = tmp + sel;
            }
            func_002DB960(M2C_FIELD(arg0, s32 *, 0x174), sel, 0);
        }
    } else if (flags & 4) {
        if (D_00CCD88D != 0 || func_002DCA30() != 0) {
            lim = M2C_FIELD(arg0, u8 *, 6) - D_003EA898;
            if (sel == lim) {
                cur = M2C_FIELD(arg0, u8 *, 6) - 1;
            } else {
                tmp = cur - sel;
                sel = sel + D_003EA898;
                if (lim < sel) {
                    sel = lim;
                }
                cur = tmp + sel;
            }
            func_002DB960(M2C_FIELD(arg0, s32 *, 0x174), sel, 0);
        }
    }
    if (cur != old) {
        func_0026E840(0x8400F802);
    }
    func_002DBC20(M2C_FIELD(arg0, s32 *, 0x174), cur, 1);
}
