/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

M2C_UNK sprintf(s8 *, M2C_UNK *, s32);        /* extern */
M2C_UNK func_001D7D60(s32, s32);                    /* extern */
M2C_UNK func_001DF820(s32, s8 *);                   /* extern */
s8 *func_001F08B0(M2C_UNK);                         /* extern */
M2C_UNK func_0099D2A0(s32, M2C_UNK);                /* extern */
M2C_UNK func_0099D490(s32, s32);                    /* extern */
M2C_UNK func_0099D550(s32, M2C_UNK);                /* extern */
M2C_UNK func_0099D730(s32, s32);                    /* extern */
extern char D_00A03128[];
extern char D_00A03130[];

void func_009D91E0(void *arg0, void *arg1) {
    s8 sp40;
    s32 temp_a0;
    s8 *var_a1;
    s8 *var_a1_2;
    s8 *var_a1_3;
    s8 *var_v0;
    void *temp_s2;
    void *temp_v1;
    void *temp_v1_2;
    void *temp_v1_3;

    if (arg1 == NULL) {
        func_001D7D60(M2C_FIELD(arg0, s32 *, 0), 1);
        func_001D7D60(M2C_FIELD(arg0, s32 *, 4), 0);
        func_001D7D60(M2C_FIELD(arg0, s32 *, 0x10), 0);
        func_0099D2A0(M2C_FIELD(arg0, s32 *, 8), 0);
        func_0099D550(M2C_FIELD(arg0, s32 *, 0xC), 0);
        return;
    }
    func_001D7D60(M2C_FIELD(arg0, s32 *, 0), 0);
    func_001D7D60(M2C_FIELD(arg0, s32 *, 4), 1);
    func_001D7D60(M2C_FIELD(arg0, s32 *, 0x10), M2C_FIELD(arg1, u8 *, 0x18) != 0);
    if (M2C_FIELD(arg1, s32 *, 0xC) != 0) {
        func_0099D2A0(M2C_FIELD(arg0, s32 *, 8), 1);
        func_0099D490(M2C_FIELD(arg0, s32 *, 8), M2C_FIELD(arg1, s32 *, 0xC));
    } else {
        func_0099D2A0(M2C_FIELD(arg0, s32 *, 8), 0);
    }
    func_0099D550(M2C_FIELD(arg0, s32 *, 0xC), 1);
    func_0099D730(M2C_FIELD(arg0, s32 *, 0xC), M2C_FIELD(arg1, s32 *, 0x10));
    temp_v1 = M2C_FIELD(arg0, void **, 0x14);
    var_a1 = M2C_FIELD(arg1, s8 **, 0);
    if (temp_v1 != NULL) {
        if ((var_a1 == NULL) || (*var_a1 == 0)) {
            var_a1 = ((void *)D_00A03130);
        }
        func_001DF820(M2C_FIELD(temp_v1, s32 *, 0xC), var_a1);
    }
    temp_v1_2 = M2C_FIELD(arg0, void **, 0x20);
    var_a1_2 = M2C_FIELD(arg1, s8 **, 4);
    if (temp_v1_2 != NULL) {
        if ((var_a1_2 == NULL) || (*var_a1_2 == 0)) {
            var_a1_2 = ((void *)D_00A03130);
        }
        func_001DF820(M2C_FIELD(temp_v1_2, s32 *, 0xC), var_a1_2);
    }
    temp_s2 = M2C_FIELD(arg0, void **, 0x1C);
    if (temp_s2 != NULL) {
        sprintf(&sp40, ((void *)D_00A03128), M2C_FIELD(arg1, s32 *, 0x14));
        func_001DF820(M2C_FIELD(temp_s2, s32 *, 0xC), &sp40);
    }
    temp_a0 = M2C_FIELD(arg1, s32 *, 8);
    switch (temp_a0) {                              /* irregular */
    case 3:
        var_v0 = func_001F08B0(0x01F80002);
block_32:
        var_a1_3 = var_v0;
        break;
    case 2:
        var_v0 = func_001F08B0(0x01F80001);
        goto block_32;
    case 1:
        var_v0 = func_001F08B0(0x01FC0029);
        goto block_32;
    default:
        var_a1_3 = NULL;
        break;
    }
    temp_v1_3 = M2C_FIELD(arg0, void **, 0x18);
    if (temp_v1_3 != NULL) {
        if ((var_a1_3 == NULL) || (*var_a1_3 == 0)) {
            var_a1_3 = ((void *)D_00A03130);
        }
        func_001DF820(M2C_FIELD(temp_v1_3, s32 *, 0xC), var_a1_3);
    }
}
