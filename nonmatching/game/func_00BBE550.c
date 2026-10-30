/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_00207D80(void *, s32);
extern s32 func_00207920(void *);
extern void func_00284A20(void *);
extern s32 func_00207D10(void *);
M2C_UNK func_00208610(void *);                      /* extern */
M2C_UNK func_00284E60(void *, u16, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_00B2ACF0();                            /* extern */
M2C_UNK func_00B37330(M2C_UNK);                     /* extern */
M2C_UNK func_00B84790(void **, u16, u16, u8, M2C_UNK, f32); /* extern */
M2C_UNK func_00BB7170(void **);                     /* extern */
extern void *Pes6Ball_Current;
extern char Pes6MatchState_Current[];
extern char D_00591E6C[];
extern char D_00591E70[];
extern char D_00591E74[];

void func_00BBE550(void **arg0) {
    f32 temp_f12;
    f32 temp_f12_2;
    u16 temp_a1;
    void *temp_a0;
    void *temp_a0_2;
    void *temp_a0_3;
    void *temp_a2;
    void *temp_v1;

    func_00B2ACF0();
    if (func_00207920(M2C_FIELD(*arg0, void **, 4)) >= 0x1771) {
        func_00B37330(0);
    }
    temp_a2 = *arg0;
    temp_v1 = M2C_FIELD(temp_a2, void **, 4);
    temp_a1 = M2C_FIELD(temp_v1, u16 *, 0x30);
    switch (temp_a1) {                              /* irregular */
    case 0x499:
        temp_f12 = M2C_FIELD(temp_v1, f32 *, 0x38);
        if (temp_f12 <= 50.0f) {
            func_00B84790(arg0, temp_a1, M2C_FIELD(temp_a2, u16 *, 0x26), M2C_FIELD(temp_v1, u8 *, 0x2D), 1, temp_f12);
            M2C_FIELD(Pes6Ball_Current, f32 *, 0x10) = (f32) (*(f32 *)D_00591E6C);
            M2C_FIELD(Pes6Ball_Current, f32 *, 0) = (f32) (*(f32 *)D_00591E70);
            M2C_FIELD(Pes6Ball_Current, f32 *, 0) = (f32) (*(f32 *)D_00591E74);
            func_00284A20(*arg0);
            (*(u8 *)Pes6MatchState_Current) = M2C_FIELD(*arg0, u8 *, 0);
        } else if (func_00207D80(temp_v1, 0x34) != 0) {
            M2C_FIELD(Pes6Ball_Current, s8 *, 0x62) = 1;
            temp_a0 = *arg0;
            func_00284E60(temp_a0, M2C_FIELD(temp_a0, u16 *, 0x2C), 0x3000, 0);
            M2C_FIELD(Pes6Ball_Current, s32 *, 0x30) = 0xC59C4000;
block_23:
            M2C_FIELD(*arg0, s8 *, 0x66) = 0;
        }
        break;
    case 0x498:
        temp_f12_2 = M2C_FIELD(temp_v1, f32 *, 0x38);
        if (temp_f12_2 <= 40.0f) {
            func_00B84790(arg0, temp_a1, M2C_FIELD(temp_a2, u16 *, 0x26), M2C_FIELD(M2C_FIELD(temp_a2, void **, 4), u8 *, 0x2D), 1, temp_f12_2);
            M2C_FIELD(Pes6Ball_Current, f32 *, 0x10) = (f32) (*(f32 *)D_00591E6C);
            M2C_FIELD(Pes6Ball_Current, f32 *, 0) = (f32) (*(f32 *)D_00591E70);
            M2C_FIELD(Pes6Ball_Current, f32 *, 0) = (f32) (*(f32 *)D_00591E74);
            func_00284A20(*arg0);
            (*(u8 *)Pes6MatchState_Current) = M2C_FIELD(*arg0, u8 *, 0);
        } else {
            if (func_00207D80(temp_v1, 0x2A) != 0) {
                M2C_FIELD(Pes6Ball_Current, s8 *, 0x62) = 1;
                temp_a0_2 = *arg0;
                func_00284E60(temp_a0_2, M2C_FIELD(temp_a0_2, u16 *, 0x2C), 0xA00, 0);
                goto block_23;
            }
            if (func_00207D80(M2C_FIELD(*arg0, void **, 4), 0x3C) != 0) {
                M2C_FIELD(Pes6Ball_Current, s8 *, 0x62) = 1;
                temp_a0_3 = *arg0;
                func_00284E60(temp_a0_3, M2C_FIELD(temp_a0_3, u16 *, 0x2C), 0x5800, 0);
                M2C_FIELD(*arg0, s8 *, 0x66) = 0;
                M2C_FIELD(Pes6Ball_Current, s32 *, 0x30) = 0xC6BB8000;
            }
        }
        break;
    }
    if (func_00207D10(M2C_FIELD(*arg0, void **, 4)) != 0) {
        M2C_FIELD(*arg0, s8 *, 0x66) = 3;
        func_00208610(M2C_FIELD(*arg0, void **, 4));
        func_00BB7170(arg0);
    }
}
