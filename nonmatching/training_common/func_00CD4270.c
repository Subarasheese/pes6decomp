/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

M2C_UNK func_0017E120(M2C_UNK);                     /* extern */
M2C_UNK func_001A5900();                            /* extern */
M2C_UNK func_001AC410();                            /* extern */
s32 func_002646D0(s32);                             /* extern */
M2C_UNK func_002646E0(s32);                         /* extern */
M2C_UNK func_00264790(s32, M2C_UNK);                /* extern */
M2C_UNK func_002648E0(s32);                         /* extern */
M2C_UNK func_002648F0();                            /* extern */
M2C_UNK func_00266A30(M2C_UNK);                     /* extern */
M2C_UNK func_00270580(M2C_UNK, void *);             /* extern */
M2C_UNK func_00BA18D0(M2C_UNK *);                   /* extern */
extern s32 D_003EB268;
extern char Pes6MatchPlayers[];
extern char D_0058E7F0[];

s32 func_00CD4270(s32 arg0) {
    M2C_UNK *var_v0;
    s32 temp_v1;
    s32 var_v1;
    void *temp_a1;

    func_002648F0();
    temp_v1 = func_002646D0(arg0) & 0xFF;
    if (temp_v1 != 1) {
        if (temp_v1 != 0) {
            func_00264790(arg0, 0);
        }
        func_0017E120(0);
        func_001AC410();
        func_001A5900();
        func_00266A30(0);
        func_00266A30(1);
        var_v1 = 0;
        var_v0 = ((void *)D_0058E7F0);
        do {
            var_v1 = (var_v1 + 7) & 0xFF;
            M2C_FIELD(*M2C_FIELD(var_v0, void ***, 4), s8 *, 0x209) = 0;
            M2C_FIELD(*M2C_FIELD(var_v0, void ***, 4), s8 *, 0x20B) = 0;
            M2C_FIELD(*M2C_FIELD(var_v0, void ***, 0x244), s8 *, 0x209) = 0;
            M2C_FIELD(*M2C_FIELD(var_v0, void ***, 0x244), s8 *, 0x20B) = 0;
            M2C_FIELD(*M2C_FIELD(var_v0, void ***, 0x484), s8 *, 0x209) = 0;
            M2C_FIELD(*M2C_FIELD(var_v0, void ***, 0x484), s8 *, 0x20B) = 0;
            M2C_FIELD(*M2C_FIELD(var_v0, void ***, 0x6C4), s8 *, 0x209) = 0;
            M2C_FIELD(*M2C_FIELD(var_v0, void ***, 0x6C4), s8 *, 0x20B) = 0;
            M2C_FIELD(*M2C_FIELD(var_v0, void ***, 0x904), s8 *, 0x209) = 0;
            M2C_FIELD(*M2C_FIELD(var_v0, void ***, 0x904), s8 *, 0x20B) = 0;
            M2C_FIELD(*M2C_FIELD(var_v0, void ***, 0xB44), s8 *, 0x209) = 0;
            M2C_FIELD(*M2C_FIELD(var_v0, void ***, 0xB44), s8 *, 0x20B) = 0;
            M2C_FIELD(*M2C_FIELD(var_v0, void ***, 0xD84), s8 *, 0x209) = 0;
            temp_a1 = *M2C_FIELD(var_v0, void ***, 0xD84);
            var_v0 += 0xFC0;
            M2C_FIELD(temp_a1, s8 *, 0x20B) = 0;
        } while (var_v1 < 0xF);
        M2C_FIELD(*M2C_FIELD(var_v0, void ***, 4), s8 *, 0x209) = 0;
        M2C_FIELD(*M2C_FIELD(var_v0, void ***, 4), s8 *, 0x20B) = 0;
        func_00270580(0, temp_a1);
        if (D_003EB268 != 0) {
            func_00BA18D0(((void *)Pes6MatchPlayers));
            D_003EB268 = 0;
        }
        func_002646E0(arg0);
    }
    func_002648E0(arg0);
    return 1;
}
