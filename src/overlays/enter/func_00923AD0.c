/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

s32 func_001D7D60(void *, s32);
s32 func_001DF4F0(s32, s32);
s32 func_001EDAE0(s32, s32);
s32 func_002F9630(s32);
void *func_002F96F0(s32, s32);
extern s32 D_003EA5E4;
extern s32 *D_003EA5E8[2];

s32 func_00923AD0(void) {
    s32 value;
    s32 value2;
    s32 value3;
    s32 value4;
    void *entry;
    void *entry2;
    void *entry3;
    void *entry4;

    entry3 = D_003EA5E8[D_003EA5E4];
    if (M2C_FIELD(entry3, u8 *, 0x2C) & 1) {
        value = func_002F9630(M2C_FIELD(entry3, s32 *, 0));
        value4 = 0;
        if (value > 0) {
            do {
                func_001D7D60(func_002F96F0(*D_003EA5E8[D_003EA5E4], value4), 0);
                value4 += 1;
            } while (value4 < value);
        }
        entry4 = D_003EA5E8[D_003EA5E4];
        if ((((u64)(M2C_FIELD(entry4, u8 *, 0x2C)) << 0x3E) >> 0x3F) != 0) {
            value2 = 0;
            entry = func_002F96F0(M2C_FIELD(entry4, s32 *, 4), 0);
            if (entry != NULL) {
                value2 = M2C_FIELD(entry, s32 *, 0xC);
            }
            func_001EDAE0(value2, 0);
        }
        value3 = 0;
        entry2 = func_002F96F0(M2C_FIELD(D_003EA5E8[D_003EA5E4], s32 *, 4), 1);
        if (entry2 != NULL) {
            value3 = M2C_FIELD(entry2, s32 *, 0xC);
        }
        func_001DF4F0(value3, 0);
    }
    return 1;
}
