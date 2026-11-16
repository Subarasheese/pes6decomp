/* compiler: ee-gcc-2.9 */
#include "pes6/m2c.h"

extern void func_001E6310(void *, s32);
extern void func_001EB320(s32);
extern M2C_UNK func_001E6360(void *, M2C_UNK, M2C_UNK);

void func_001E60F0(char **arg0, char *arg1) {
    func_001E6360(arg0, 5, 2);
    if (M2C_FIELD(arg1, u8 *, 0x3C) & 1) {
        M2C_FIELD(*arg0, s64 *, 0) = M2C_FIELD(arg1, s64 *, 0);
        M2C_FIELD(*arg0, s64 *, 8) = 0x42;
        *arg0 += 0x10;
    }
    if ((M2C_FIELD(arg1, u8 *, 0x3C) >> 1) & 1) {
        M2C_FIELD(*arg0, s64 *, 0) = M2C_FIELD(arg1, s64 *, 8);
        M2C_FIELD(*arg0, s64 *, 8) = 8;
        *arg0 += 0x10;
    }
    if ((M2C_FIELD(arg1, u8 *, 0x3C) >> 2) & 1) {
        M2C_FIELD(*arg0, s64 *, 0) = M2C_FIELD(arg1, s64 *, 0x10);
        M2C_FIELD(*arg0, s64 *, 8) = 0x47;
        *arg0 += 0x10;
    }
    if ((M2C_FIELD(arg1, u8 *, 0x3C) >> 4) & 1) {
        func_001EB320((M2C_FIELD(arg1, u8 *, 0x20) >> 5) & 1);
        M2C_FIELD(*arg0, s64 *, 0) = M2C_FIELD(arg1, s64 *, 0x20);
        M2C_FIELD(*arg0, s64 *, 8) = 0x14;
        *arg0 += 0x10;
    }
    if ((M2C_FIELD(arg1, u8 *, 0x3C) >> 3) & 1) {
        M2C_FIELD(*arg0, s64 *, 0) = M2C_FIELD(arg1, s64 *, 0x18);
        M2C_FIELD(*arg0, s64 *, 8) = 0x4E;
        *arg0 += 0x10;
    }
    if ((M2C_FIELD(arg1, u8 *, 0x3C) >> 5) & 1) {
        M2C_FIELD(*arg0, s64 *, 0) = M2C_FIELD(arg1, s64 *, 0x28);
        M2C_FIELD(*arg0, s64 *, 8) = 0x40;
        *arg0 += 0x10;
    }
    func_001E6310(arg0, 5);
}
