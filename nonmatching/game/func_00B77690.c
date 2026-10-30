/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_00207BE0(void *);
extern s32 func_00152130(s32, s8);
M2C_UNK func_00B2ACF0();                            /* extern */
M2C_UNK func_00B84790(void **, u16, u16, u8, M2C_UNK, f32); /* extern */
s32 func_00BA91C0();                                /* extern */
M2C_UNK func_00BA92A0(u8);                          /* extern */
s32 func_00BAC710(u16);                             /* extern */
s32 func_00BC03A0(u16);                             /* extern */
extern void *Pes6Ball_Current;
extern char D_00591BE4[];
extern char D_00591E14[];
extern char D_00591E4D[];
extern char D_00591E6C[];
extern char D_00591E70[];
extern char D_00591E74[];
extern char D_00CBBE03[];

void func_00B77690(void **arg0) {
    f32 temp_f12;
    f32 temp_f12_2;
    s32 temp_v0;
    u32 temp_a0;
    u32 temp_a0_2;
    u32 temp_a0_3;
    void *temp_v0_2;
    void *temp_v0_3;
    void *temp_v1;
    void *temp_v1_2;

    func_00B2ACF0();
    temp_v0 = func_00BAC710(M2C_FIELD(M2C_FIELD(*arg0, void **, 4), u16 *, 0x30));
    switch (temp_v0) {                              /* irregular */
    case 20:
        temp_v1 = *arg0;
        temp_v0_2 = M2C_FIELD(temp_v1, void **, 4);
        temp_f12 = M2C_FIELD(temp_v0_2, f32 *, 0x38);
        if (temp_f12 < 146.0f) {
            func_00B84790(arg0, M2C_FIELD(temp_v0_2, u16 *, 0x30), M2C_FIELD(temp_v1, u16 *, 0x26), M2C_FIELD(temp_v0_2, u8 *, 0x2D), 1, temp_f12);
            M2C_FIELD(Pes6Ball_Current, f32 *, 0x10) = (f32) (*(f32 *)D_00591E6C);
            M2C_FIELD(Pes6Ball_Current, f32 *, 0) = (f32) (*(f32 *)D_00591E70);
            M2C_FIELD(Pes6Ball_Current, f32 *, 0) = (f32) (*(f32 *)D_00591E74);
        }
        temp_a0 = (*(u32 *)D_00591E14) + 1;
        (*(u32 *)D_00591E14) = temp_a0;
        if (temp_a0 >= (u32) ((*(u8 *)D_00591BE4) * 4)) {
block_23:
            (*(u8 *)D_00CBBE03) = 1;
        }
        break;
    case 19:
        temp_v1_2 = *arg0;
        temp_v0_3 = M2C_FIELD(temp_v1_2, void **, 4);
        temp_f12_2 = M2C_FIELD(temp_v0_3, f32 *, 0x38);
        if (temp_f12_2 < 160.0f) {
            func_00B84790(arg0, M2C_FIELD(temp_v0_3, u16 *, 0x30), M2C_FIELD(temp_v1_2, u16 *, 0x26), M2C_FIELD(temp_v0_3, u8 *, 0x2D), 1, temp_f12_2);
            M2C_FIELD(Pes6Ball_Current, f32 *, 0x10) = (f32) (*(f32 *)D_00591E6C);
            M2C_FIELD(Pes6Ball_Current, f32 *, 0) = (f32) (*(f32 *)D_00591E70);
            M2C_FIELD(Pes6Ball_Current, f32 *, 0) = (f32) (*(f32 *)D_00591E74);
        }
        temp_a0_2 = (*(u32 *)D_00591E14) + 1;
        (*(u32 *)D_00591E14) = temp_a0_2;
        if (temp_a0_2 >= (u32) ((*(u8 *)D_00591BE4) * 4)) {
            goto block_23;
        }
        break;
    default:
        if (func_00BC03A0(M2C_FIELD(M2C_FIELD(*arg0, void **, 4), u16 *, 0x30)) == 0x10) {
            M2C_FIELD(*arg0, s32 *, 0x1C) = 0;
            func_00207BE0(M2C_FIELD(*arg0, void **, 4));
            temp_a0_3 = (*(u32 *)D_00591E14) + 1;
            (*(u32 *)D_00591E14) = temp_a0_3;
            if (temp_a0_3 >= (u8) (*(u8 *)D_00591BE4)) {
                goto block_23;
            }
        }
        break;
    }
    if (((u32) (*(u32 *)D_00591E14) < (u8) (*(u8 *)D_00591BE4)) && ((*(u8 *)D_00CBBE03) == 0) && (func_00152130(0, ((0x3C / (s32) (*(u8 *)D_00591BE4)) * 0x10) & 0xFF) == 0)) {
        return;
    }
    func_00BA92A0((*(u8 *)D_00591E4D));
    if (func_00BA91C0() & 0x1008) {
        (*(u8 *)D_00CBBE03) = 1;
    }
}
