/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

M2C_UNK func_001D7D60(s32, u8);                     /* extern */
M2C_UNK func_001D7D80(s32, s16);                    /* extern */
M2C_UNK func_001DF820(s32, s8 *);                   /* extern */
M2C_UNK func_0099D2A0(s32, s8);                     /* extern */
M2C_UNK func_0099D490(s32, s32);                    /* extern */
extern char D_00A03158[];

void func_009DEBE0(void *arg0, void *arg1) {
    s32 temp_v0;
    s8 *var_a1;
    void *temp_v1;

    if (arg1 == NULL) {
        func_001D7D60(M2C_FIELD(arg0, s32 *, 0), 1U);
        func_001D7D60(M2C_FIELD(arg0, s32 *, 4), 0U);
        func_0099D2A0(M2C_FIELD(arg0, s32 *, 8), 0);
        func_001D7D60(M2C_FIELD(arg0, s32 *, 0xC), 0U);
        func_001D7D60(M2C_FIELD(arg0, s32 *, 0x10), 0U);
        return;
    }
    func_001D7D60(M2C_FIELD(arg0, s32 *, 0), 0U);
    func_001D7D60(M2C_FIELD(arg0, s32 *, 4), 1U);
    func_0099D2A0(M2C_FIELD(arg0, s32 *, 8), M2C_FIELD(arg1, s8 *, 8));
    func_0099D490(M2C_FIELD(arg0, s32 *, 8), M2C_FIELD(arg1, s32 *, 4));
    temp_v0 = M2C_FIELD(arg1, s32 *, 0xC);
    if (temp_v0 >= 0) {
        if (temp_v0 < 3) {
            func_001D7D60(M2C_FIELD(arg0, s32 *, 0xC), M2C_FIELD(arg1, u8 *, 0x10));
            func_001D7D80(M2C_FIELD(arg0, s32 *, 0xC), (s16) M2C_FIELD(arg1, s32 *, 0xC));
        } else {
            goto block_6;
        }
    } else {
block_6:
        func_001D7D60(M2C_FIELD(arg0, s32 *, 0xC), 0U);
    }
    func_001D7D60(M2C_FIELD(arg0, s32 *, 0x10), M2C_FIELD(arg1, u8 *, 0x11) != 0);
    temp_v1 = M2C_FIELD(arg0, void **, 0x14);
    var_a1 = M2C_FIELD(arg1, s8 **, 0);
    if (temp_v1 != NULL) {
        if ((var_a1 == NULL) || (*var_a1 == 0)) {
            var_a1 = ((void *)D_00A03158);
        }
        func_001DF820(M2C_FIELD(temp_v1, s32 *, 0xC), var_a1);
    }
}
