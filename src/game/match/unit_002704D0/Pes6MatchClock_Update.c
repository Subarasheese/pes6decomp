/* compiler: mwcc-3.0.1b151 */
#include "pes6/m2c.h"

extern int func_002DCA30(void);
s32 func_008481D0();                                /* extern */
u32 func_009A01D0(u8);                              /* extern */
M2C_UNK func_00B259F0(s32);                         /* extern */
s32 func_00BBB8C0(u32);                      /* extern */
M2C_UNK func_00BC4300();                            /* extern */
extern char Pes6MatchContext_Half[];
extern char Pes6MatchClock_Remaining[];
extern char Pes6MatchClock_Extra[];
extern char D_00591F12[];
extern char D_00591F13[];
extern char D_0059237B[];
extern char D_008B14F8[];

void Pes6MatchClock_Update(void) {
    u32 temp_a0;
    u32 var_s0;

    if (func_002DCA30() == 0) {
        goto block_1;
    }
    if (func_008481D0() != 0) {
        if ((u32) (*(u32 *)D_008B14F8) < (u32) (*(u32 *)Pes6MatchClock_Remaining)) {
            (*(u32 *)Pes6MatchClock_Remaining) -= 1;
        }
        return;
    }
block_1:
    if ((*(u32 *)Pes6MatchClock_Remaining) == 0) {
        (*(s16 *)Pes6MatchClock_Extra) -= 1;
        if ((*(s16 *)Pes6MatchClock_Extra) <= 0) {
            (*(s16 *)Pes6MatchClock_Extra) = 0;
            (*(s8 *)D_00591F12) = 0;
        }
    } else {
        var_s0 = func_009A01D0((*(u8 *)Pes6MatchContext_Half));
        if (var_s0 == 0) {
            var_s0 = 1;
        }
        temp_a0 = (*(u32 *)Pes6MatchClock_Remaining) - 1;
        (*(u32 *)Pes6MatchClock_Remaining) = temp_a0;
        if (((*(u8 *)D_0059237B) == 0) && (temp_a0 < var_s0) && (func_00BBB8C0(temp_a0) == 0)) {
            func_00BC4300();
            if (((s16) (*(s16 *)Pes6MatchClock_Extra) / (s32) var_s0) >= 0xA) {
                (*(s16 *)Pes6MatchClock_Extra) = var_s0 * 9;
            }
            func_00B259F0((s16) (*(s16 *)Pes6MatchClock_Extra) / (s32) var_s0);
            (*(u8 *)D_0059237B) = 1;
        }
        if ((*(u32 *)Pes6MatchClock_Remaining) == 0) {
            (*(s8 *)D_00591F13) = 1;
        }
    }
}
