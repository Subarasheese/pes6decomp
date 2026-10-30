/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_00997D60(void *);                          /* extern */
s32 func_00A07B40();                                /* extern */
s32 func_00A09950(void *);                          /* extern */
M2C_UNK func_00A9D880(void *, M2C_UNK);             /* extern */
M2C_UNK func_00AA1110(void *);                      /* extern */
extern void *Pes6Ball_Current;
extern char D_00591BE4[];
extern char Pes6MatchState_Current[];
extern char D_00591E4C[];
extern char D_00591F14[];

void func_0097CD90(void *arg0) {
    s32 var_v1;

    var_v1 = (s32) M2C_FIELD(arg0, f32 *, 0xE0);
    if (var_v1 > 0) {

    } else {
        var_v1 = -var_v1;
    }
    if (!((f32) var_v1 <= 13465.0f)) {
        func_00AA1110(arg0);
    }
    if ((*(u8 *)D_00591F14) == 0) {
        if (M2C_FIELD(arg0, u8 *, 0) != (*(u8 *)Pes6MatchState_Current)) {
            if ((func_00A07B40() != 0) && (func_00997D60(arg0) != 0)) {
                if (M2C_FIELD(arg0, u8 *, 0x24) == 0) {
                    if (M2C_FIELD(arg0, s32 *, 0x1C) != 0) {
                        if (((*(u8 *)D_00591E4C) == 0) && (M2C_FIELD(Pes6Ball_Current, u16 *, 0x84) != 1)) {
                            goto block_12;
                        }
                        if (func_00A09950(arg0) == 0) {
                            M2C_FIELD(arg0, s8 *, 0x16) = 1;
                        } else {
block_12:
                            M2C_FIELD(arg0, s8 *, 0x4F) = (s8) ((u8) (*(u8 *)D_00591BE4) >> 2);
                            M2C_FIELD(arg0, s8 *, 0x16) = 0x16;
                        }
                    } else {
                        M2C_FIELD(arg0, s8 *, 0x16) = 0;
                    }
                } else if (M2C_FIELD(arg0, s32 *, 0x1C) == 0) {
                    M2C_FIELD(arg0, s8 *, 0x16) = 0;
                } else {
                    M2C_FIELD(arg0, s8 *, 0x16) = 1;
                }
                M2C_FIELD(arg0, s16 *, 0x18) = 0;
            }
        } else {
            M2C_FIELD(arg0, s16 *, 0x3A) = 0;
            func_00A9D880(arg0, 1);
        }
    }
}
