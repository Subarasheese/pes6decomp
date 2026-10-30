/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

s32 func_002624E0();                                /* extern */
s32 func_00262500();                                /* extern */
s32 func_00262530();                                /* extern */
s32 func_00262560();                                /* extern */
s32 func_00262590();                                /* extern */
s32 func_002625C0();                                /* extern */
M2C_UNK func_0026B580(void *, M2C_UNK, s32);        /* extern */
M2C_UNK func_0026E840(M2C_UNK);                     /* extern */
s32 func_00C99E60(M2C_UNK, M2C_UNK *, M2C_UNK *, M2C_UNK *, M2C_UNK *); /* extern */
extern void *D_003AE9D0;
extern char D_00CA9640[];
extern M2C_UNK func_008F68C0;
extern M2C_UNK func_008F6930;
extern M2C_UNK func_008F6990;

s32 func_008F6A60(M2C_UNK arg0, M2C_UNK arg1, M2C_UNK arg2, s32 arg3) {
    s32 temp_s1;
    s32 temp_s1_2;
    s32 temp_s1_3;
    s32 temp_s1_4;
    s32 temp_s1_6;
    u16 temp_s1_5;
    void *temp_s2;

    func_0026E840(0x84008401);
    temp_s1 = M2C_FIELD(D_003AE9D0, s32 *, 0x2C);
    if (temp_s1 == (func_002624E0() & 0xFF)) {
        temp_s1_2 = M2C_FIELD(D_003AE9D0, s32 *, 0x30);
        if (temp_s1_2 == func_002625C0()) {
            temp_s1_3 = M2C_FIELD(D_003AE9D0, s32 *, 0x34);
            if (temp_s1_3 == func_00262590()) {
                temp_s1_4 = M2C_FIELD(D_003AE9D0, s32 *, 0x38);
                if (temp_s1_4 == func_00262560()) {
                    temp_s2 = D_003AE9D0;
                    temp_s1_5 = M2C_FIELD(temp_s2, u16 *, 0x3C);
                    if (temp_s1_5 == (func_00262530() & 0xFFFF)) {
                        temp_s1_6 = M2C_FIELD(temp_s2, s32 *, 0x40);
                        if (temp_s1_6 == func_00262500()) {
                            func_0026B580(temp_s2, 7, arg3);
                            M2C_FIELD(D_003AE9D0, s8 *, 0xE5) = -1;
                            return 2;
                        }
                        goto block_8;
                    }
                }
            }
        }
    }
block_8:
    M2C_FIELD(D_003AE9D0, s32 *, 0xEC) = func_00C99E60(0x6C0084, ((void *)D_00CA9640), &func_008F6990, &func_008F6930, &func_008F68C0);
    return 0;
}
