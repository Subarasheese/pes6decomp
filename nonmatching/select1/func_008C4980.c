/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

s32 func_00154540();                                /* extern */
M2C_UNK func_0024A710(M2C_UNK *);                   /* extern */
M2C_UNK func_008B2E50(s32, M2C_UNK);                /* extern */
M2C_UNK func_008B2F10(s32, s32);                    /* extern */
M2C_UNK func_008B31A0(s32, M2C_UNK);                /* extern */
M2C_UNK func_008C38A0();                            /* extern */
M2C_UNK func_008C3A30();                            /* extern */
M2C_UNK func_008C3BC0();                            /* extern */
extern char D_003D88A0[];
extern char D_003D88A4[];
extern char D_003D88C0[];
extern char D_003D88C4[];
extern char D_003D8BE0[];
extern char D_003D8BE4[];
extern s32 D_003E9B10;
extern void *D_003E9B14;
extern void *D_003E9B18;
extern s32 D_003E9B20;
extern char D_008E76B0[];

void func_008C4980(void) {
    s32 temp_s0;

    temp_s0 = func_00154540() & 0xFF;
    if ((D_003E9B10 & 2) == 2) {
        func_008C3BC0();
        func_008C38A0();
    }
    if ((D_003E9B10 & 8) == 8) {
        func_008C3A30();
        func_008C38A0();
    }
    if ((D_003E9B10 & 4) == 4) {
        func_0024A710(((void *)D_008E76B0));
        func_008C38A0();
    }
    if (!(D_003E9B20 & (*(s32 *)D_003D8BE0))) {
        func_008B31A0(M2C_FIELD(D_003E9B18, s32 *, 0x28), 0);
        func_008B2E50(M2C_FIELD(D_003E9B14, s32 *, 0x30), 0);
    } else {
        if ((temp_s0 & 0xFF & 0xF) != 0xF) {
            func_008B2F10(M2C_FIELD(D_003E9B14, s32 *, 0x30), (*(s32 *)D_003D88A0));
        } else {
            func_008B2F10(M2C_FIELD(D_003E9B14, s32 *, 0x30), (*(s32 *)D_003D88C0));
        }
        func_008B31A0(M2C_FIELD(D_003E9B18, s32 *, 0x28), 1);
        func_008B2E50(M2C_FIELD(D_003E9B14, s32 *, 0x30), 1);
    }
    if (!(D_003E9B20 & (*(s32 *)D_003D8BE4))) {
        func_008B31A0(M2C_FIELD(D_003E9B18, s32 *, 0x2C), 0);
        func_008B2E50(M2C_FIELD(D_003E9B14, s32 *, 0x34), 0);
    } else {
        if ((temp_s0 & 0xFF & 0xF0) != 0xF0) {
            func_008B2F10(M2C_FIELD(D_003E9B14, s32 *, 0x34), (*(s32 *)D_003D88A4));
        } else {
            func_008B2F10(M2C_FIELD(D_003E9B14, s32 *, 0x34), (*(s32 *)D_003D88C4));
        }
        func_008B31A0(M2C_FIELD(D_003E9B18, s32 *, 0x2C), 1);
        func_008B2E50(M2C_FIELD(D_003E9B14, s32 *, 0x34), 1);
    }
    D_003E9B10 = 0;
}
