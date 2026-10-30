/* compiler: mwcc-3.0.1b151 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_002F39A0(void *);
extern u32 func_00B0A1E0(void);
M2C_UNK func_0026E840(M2C_UNK);                     /* extern */
s32 func_002F3850(void *);                          /* extern */
void *func_00994750();                              /* extern */
M2C_UNK func_009BD930(M2C_UNK);                     /* extern */
M2C_UNK func_009BE0B0();                            /* extern */
M2C_UNK func_009BE2E0(u16, s32 *, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_00B077C0();                            /* extern */
M2C_UNK func_00B07B10(u16);                         /* extern */
M2C_UNK func_00B08380(s32);                         /* extern */
extern s8 D_003EADE8;

s32 func_00B092B0(void) {
    s32 sp20;
    s32 sp24;
    s32 sp28;
    s32 sp2C;
    s32 temp_v1;
    u32 temp_v0;

    temp_v0 = func_00B0A1E0();
    if (temp_v0 != 0) {
        if (M2C_FIELD(temp_v0, s16 *, 0x480) == 0) {
            temp_v1 = M2C_FIELD(temp_v0, s32 *, 0x2C);
            switch (temp_v1) {                      /* irregular */
            case 2:
                if (func_002F3850(M2C_FIELD(temp_v0, void **, 0x44)) == 2) {
                    if (M2C_FIELD(temp_v0, s32 *, 0x48C) == 6) {
                        M2C_FIELD(temp_v0, s32 *, 0x2C) = 4;
                    } else {
                        M2C_FIELD(temp_v0, s32 *, 0x2C) = 1;
                        func_00B07B10(M2C_FIELD(temp_v0, u16 *, 0x488));
                        sp28 = 0;
                        sp20 = 0x42200000;
                        sp2C = 0;
                        sp24 = 0xC2960000;
                        func_009BE2E0(M2C_FIELD(temp_v0, u16 *, 0x488), &sp20, 0, 1);
                        func_009BD930(0);
                    }
                    func_002F39A0(M2C_FIELD(temp_v0, void **, 0x44));
                    func_00B08380(M2C_FIELD(temp_v0, s32 *, 0x2C));
block_44:
                    func_0026E840(0x84008401);
                }
                goto block_45;
            case 4:
                M2C_FIELD(temp_v0, s32 *, 0x2C) = 6;
                M2C_FIELD(temp_v0, s32 *, 0x48C) = 1;
                M2C_FIELD(temp_v0, u16 *, 0x1C) = (u16) M2C_FIELD(func_00994750(), u16 *, 0xA);
                func_00B08380(M2C_FIELD(temp_v0, s32 *, 0x2C));
                goto block_44;
            case 3:
                if (func_002F3850(M2C_FIELD(temp_v0, void **, 0x34)) != 2) {

                } else {
                    func_00B077C0();
                    func_009BE0B0();
                    D_003EADE8 = 0;
                    M2C_FIELD(temp_v0, s32 *, 0x2C) = 6;
                    func_00B08380(6);
                    goto block_44;
                }
                goto block_45;
            case 1:
                if (func_002F3850(M2C_FIELD(temp_v0, void **, 0x34)) != 2) {

                } else {
                    func_00B077C0();
                    func_009BE0B0();
                    D_003EADE8 = 0;
                    M2C_FIELD(temp_v0, s32 *, 0x48C) = 1;
                    M2C_FIELD(temp_v0, s32 *, 0x2C) = 6;
                    func_00B08380(6);
                    goto block_44;
                }
                goto block_45;
            case 0:
                M2C_FIELD(temp_v0, s32 *, 0x2C) = 6;
                func_00B08380(6);
                goto block_44;
            default:
                return 0;
            }
        } else {
            goto block_45;
        }
    } else {
block_45:
        return 0;
    }
}
