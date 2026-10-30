/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_001A58E0(void *, signed char);
s32 func_00151EA0(M2C_UNK, void *);                 /* extern */
M2C_UNK func_00209A00(void *, M2C_UNK, M2C_UNK);    /* extern */
M2C_UNK func_0027A600(M2C_UNK *, M2C_UNK);          /* extern */
M2C_UNK func_00910F30(M2C_UNK *);                   /* extern */
extern char Pes6MatchPlayers[];
extern char D_0058E7F0[];

void func_00901390(void) {
    M2C_UNK *var_s0;
    s32 temp_hi;
    s32 var_s1;

    if (((void *)Pes6MatchPlayers) != NULL) {
        M2C_FIELD(M2C_FIELD(((void *)Pes6MatchPlayers), void **, 4), s8 *, 0x2C) = 1;
        func_001A58E0(M2C_FIELD(M2C_FIELD(((void *)Pes6MatchPlayers), void **, 4), void **, 0), 1);
        M2C_FIELD(M2C_FIELD(M2C_FIELD(((void *)Pes6MatchPlayers), void **, 4), void **, 0), s8 *, 3) = 0;
        M2C_FIELD(M2C_FIELD(M2C_FIELD(((void *)Pes6MatchPlayers), void **, 4), void **, 0), s8 *, 4) = 1;
        func_0027A600(((void *)Pes6MatchPlayers), 0);
        M2C_FIELD(M2C_FIELD(((void *)Pes6MatchPlayers), void **, 4), s8 *, 0x2D) = 0;
        M2C_FIELD(((void *)Pes6MatchPlayers), s32 *, 0xE8) = 0xC555DAAB;
        M2C_FIELD(((void *)Pes6MatchPlayers), s16 *, 0x26) = 0xC000;
        M2C_FIELD(((void *)Pes6MatchPlayers), s16 *, 0x28) = 0xC000;
        M2C_FIELD(((void *)Pes6MatchPlayers), s32 *, 0x1C) = 0;
        M2C_FIELD(((void *)Pes6MatchPlayers), s8 *, 0x16) = 0;
        M2C_FIELD(((void *)Pes6MatchPlayers), s8 *, 0x4E) = 0;
        M2C_FIELD(((void *)Pes6MatchPlayers), s32 *, 0x94) = 0;
        M2C_FIELD(((void *)Pes6MatchPlayers), s32 *, 0xE0) = 0;
        M2C_FIELD(((void *)Pes6MatchPlayers), s32 *, 0xE4) = 0;
        temp_hi = (s32) (func_00151EA0(0x3E8, M2C_FIELD(((void *)Pes6MatchPlayers), void **, 4)) & 0xFFFF) % 3;
        switch (temp_hi) {                          /* irregular */
        case 2:
            func_00209A00(M2C_FIELD(((void *)Pes6MatchPlayers), void **, 4), 0x59C, 0);
            break;
        case 1:
            func_00209A00(M2C_FIELD(((void *)Pes6MatchPlayers), void **, 4), 0x59B, 0);
            break;
        case 0:
            func_00209A00(M2C_FIELD(((void *)Pes6MatchPlayers), void **, 4), 0x59A, 0);
            break;
        }
        func_00910F30(((void *)Pes6MatchPlayers));
    }
    var_s1 = 1;
    var_s0 = ((void *)D_0058E7F0);
    do {
        M2C_FIELD(M2C_FIELD(var_s0, void **, 4), s8 *, 0x2C) = 0;
        func_001A58E0(M2C_FIELD(M2C_FIELD(var_s0, void **, 4), void **, 0), 0);
        var_s1 += 1;
        var_s0 += 0x240;
    } while (var_s1 < 0x17);
}
