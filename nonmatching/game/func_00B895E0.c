/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u32 func_00208310(s32);
M2C_UNK func_00207390(void *, M2C_UNK);             /* extern */
M2C_UNK func_00209A00(void *, M2C_UNK, s32);        /* extern */
u16 func_009B3480(void *, f32, f32);                /* extern */
M2C_UNK func_00B35E10(f32 *, f32 *);                /* extern */
M2C_UNK func_00B89080(void *, u16, u8, f32 *, f32 *, void *, f32, f32); /* extern */
s32 func_00BBB8C0(M2C_UNK, M2C_UNK, M2C_UNK, u16, u16); /* extern */
extern char D_00CBCAFE[];
extern char D_00CBCB00[];
extern char D_00CBCB04[];

void func_00B895E0(void *arg0) {
    f32 sp38;
    f32 sp3C;
    u16 temp_a3_2;
    u16 temp_a4;
    u8 temp_s0;
    void *temp_a3;
    void *temp_a5;
    void *temp_v1;

    func_00B35E10(&sp3C, &sp38);
    M2C_FIELD(M2C_FIELD(arg0, void **, 0), u16 *, 0x2C) = func_009B3480(M2C_FIELD(arg0, void **, 0), sp3C, sp38);
    temp_a3 = M2C_FIELD(arg0, void **, 0);
    temp_a4 = M2C_FIELD(temp_a3, u16 *, 0x26);
    temp_a3_2 = M2C_FIELD(temp_a3, u16 *, 0x2C);
    M2C_FIELD(M2C_FIELD(arg0, void **, 4), s8 *, 0x52) = 1;
    temp_s0 = (((temp_a4 - temp_a3_2) + 0x10000) & 0xFFFF) < 0x8001;
    M2C_FIELD(M2C_FIELD(arg0, void **, 4), s8 *, 0x50) = 0;
    M2C_FIELD(M2C_FIELD(arg0, void **, 0), s8 *, 0x4E) = (s8) (func_00BBB8C0(0x88, 0x8001, 0x10000, temp_a3_2, temp_a4) % 2);
    if (M2C_FIELD(M2C_FIELD(M2C_FIELD(arg0, void **, 0), void **, 4), u16 *, 0x30) != 0x528) {
        func_00209A00(M2C_FIELD(M2C_FIELD(arg0, void **, 0), void **, 4), 0x528, (M2C_FIELD(func_00208310(0x528), u8 *, 1) * 2) & 0xFFFF);
        func_00207390(M2C_FIELD(M2C_FIELD(arg0, void **, 0), void **, 4), 8);
    }
    temp_v1 = M2C_FIELD(M2C_FIELD(arg0, void **, 0), void **, 4);
    if (M2C_FIELD(temp_v1, u8 *, 0x2D) != (temp_s0 & 0xFF)) {
        M2C_FIELD(temp_v1, u8 *, 0x2D) = temp_s0;
        func_00207390(M2C_FIELD(M2C_FIELD(arg0, void **, 0), void **, 4), 8);
    }
    temp_a5 = M2C_FIELD(arg0, void **, 0);
    (*(f32 *)D_00CBCB00) = M2C_FIELD(temp_a5, f32 *, 0xE0);
    (*(f32 *)D_00CBCB04) = M2C_FIELD(M2C_FIELD(arg0, void **, 0), f32 *, 0xE8);
    (*(u16 *)D_00CBCAFE) = M2C_FIELD(M2C_FIELD(arg0, void **, 0), u16 *, 0x26);
    func_00B89080(arg0, (*(u16 *)D_00CBCAFE), M2C_FIELD(M2C_FIELD(M2C_FIELD(arg0, void **, 0), void **, 4), u8 *, 0x2D), ((void *)D_00CBCB04), ((void *)D_00CBCB00), temp_a5, (*(f32 *)D_00CBCB00), (*(f32 *)D_00CBCB04));
    M2C_FIELD(M2C_FIELD(arg0, void **, 0), s16 *, 0x18) = 5;
}
