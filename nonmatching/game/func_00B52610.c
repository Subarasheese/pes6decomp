/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u8 func_00BF6260(void);
extern u8 func_00BF6270(void);
M2C_UNK func_00209A00(void *, s32, M2C_UNK);        /* extern */
s16 func_009B33F0(void *, void *);                  /* extern */
s16 func_009B3480(void *, void *, M2C_UNK, M2C_UNK); /* extern */
void **func_00B2A420(u8);                           /* extern */
M2C_UNK func_00B347F0(void **, void **, M2C_UNK, M2C_UNK, u8, M2C_UNK, M2C_UNK); /* extern */
s32 func_00BB1310(M2C_UNK);                         /* extern */
s32 func_00BBB990(u16, M2C_UNK);                    /* extern */
s32 func_00BBB9C0(u16, M2C_UNK);                    /* extern */
extern char D_00CBCB37[];
extern char D_00CBCB3C[];

void func_00B52610(void) {
    s16 var_v0;
    s32 temp_v1;
    s32 temp_v1_2;
    u16 temp_a1_4;
    u16 temp_a3;
    void **temp_s0;
    void **temp_s1;
    void **temp_v0;
    void *temp_a0;
    void *temp_a0_2;
    void *temp_a1;
    void *temp_a1_2;
    void *temp_a1_3;
    void *temp_a2;
    void *temp_a3_2;

    temp_s1 = func_00B2A420(func_00BF6270());
    temp_s0 = func_00B2A420(func_00BF6260());
    temp_v0 = func_00B2A420(0U);
    if ((*(u8 *)D_00CBCB37) == 0x15) {
        func_00209A00(M2C_FIELD(M2C_FIELD(temp_s1, void **, 0), void **, 4), func_00BB1310(0xA2) & 0xFFFF, 0);
        M2C_FIELD(M2C_FIELD(temp_s1, void **, 0), s8 *, 0x66) = 0xFF;
        M2C_FIELD(M2C_FIELD(M2C_FIELD(temp_s1, void **, 0), void **, 4), u8 *, 0x2D) = (u8) (*(u8 *)D_00CBCB3C);
        M2C_FIELD(M2C_FIELD(*temp_s0, void **, 4), u8 *, 0x2D) = (u8) (*(u8 *)D_00CBCB3C);
        func_00B347F0(temp_s0, temp_s1, 0x6E, 0, (*(u8 *)D_00CBCB3C), 0xBF418937, 0x41233B64);
        M2C_FIELD(M2C_FIELD(temp_s1, void **, 4), s8 *, 0x4C) = 0xFF;
        M2C_FIELD(M2C_FIELD(temp_s1, void **, 0), s8 *, 0x16) = 0x32;
    } else {
        temp_a1 = *temp_v0;
        temp_a0 = *temp_s0;
        if ((fabsf(M2C_FIELD(temp_a1, f32 *, 0xE0)) <= fabsf(M2C_FIELD(temp_a0, f32 *, 0xE0))) && (fabsf(M2C_FIELD(temp_a1, f32 *, 0xE8)) <= fabsf(M2C_FIELD(temp_a0, f32 *, 0xE8)))) {
            var_v0 = func_009B33F0(temp_a0, temp_a1);
        } else {
            var_v0 = func_009B3480(temp_a0, temp_a1, 0, 0);
        }
        M2C_FIELD(M2C_FIELD(temp_s1, void **, 0), s16 *, 0x26) = var_v0;
        if ((*(u8 *)D_00CBCB37) == 0x16) {
            func_00209A00(M2C_FIELD(M2C_FIELD(temp_s1, void **, 0), void **, 4), func_00BB1310(0x9B) & 0xFFFF, 0);
            M2C_FIELD(M2C_FIELD(temp_s1, void **, 0), s8 *, 0x66) = 0xFF;
            M2C_FIELD(M2C_FIELD(M2C_FIELD(temp_s1, void **, 0), void **, 4), u8 *, 0x2D) = (u8) (*(u8 *)D_00CBCB3C);
            M2C_FIELD(M2C_FIELD(temp_s1, void **, 0), f32 *, 0xE0) = (f32) (M2C_FIELD(*temp_s0, f32 *, 0xE0) - (f32) func_00BBB990(M2C_FIELD(M2C_FIELD(temp_s1, void **, 0), u16 *, 0x26), 0x2F0));
            M2C_FIELD(M2C_FIELD(temp_s1, void **, 0), f32 *, 0xE8) = (f32) (M2C_FIELD(*temp_s0, f32 *, 0xE8) - (f32) func_00BBB9C0(M2C_FIELD(M2C_FIELD(temp_s1, void **, 0), u16 *, 0x26), 0x2F0));
            temp_a1_2 = M2C_FIELD(temp_s1, void **, 0);
            M2C_FIELD(temp_a1_2, u16 *, 0x28) = (u16) M2C_FIELD(temp_a1_2, u16 *, 0x26);
            M2C_FIELD(M2C_FIELD(temp_s1, void **, 4), s8 *, 0x4C) = 0xFF;
            temp_v1 = M2C_FIELD(M2C_FIELD(temp_s1, void **, 0), u16 *, 0x26) + 0x4000;
            temp_a3 = temp_v1 & 0xFFFF;
            if ((temp_v1 < 0) && (temp_a3 != 0)) {

            }
            M2C_FIELD(*temp_s0, u16 *, 0x26) = temp_a3;
            temp_a3_2 = *temp_s0;
            M2C_FIELD(temp_a3_2, u16 *, 0x28) = (u16) M2C_FIELD(temp_a3_2, u16 *, 0x26);
            M2C_FIELD(M2C_FIELD(*temp_s0, void **, 4), s8 *, 0x2D) = 1;
            M2C_FIELD(M2C_FIELD(temp_s1, void **, 0), s8 *, 0x16) = 0x32;
        } else {
            func_00209A00(M2C_FIELD(M2C_FIELD(temp_s1, void **, 0), void **, 4), func_00BB1310(0x9E) & 0xFFFF, 0);
            M2C_FIELD(M2C_FIELD(temp_s1, void **, 0), s8 *, 0x66) = 0xFF;
            M2C_FIELD(M2C_FIELD(M2C_FIELD(temp_s1, void **, 0), void **, 4), u8 *, 0x2D) = (u8) (*(u8 *)D_00CBCB3C);
            M2C_FIELD(M2C_FIELD(temp_s1, void **, 0), f32 *, 0xE0) = (f32) (M2C_FIELD(*temp_s0, f32 *, 0xE0) - (f32) func_00BBB990(M2C_FIELD(M2C_FIELD(temp_s1, void **, 0), u16 *, 0x26), 0x460));
            M2C_FIELD(M2C_FIELD(temp_s1, void **, 0), f32 *, 0xE8) = (f32) (M2C_FIELD(*temp_s0, f32 *, 0xE8) - (f32) func_00BBB9C0(M2C_FIELD(M2C_FIELD(temp_s1, void **, 0), u16 *, 0x26), 0x460));
            temp_a1_3 = M2C_FIELD(temp_s1, void **, 0);
            M2C_FIELD(temp_a1_3, u16 *, 0x28) = (u16) M2C_FIELD(temp_a1_3, u16 *, 0x26);
            M2C_FIELD(M2C_FIELD(temp_s1, void **, 4), s8 *, 0x4C) = 0xFF;
            temp_a0_2 = M2C_FIELD(temp_s1, void **, 0);
            if (M2C_FIELD(M2C_FIELD(temp_a0_2, void **, 4), u8 *, 0x2D) != 0) {
                temp_v1_2 = M2C_FIELD(temp_a0_2, u16 *, 0x26) + 0x4000;
                temp_a1_4 = temp_v1_2 & 0xFFFF;
                if ((temp_v1_2 < 0) && (temp_a1_4 != 0)) {

                }
                M2C_FIELD(*temp_s0, u16 *, 0x26) = temp_a1_4;
                M2C_FIELD(M2C_FIELD(*temp_s0, void **, 4), s8 *, 0x2D) = 1;
            } else {
                M2C_FIELD(*temp_s0, u16 *, 0x26) = (u16) (M2C_FIELD(temp_a0_2, u16 *, 0x26) - 0x4000);
                M2C_FIELD(M2C_FIELD(*temp_s0, void **, 4), s8 *, 0x2D) = 0;
            }
            temp_a2 = *temp_s0;
            M2C_FIELD(temp_a2, u16 *, 0x28) = (u16) M2C_FIELD(temp_a2, u16 *, 0x26);
            M2C_FIELD(M2C_FIELD(temp_s1, void **, 0), s8 *, 0x16) = 0x32;
        }
    }
    M2C_FIELD(M2C_FIELD(temp_s1, void **, 0), s16 *, 0x18) = 7;
}
