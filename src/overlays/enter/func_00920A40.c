/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

s32 func_001D76B0(void *, s32);
s32 func_001D7D60(void *, s32);
s32 func_001DF420(s32, s32);
s32 func_001DF4F0(s32, s32);
s32 func_001ED8F0(s32, s32);
s32 func_001EDAE0(s32, s32);
s32 func_002F9630(s32);
void *func_002F96F0(s32, s32);
extern s32 D_003EA5D4;
extern s32 *D_003EA5D8[2];

s32 func_00920A40(void) {
    s32 value;
    s32 value2;
    s32 value3;
    s32 value4;
    s32 value5;
    s32 value6;
    s32 value7;
    s32 value8;
    void *entry;
    void *entry2;
    void *entry3;
    void *entry4;
    void *entry5;
    void *entry6;
    void *entry7;

    entry5 = D_003EA5D8[D_003EA5D4];
    if (M2C_FIELD(entry5, u8 *, 0x5C) & 1) {
        value = func_002F9630(M2C_FIELD(entry5, s32 *, 0));
        value7 = 0;
        if (value > 0) {
            do {
                func_001D7D60(func_002F96F0(*D_003EA5D8[D_003EA5D4], value7), 1);
                value7 += 1;
            } while (value7 < value);
        }
        entry6 = D_003EA5D8[D_003EA5D4];
        if ((((u64)(M2C_FIELD(entry6, u8 *, 0x5C)) << 0x3E) >> 0x3F) != 0) {
            value3 = 0;
            entry = func_002F96F0(M2C_FIELD(entry6, s32 *, 4), 0);
            if (entry != NULL) {
                value3 = M2C_FIELD(entry, s32 *, 0xC);
            }
            func_001EDAE0(value3, 1);
        }
        value4 = 0;
        entry2 = func_002F96F0(M2C_FIELD(D_003EA5D8[D_003EA5D4], s32 *, 4), 1);
        if (entry2 != NULL) {
            value4 = M2C_FIELD(entry2, s32 *, 0xC);
        }
        func_001DF4F0(value4, 1);
    }
    entry7 = D_003EA5D8[D_003EA5D4];
    if (M2C_FIELD(entry7, u8 *, 0x5C) & 1) {
        value2 = func_002F9630(M2C_FIELD(entry7, s32 *, 0));
        value8 = 0;
        if (value2 > 0) {
            do {
                func_001D76B0(func_002F96F0(*D_003EA5D8[D_003EA5D4], value8), 0xFF);
                value8 += 1;
            } while (value8 < value2);
        }
        value5 = 0;
        entry3 = func_002F96F0(M2C_FIELD(D_003EA5D8[D_003EA5D4], s32 *, 4), 0);
        if (entry3 != NULL) {
            value5 = M2C_FIELD(entry3, s32 *, 0xC);
        }
        func_001ED8F0(value5, 0xFF);
        value6 = 0;
        entry4 = func_002F96F0(M2C_FIELD(D_003EA5D8[D_003EA5D4], s32 *, 4), 1);
        if (entry4 != NULL) {
            value6 = M2C_FIELD(entry4, s32 *, 0xC);
        }
        func_001DF420(value6, 0xFF);
    }
    return 1;
}
