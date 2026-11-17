/* compiler: ee-gcc-2.9 */
#include "pes6/m2c.h"

M2C_UNK func_002673B0(void *);
M2C_UNK func_002676F0(s32, void *, void *, s32);
M2C_UNK func_00267A50(s32, void *, void *, s32);
M2C_UNK func_00267CC0(s32, void *, void *);
M2C_UNK func_00268060(u16);

void func_002674F0(char *arg0, s32 arg1, char *arg2, s32 arg3) {
    s32 i;
    u8 *p;

    func_002673B0(arg2);
    for (i = 0; i < 2; i++) {
        if (arg3 == 0 && (p = *(u8 **)(arg0 + i * 4)) != NULL && p[2] == 0) {
            *(s32 *)(arg2 + i * 4 + 0x30) = 0;
            *(s32 *)(arg2 + i * 4) = 0;
            *(s32 *)(arg2 + i * 4 + 0xD4) = 0;
        } else {
            func_00267CC0(i, arg2, arg0);
        }
    }
    for (i = 0; i < 4; i++) {
        if (arg3 == 0 && (p = *(u8 **)(arg0 + i * 4 + 8)) != NULL && p[2] == 0) {
            *(s32 *)(arg2 + i * 4 + 0x30) = 0;
            *(s32 *)(arg2 + i * 4 + 8) = 0;
            *(s32 *)(arg2 + (i + 2) * 4 + 0xD4) = 0;
        } else {
            func_00267A50(i, arg2, arg0, arg1);
        }
    }
    for (i = 0; i < 4; i++) {
        if (arg3 == 0 && (p = *(u8 **)(arg0 + i * 4 + 0x18)) != NULL && p[2] == 0) {
            *(s32 *)(arg2 + i * 4 + 0x50) = 0;
            *(s32 *)(arg2 + i * 4 + 0x18) = 0;
            *(s32 *)(arg2 + i * 4 + 0xEC) = 0;
        } else {
            func_002676F0(i, arg2, arg0, arg1);
        }
    }
    *(s32 *)(arg2 + 0x1C4) = arg1;
    *(s32 *)(arg2 + 0x1C8) = 1;
    if (arg0 != NULL) {
        func_00268060(*(u16 *)(arg0 + 0x4C));
    }
}
