/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

M2C_UNK func_00815100(M2C_UNK *);                   /* extern */
M2C_UNK func_0093B730();                            /* extern */
s32 func_0093B9E0();                                /* extern */
M2C_UNK func_0093D470();                            /* extern */
s32 func_0093D4B0();                                /* extern */
M2C_UNK func_009717C0(M2C_UNK);                     /* extern */
M2C_UNK func_0099C590();                            /* extern */
M2C_UNK func_0099C5C0(M2C_UNK);                     /* extern */
M2C_UNK func_0099C730(M2C_UNK);                     /* extern */
M2C_UNK func_0099C760();                            /* extern */
M2C_UNK func_009B1A60(s32);                         /* extern */
M2C_UNK func_009B1AF0();                            /* extern */
M2C_UNK func_009B40A0(M2C_UNK);                     /* extern */
s32 func_009B4B50(s32);                             /* extern */
s32 func_009B4BF0(s32);                             /* extern */
M2C_UNK func_009B4D60(s32);                         /* extern */
M2C_UNK func_009B4F80(s32, s32);                    /* extern */
M2C_UNK func_00D0C540();                            /* extern */
M2C_UNK func_00D0C7B0(M2C_UNK *, M2C_UNK);          /* extern */
extern char D_009FE2E0[];
extern char D_00A01600[];
extern void *D_00A68CA8;

void func_00969820(void) {
    s32 temp_s0;
    s32 temp_s2;
    void *temp_s1;

    temp_s1 = D_00A68CA8;
    temp_s2 = func_0093D4B0();
    func_00D0C540();
    func_00D0C7B0(((void *)D_009FE2E0), 2);
    func_0099C590();
    func_0099C5C0(0);
    func_0099C760();
    func_0099C730(0x01F70091);
    temp_s0 = func_009B4B50(temp_s2);
    func_009B4F80(temp_s0, func_009B4BF0(temp_s2));
    if (M2C_FIELD(temp_s1, s32 *, 0x178) == temp_s2) {
        func_009B4D60(M2C_FIELD(temp_s1, s32 *, 0x170));
    }
    if (temp_s2 == 0) {
        func_009B40A0(0);
        func_009B1A60(func_0093B9E0());
        func_009B1AF0();
    } else {
        func_009B40A0(1);
        func_009B1A60(0);
    }
    if (M2C_FIELD(temp_s1, s32 *, 0x18C) != 0) {
        func_00815100(((void *)D_00A01600));
        M2C_FIELD(temp_s1, s32 *, 0x18C) = 0;
    }
    func_0093D470();
    func_0093B730();
    M2C_FIELD(temp_s1, s32 *, 0x178) = temp_s2;
    func_009717C0(6);
}
