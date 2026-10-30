/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_00207D80(void *, s32);
extern int func_002A87C0(void);
M2C_UNK func_002075B0(void *, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_00B67AD0(void *);                      /* extern */
M2C_UNK func_00B67F30(void *);                      /* extern */
s32 func_00BA87B0(void *, u8);                      /* extern */
s32 func_00BBB8C0(M2C_UNK);                         /* extern */
s32 func_00BBB990(u16, M2C_UNK);                    /* extern */
s32 func_00BBB9C0(u16, M2C_UNK);                    /* extern */
M2C_UNK func_00BD3CF0(void *, f32, f32);            /* extern */
M2C_UNK func_00BD4040(void *, M2C_UNK);             /* extern */
extern char D_00591E4D[];
extern char D_00591E57[];
extern char D_00591F24[];
extern char D_00CBD269[];

void func_00B668A0(void *arg0) {
    u8 temp_v1;
    void *temp_a0;
    void *temp_a0_2;
    void *temp_s1;
    void *temp_s1_2;
    void *temp_v0;

    if ((*(u8 *)D_00591F24) == 5) {
        temp_s1 = M2C_FIELD(arg0, void **, 0);
        if (M2C_FIELD(temp_s1, u8 *, 0) == (*(u8 *)D_00CBD269)) {
            M2C_FIELD(temp_s1, f32 *, 0x6C) = (f32) (M2C_FIELD(temp_s1, f32 *, 0xE0) + (f32) func_00BBB990(M2C_FIELD(temp_s1, u16 *, 0x26), 0x800));
            temp_s1_2 = M2C_FIELD(arg0, void **, 0);
            M2C_FIELD(temp_s1_2, f32 *, 0x70) = (f32) (M2C_FIELD(temp_s1_2, f32 *, 0xE8) + (f32) func_00BBB9C0(M2C_FIELD(temp_s1_2, u16 *, 0x26), 0x800));
        }
    }
    temp_v0 = M2C_FIELD(arg0, void **, 0);
    func_00BD3CF0(arg0, M2C_FIELD(temp_v0, f32 *, 0x6C), M2C_FIELD(temp_v0, f32 *, 0x70));
    if ((u32) ((*(u8 *)D_00591F24) - 5) < 2U) {
        temp_a0 = M2C_FIELD(M2C_FIELD(arg0, void **, 0), void **, 4);
        if ((M2C_FIELD(temp_a0, u16 *, 0x30) == 0x48E) && (func_00207D80(temp_a0, 0) != 0) && ((func_00BBB8C0(0x64) % 3) == 0) && ((temp_a0_2 = M2C_FIELD(arg0, void **, 0), temp_v1 = M2C_FIELD(temp_a0_2, u8 *, 0), (temp_v1 == (*(u8 *)D_00591E57))) || (temp_v1 == (*(u8 *)D_00591E4D)))) {
            func_002075B0(M2C_FIELD(temp_a0_2, void **, 4), 0x414, 0, 8);
            func_00BD4040(arg0, 3);
            M2C_FIELD(M2C_FIELD(arg0, void **, 0), s16 *, 0x18) = 8;
            return;
        }
    }
    func_00B67F30(arg0);
    if (func_00BA87B0(arg0, M2C_FIELD(M2C_FIELD(arg0, void **, 4), u8 *, 0x4C)) != 0) {
        M2C_FIELD(M2C_FIELD(arg0, void **, 0), s8 *, 0x4E) = 0;
        func_00B67AD0(arg0);
    }
    if (func_002A87C0() == 0) {
        M2C_FIELD(M2C_FIELD(arg0, void **, 0), s8 *, 0x16) = 0xFD;
        M2C_FIELD(M2C_FIELD(arg0, void **, 0), s16 *, 0x18) = 0;
    }
}
