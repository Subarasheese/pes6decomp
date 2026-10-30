/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_002F4D80(s32);
extern void func_001D7D60(void *, s8);
extern void func_001BC2B0(void);
extern void func_002EC160(int, int);
extern void func_00182B30(int);
s32 func_001B68B0();                                /* extern */
s32 func_001B6A30(M2C_UNK);                         /* extern */
M2C_UNK func_008CA300(s32, M2C_UNK);                /* extern */
M2C_UNK func_008CA810(s32, u16, M2C_UNK);           /* extern */
M2C_UNK func_0090A850();                            /* extern */
s32 func_0090AA30();                                /* extern */
M2C_UNK func_0090AE10(M2C_UNK);                     /* extern */
M2C_UNK func_0090F880(M2C_UNK);                     /* extern */
extern char D_00591BB0[];
extern char D_00591BB2[];
extern void *D_00921DE0;
extern void *D_00921DE4;
extern void *D_00923FC8;

s32 func_0090AB40(void) {
    s32 temp_v1;

    temp_v1 = M2C_FIELD(D_00923FC8, s32 *, 0x8C);
    switch (temp_v1) {                              /* irregular */
    case 0:
        if (func_001B6A30(0) != 0) {
            func_0090AE10(0x126);
            func_0090AE10(0x127);
            func_00182B30(0);
            func_002EC160(M2C_FIELD(D_00923FC8, s32 *, 0xC0), 0);
            func_002EC160(M2C_FIELD(D_00923FC8, s32 *, 0x75C), 0);
            func_001D7D60(M2C_FIELD(D_00923FC8, void **, 0x34), 0);
            func_008CA300(M2C_FIELD(D_00923FC8, s32 *, 0xE04), 0);
            func_002F4D80(M2C_FIELD(D_00923FC8, s32 *, 0xE08));
            func_001D7D60(D_00921DE0, 0);
            func_001D7D60(D_00921DE4, 0);
            func_0090F880(0);
            func_0090A850();
            M2C_FIELD(D_00923FC8, s32 *, 0x8C) = (s32) (M2C_FIELD(D_00923FC8, s32 *, 0x8C) + 1);
        case 1:
            M2C_FIELD(D_00923FC8, s32 *, 0x90) = func_0090AA30();
            if (M2C_FIELD(D_00923FC8, s32 *, 0x90) != 3) {
                func_00182B30(1);
                if (M2C_FIELD(D_00923FC8, s32 *, 0x90) != 4) {
                    func_002EC160(M2C_FIELD(D_00923FC8, s32 *, 0xC0), 1);
                    func_002EC160(M2C_FIELD(D_00923FC8, s32 *, 0x75C), 1);
                    func_001D7D60(M2C_FIELD(D_00923FC8, void **, 0x34), 1);
                    func_008CA300(M2C_FIELD(D_00923FC8, s32 *, 0xE04), 1);
                    func_002F4D80(M2C_FIELD(D_00923FC8, s32 *, 0xE08));
                } else {
                    func_002EC160(M2C_FIELD(D_00923FC8, s32 *, 0xC0), 0);
                    func_002EC160(M2C_FIELD(D_00923FC8, s32 *, 0x75C), 0);
                    func_001D7D60(M2C_FIELD(D_00923FC8, void **, 0x34), 1);
                    func_008CA300(M2C_FIELD(D_00923FC8, s32 *, 0xE04), 1);
                    func_002F4D80(M2C_FIELD(D_00923FC8, s32 *, 0xE08));
                    func_008CA810(M2C_FIELD(D_00923FC8, s32 *, 0xE04), (*(u16 *)D_00591BB0), 0);
                    func_008CA810(M2C_FIELD(D_00923FC8, s32 *, 0xE04), (*(u16 *)D_00591BB2), 1);
                }
                M2C_FIELD(D_00923FC8, s32 *, 0x8C) = (s32) (M2C_FIELD(D_00923FC8, s32 *, 0x8C) + 1);
            case 2:
                if (func_001B68B0() != 0) {
                    func_001BC2B0();
                    func_001D7D60(D_00921DE0, 1);
                    func_001D7D60(D_00921DE4, 1);
                    M2C_FIELD(D_00923FC8, s32 *, 0x8C) = (s32) (M2C_FIELD(D_00923FC8, s32 *, 0x8C) + 1);
                default:
                    return M2C_FIELD(D_00923FC8, s32 *, 0x90);
                }
                goto block_18;
            }
            goto block_18;
        }
block_18:
        return 3;
    }
}
