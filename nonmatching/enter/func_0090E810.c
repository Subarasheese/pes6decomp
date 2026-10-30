/* compiler: mwcc-3.0.1b198 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

s32 func_001540E0(M2C_UNK);                         /* extern */
s32 func_0017F900();                                /* extern */
M2C_UNK func_001A58E0(s32, M2C_UNK);                /* extern */
s32 func_001A5BB0(M2C_UNK);                         /* extern */
M2C_UNK func_001A5E00(M2C_UNK);                     /* extern */
M2C_UNK func_00209670(void *, s32);                 /* extern */
s32 func_00237BD0();                                /* extern */
M2C_UNK func_0027CD00(M2C_UNK);                     /* extern */
M2C_UNK func_0027CD10(M2C_UNK);                     /* extern */
M2C_UNK func_00288350();                            /* extern */
M2C_UNK func_002CBA60(M2C_UNK);                     /* extern */
M2C_UNK func_0099D5E0(M2C_UNK);                     /* extern */
extern char D_00510FD0[];
extern char Pes6MatchPlayers[];
extern char D_00591F2E[];

s32 func_0090E810(void) {
    M2C_UNK *var_s0;
    s32 var_s1;
    void *temp_a0;

    switch ((*(u8 *)D_00591F2E)) {                           /* irregular */
    case 0:
        if (func_001540E0(0xA) == 1) {
            func_002CBA60(0xA);
        }
        func_0027CD10(1);
        func_0027CD00(0xC);
        (*(u8 *)D_00591F2E) += 1;
block_20:
    default:
        return 0;
    case 1:
        if ((*(s32 *)D_00510FD0) == 9) {
            func_0099D5E0(9);
            func_00288350();
            if (func_00237BD0() != 0) {
                var_s1 = 0;
                var_s0 = ((void *)Pes6MatchPlayers);
                do {
                    M2C_FIELD(M2C_FIELD(var_s0, void **, 4), s8 *, 0x2C) = 0;
                    func_001A58E0(M2C_FIELD(M2C_FIELD(var_s0, void **, 4), s32 *, 0), 0);
                    temp_a0 = M2C_FIELD(var_s0, void **, 4);
                    func_00209670(temp_a0, M2C_FIELD(temp_a0, s32 *, 0));
                    var_s1 += 1;
                    var_s0 += 0x240;
                } while (var_s1 < 0x17);
            }
            if (!(func_001A5BB0(3) & 0xFF)) {
                func_001A5E00(3);
            }
            (*(u8 *)D_00591F2E) += 1;
            goto block_20;
        }
        (*(u8 *)D_00591F2E) = 0;
        return 1;
    case 2:
        if (func_0017F900() != 0) {
            (*(u8 *)D_00591F2E) = 0;
            return 1;
        }
        goto block_20;
    }
}
