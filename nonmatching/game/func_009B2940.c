/* compiler: mwcc-3.0.1b151 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_00B29C50(void);
extern s32 func_00B29E20(void);
extern s32 func_00B29A90(void);
extern s32 func_00B29AD0(void);
s32 func_00B29510();                                /* extern */
extern void *Pes6Ball_Current;
extern char D_00591C09[];
extern char D_00592378[];
extern char D_005926D5[];

s32 func_009B2940(s32 arg0) {
    s32 var_v0;
    s32 var_v0_2;
    s32 var_v1;
    s32 var_v1_2;

    if ((*(u8 *)D_00591C09) != 5) {
        goto block_1;
    }
    if (func_00B29C50() == 0) {
        if (func_00B29E20() != 0) {
            if (func_00B29AD0() != 0) {
                goto block_34;
            }
            if (func_00B29A90() != 0) {
block_34:
                var_v0 = 5;
            } else {
                goto block_35;
            }
        } else {
block_35:
            if (func_00B29510() == 0) {
                if (!(M2C_FIELD(Pes6Ball_Current, f32 *, 0x10) > 0.0f)) {
                    var_v0 = 3;
                } else {
                    var_v0 = 5;
                }
            } else if (!(M2C_FIELD(Pes6Ball_Current, f32 *, 0x10) > 0.0f)) {
                var_v0 = 3;
            } else {
                var_v0 = 4;
            }
        }
    } else {
block_1:
        if ((*(u8 *)D_005926D5) != 0) {
            var_v1 = 1;
            if (!(M2C_FIELD(Pes6Ball_Current, f32 *, 0x10) > 0.0f)) {
                var_v1 = 0;
            }
            if ((arg0 ^ 1 ^ var_v1) != 0) {
                var_v0 = (arg0 != 0) ? 5 : 6;
            } else {
                goto block_6;
            }
        } else {
block_6:
            if ((*(u8 *)D_00592378) == 0) {
                if (M2C_FIELD(Pes6Ball_Current, u16 *, 0x84) != 6) {
                    if (!(M2C_FIELD(Pes6Ball_Current, f32 *, 0x10) > 0.0f)) {
                        var_v0 = 8;
                    } else {
                        var_v0 = 7;
                    }
                } else {
                    var_v0_2 = 1;
                    if (!(M2C_FIELD(Pes6Ball_Current, f32 *, 0x10) > 0.0f)) {
                        var_v0_2 = 0;
                    }
                    if ((arg0 ^ 1 ^ var_v0_2) == 0) {
                        var_v0 = (arg0 != 0) ? 3 : 4;
                    } else {
                        var_v0 = (arg0 != 0) ? 5 : 6;
                    }
                }
            } else {
                var_v1_2 = 1;
                if (!(M2C_FIELD(Pes6Ball_Current, f32 *, 0x10) > 0.0f)) {
                    var_v1_2 = 0;
                }
                if ((arg0 ^ 1 ^ var_v1_2) == 0) {
                    var_v0 = (arg0 != 0) ? 3 : 4;
                } else {
                    var_v0 = (arg0 != 0) ? 5 : 6;
                }
            }
        }
    }
    return var_v0;
}
