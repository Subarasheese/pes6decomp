/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

M2C_UNK sprintf(void *, s32, s32);            /* extern */
s32 func_001C80F0(s32);                             /* extern */
s32 func_001F08B0(M2C_UNK);                         /* extern */
s32 func_00824850();                                /* extern */
s32 func_00965EC0();                                /* extern */
void *func_00965F50();                              /* extern */
M2C_UNK func_0099C730(M2C_UNK);                     /* extern */
void *func_0099C7E0(s32);                           /* extern */
M2C_UNK func_009C2360(M2C_UNK);                     /* extern */
M2C_UNK func_009C23A0(M2C_UNK);                     /* extern */
s32 func_009C23E0(M2C_UNK);                         /* extern */
M2C_UNK func_009C2420(M2C_UNK);                     /* extern */
M2C_UNK func_009C2460(M2C_UNK);                     /* extern */
M2C_UNK func_009C2490(M2C_UNK);                     /* extern */
M2C_UNK func_009C24F0(M2C_UNK);                     /* extern */
M2C_UNK func_009C26A0(s32);                         /* extern */
M2C_UNK func_009C2720(M2C_UNK);                     /* extern */
M2C_UNK func_009C2820(s32);                         /* extern */
M2C_UNK func_009C2980(M2C_UNK);                     /* extern */
M2C_UNK func_009C2A70(void *);                      /* extern */
M2C_UNK func_009C2B60(M2C_UNK);                     /* extern */
M2C_UNK func_009C2DD0(M2C_UNK, s32);                /* extern */
M2C_UNK func_009C3180(M2C_UNK);                     /* extern */
extern void *D_00A7DD70;

void func_009C7840(s8 arg0) {
    s32 temp_s1;
    s32 temp_s2;
    s32 temp_s3;
    s32 temp_v0_2;
    void *temp_v0;

    if ((D_00A7DD70 == NULL) && (temp_v0 = func_0099C7E0(0x54), D_00A7DD70 = temp_v0, (temp_v0 != NULL))) {
        M2C_FIELD(temp_v0, s8 *, 0x4C) = arg0;
        temp_s3 = func_00824850();
        temp_s2 = func_001F08B0(0x01FC001D);
        temp_s1 = func_001C80F0(temp_s3);
        M2C_FIELD(D_00A7DD70, void **, 0x50) = func_0099C7E0(temp_s1 + func_001C80F0(temp_s2) + 1);
        sprintf(M2C_FIELD(D_00A7DD70, void **, 0x50), temp_s2, temp_s3);
        func_009C3180(1);
        func_009C2B60(1);
        func_009C2490(0);
        func_009C24F0(0);
        func_009C2460(0);
        func_009C2420(0x40);
        temp_v0_2 = func_009C23E0(0x40);
        if (arg0 == 0) {
            func_009C2DD0(0, 0x01F70000);
        } else {
            func_009C2DD0(0, temp_v0_2 | 0x2D);
        }
        func_009C2DD0(1, 0x01FC0024);
        func_009C2DD0(2, 0x02070002);
        func_009C2A70(M2C_FIELD(D_00A7DD70, void **, 0x50));
        func_009C2980(1);
        func_009C2720(0);
        func_009C26A0(func_001F08B0(0x01FC001F));
        func_009C23A0(8);
        func_009C2360(8);
        if (arg0 == 1) {
            func_009C2A70(func_00965F50());
            func_009C2820(func_00965EC0());
        }
        switch (arg0) {                             /* irregular */
        case 1:
            func_0099C730(0x01FC0033);
            break;
        case 0:
            func_0099C730(0x01FC0001);
            return;
        }
    }
}
