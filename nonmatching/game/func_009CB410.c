/* compiler: mwcc-3.0.1b151 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_00207D10(void *);
M2C_UNK func_00207390(void *, M2C_UNK);             /* extern */
M2C_UNK func_002084C0(void *);                      /* extern */
M2C_UNK func_00209A00(void *, M2C_UNK, M2C_UNK);    /* extern */
M2C_UNK func_00930240(void *);                      /* extern */
u16 func_009B32D0(u16, u16, u16);                   /* extern */
u32 func_009B33A0(void *, s32, s32);                /* extern */
s32 func_009B3480(void *, f32, f32);                /* extern */
M2C_UNK func_00A008A0(void *, u16, M2C_UNK);        /* extern */
M2C_UNK func_00AA7B70(void *, s32, u16, s32, M2C_UNK); /* extern */
M2C_UNK func_00B00970(void *, s32);                 /* extern */
s32 func_00BC03A0(u16);                             /* extern */
M2C_UNK func_00C1E010(void *);                      /* extern */
extern f32 *D_003E74CC;
extern void *Pes6Ball_Current;

void func_009CB410(void *arg0) {
    s32 temp_v0;
    u16 temp_v1;
    void *temp_a0;

    temp_a0 = M2C_FIELD(arg0, void **, 4);
    temp_v1 = M2C_FIELD(temp_a0, u16 *, 0x30);
    switch (temp_v1) {                              /* irregular */
    case 0x1A3:
        M2C_FIELD(arg0, u16 *, 0x26) = func_009B32D0(M2C_FIELD(arg0, u16 *, 0x34), M2C_FIELD(arg0, u16 *, 0x26), M2C_FIELD(arg0, u16 *, 0x38));
        M2C_FIELD(arg0, u16 *, 0x42) = (u16) M2C_FIELD(arg0, u16 *, 0x28);
        func_00930240(arg0);
        if (func_00207D10(M2C_FIELD(arg0, void **, 4)) != 0) {
            func_002084C0(M2C_FIELD(arg0, void **, 4));
        }
        return;
    case 0x29E:
        if (func_00207D10(temp_a0) != 0) {
            func_00209A00(M2C_FIELD(arg0, void **, 4), 0x12E, 0);
            func_00207390(M2C_FIELD(arg0, void **, 4), 4);
        }
        return;
    case 0x1FC:
    case 0x276:
    case 0x3E8:
        func_00930240(arg0);
        if (func_00207D10(M2C_FIELD(arg0, void **, 4)) != 0) {
            func_00209A00(M2C_FIELD(arg0, void **, 4), 0x12E, 0);
            func_00207390(M2C_FIELD(arg0, void **, 4), 4);
        }
        return;
    case 0x277:
    case 0x278:
        func_00A008A0(arg0, M2C_FIELD(arg0, u16 *, 0x38), 1);
        M2C_FIELD(arg0, u16 *, 0x42) = (u16) M2C_FIELD(arg0, u16 *, 0x28);
        func_00930240(arg0);
        if (func_00207D10(M2C_FIELD(arg0, void **, 4)) != 0) {
            func_002084C0(M2C_FIELD(arg0, void **, 4));
        }
        return;
    default:
        temp_v0 = func_00BC03A0(temp_v1);
        if ((temp_v0 != 0x40) && (temp_v0 != 0x41) && (temp_v0 != 0x3F) && (temp_v0 != 0x3E)) {
            if (M2C_FIELD(Pes6Ball_Current, u16 *, 0x84) == 9) {
                if (func_009B33A0(arg0, (s32) M2C_FIELD(arg0, f32 *, 0x88), (s32) M2C_FIELD(arg0, f32 *, 0x8C)) >= 0x4000U) {
                    func_00AA7B70(arg0, func_009B3480(arg0, M2C_FIELD(arg0, f32 *, 0x88), M2C_FIELD(arg0, f32 *, 0x8C)), M2C_FIELD(arg0, u16 *, 0x26), 0x1900 - (M2C_FIELD(arg0, u8 *, 0x5C) * 0xC), 0x200);
                }
                return;
            }
            if (M2C_FIELD(arg0, u8 *, 0x16) == 0x89) {
                M2C_FIELD(arg0, s32 *, 0xA8) = (s32) M2C_FIELD(arg0, u16 *, 0x2C);
            }
            func_00C1E010(arg0);
            M2C_FIELD(arg0, s8 *, 0x66) = 3;
            return;
        }
        func_00B00970(arg0, (s32) (1024.0f * *D_003E74CC));
        return;
    }
}
