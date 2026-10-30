/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_00207D10(void *);
M2C_UNK func_00207390(void *, M2C_UNK);             /* extern */
M2C_UNK func_00208610(void *);                      /* extern */
M2C_UNK func_00209A00(void *, u16, M2C_UNK);        /* extern */
M2C_UNK func_0027A600(void *, M2C_UNK);             /* extern */
M2C_UNK func_009B9EF0(void *);                      /* extern */
M2C_UNK func_009BA3A0(void *);                      /* extern */
M2C_UNK func_009BD890(void *);                      /* extern */
M2C_UNK func_009C1230(void *, M2C_UNK, s32, M2C_UNK, s32, M2C_UNK, M2C_UNK, void *); /* extern */
M2C_UNK func_009CB410(void *, u16);                 /* extern */
M2C_UNK func_009D58B0(void *, u16);                 /* extern */
M2C_UNK func_009D6E10(void *, u16);                 /* extern */
M2C_UNK func_00A99360(M2C_UNK);                     /* extern */
s32 func_00BC03A0(u16);                             /* extern */
M2C_UNK func_00C1EE80(void *);                      /* extern */
extern void *Pes6Ball_Current;

void func_009D5560(void *arg0) {
    s32 temp_v0;
    u16 temp_a0;
    u16 temp_a1;
    u16 temp_v1_3;
    void *temp_a0_2;
    void *temp_a7;
    void *temp_v1;
    void *temp_v1_2;

    func_00A99360(-0x258);
    func_0027A600(arg0, 1);
    temp_a1 = M2C_FIELD(arg0, u16 *, 0x18);
    switch (temp_a1) {                              /* switch 1; irregular */
    case 0x81:                                      /* switch 1 */
        func_009D6E10(arg0, temp_a1);
        temp_v1 = M2C_FIELD(arg0, void **, 4);
        if (M2C_FIELD(temp_v1, f32 *, 0x38) == (f32) (M2C_FIELD(M2C_FIELD(temp_v1, void **, 4), u8 *, 2) * 2)) {
            M2C_FIELD(arg0, s32 *, 0xE4) = 0;
            M2C_FIELD(arg0, s32 *, 0xF4) = 0;
        }
        if (func_00207D10(M2C_FIELD(arg0, void **, 4)) != 0) {
            M2C_FIELD(arg0, s32 *, 0xE4) = 0;
            M2C_FIELD(arg0, s32 *, 0xF4) = 0;
            temp_a0 = M2C_FIELD(M2C_FIELD(arg0, void **, 4), u16 *, 0x30);
            if ((s32) temp_a0 < 0x59A) {
                if (temp_a0 == 0x1B0) {
                    func_00C1EE80(arg0);
                } else {
                    func_009BA3A0(arg0);
                }
            } else if (func_00BC03A0(temp_a0) == 0x42) {
                func_00C1EE80(arg0);
            }
        }
        func_009B9EF0(arg0);
    default:                                        /* switch 1 */
block_34:
        func_009BD890(arg0);
        temp_a7 = M2C_FIELD(arg0, void **, 4);
        func_009C1230(arg0, 0x18, (M2C_FIELD(Pes6Ball_Current, u16 *, 0x58) + (((M2C_FIELD(temp_a7, u8 *, 0x2D) != 0) ? -1 : 1) * 0x6000)) & 0xFFFF, 0, (s32) -(M2C_FIELD(Pes6Ball_Current, f32 *, 0x30) / 188.0f), 0, 0, temp_a7);
        return;
    case 0x80:                                      /* switch 1 */
        M2C_FIELD(M2C_FIELD(arg0, void **, 4), u8 *, 0x2D) = (u8) M2C_FIELD(arg0, u8 *, 0x50);
        func_009D58B0(arg0, temp_a1);
        func_00209A00(M2C_FIELD(arg0, void **, 4), M2C_FIELD(arg0, u16 *, 0xA4), 0);
        func_00207390(M2C_FIELD(arg0, void **, 4), 8);
        M2C_FIELD(arg0, s32 *, 0xE4) = 0;
        M2C_FIELD(arg0, u16 *, 0x18) = 0x81U;
        goto block_34;
    case 0x90:                                      /* switch 1 */
        if (M2C_FIELD(arg0, u8 *, 0x62) != 0) {
            func_009CB410(arg0, temp_a1);
        } else {
            M2C_FIELD(arg0, u16 *, 0x18) = 0x80U;
        }
        return;
    case 0x0:                                       /* switch 1 */
        func_009D6E10((void *)0x80, temp_a1);
        temp_v1_2 = M2C_FIELD(arg0, void **, 4);
        if (M2C_FIELD(temp_v1_2, f32 *, 0x38) == (f32) (M2C_FIELD(M2C_FIELD(temp_v1_2, void **, 4), u8 *, 2) * 2)) {
            M2C_FIELD(arg0, s32 *, 0xE4) = 0;
            M2C_FIELD(arg0, s32 *, 0xF4) = 0;
        }
        if (func_00207D10(M2C_FIELD(arg0, void **, 4)) != 0) {
            M2C_FIELD(arg0, s32 *, 0xE4) = 0;
            M2C_FIELD(arg0, s32 *, 0xF4) = 0;
            temp_a0_2 = M2C_FIELD(arg0, void **, 4);
            temp_v1_3 = M2C_FIELD(temp_a0_2, u16 *, 0x30);
            if ((s32) temp_v1_3 >= 0x59A) {
                temp_v0 = func_00BC03A0(temp_v1_3);
                switch (temp_v0) {                  /* switch 2; irregular */
                case 0x44:                          /* switch 2 */
                    func_00208610(M2C_FIELD(arg0, void **, 4));
                    func_00C1EE80(arg0);
                    break;
                case 0x43:                          /* switch 2 */
                    func_00208610(M2C_FIELD(arg0, void **, 4));
                    M2C_FIELD(arg0, s8 *, 0x16) = 0x9E;
                    M2C_FIELD(arg0, u16 *, 0x18) = 0x20U;
                    break;
                default:                            /* switch 2 */
                    func_00209A00(M2C_FIELD(arg0, void **, 4), 0x29DU, 0);
                    func_00207390(M2C_FIELD(arg0, void **, 4), 4);
                    M2C_FIELD(arg0, s8 *, 0x16) = 0x84;
                    M2C_FIELD(arg0, u16 *, 0x18) = 4U;
                    break;
                }
            } else if (temp_v1_3 != 0x274) {
                func_00209A00(temp_a0_2, 0x29DU, 0);
                func_00207390(M2C_FIELD(arg0, void **, 4), 4);
                M2C_FIELD(arg0, s8 *, 0x16) = 0x84;
                M2C_FIELD(arg0, u16 *, 0x18) = 4U;
            } else {
                func_00208610(temp_a0_2);
                func_00C1EE80(arg0);
            }
        }
        goto block_34;
    }
}
