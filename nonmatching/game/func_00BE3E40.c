/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_00B35C60();                                /* extern */
M2C_UNK func_00BD3B80(void **, s32);                /* extern */
M2C_UNK func_00BD3BA0(void **, M2C_UNK, M2C_UNK);   /* extern */
M2C_UNK func_00BD3CF0(void **, f32, f32);           /* extern */
M2C_UNK func_00BD4040(void **, M2C_UNK, void *);    /* extern */
extern char D_00CBCAD8[];
extern char D_00CBCADC[];

void func_00BE3E40(void **arg0) {
    s32 temp_s1;
    void *temp_a2;
    void *temp_v0;

    temp_a2 = *arg0;
    temp_s1 = (func_00B35C60() == 0) & 0xFF;
    M2C_FIELD(temp_a2, f32 *, 0x6C) = (f32) (*(f32 *)D_00CBCAD8);
    M2C_FIELD(*arg0, f32 *, 0x70) = (f32) (*(f32 *)D_00CBCADC);
    func_00BD4040(arg0, 3, temp_a2);
    func_00BD3BA0(arg0, 4, 1);
    func_00BD3B80(arg0, temp_s1);
    temp_v0 = *arg0;
    func_00BD3CF0(arg0, M2C_FIELD(temp_v0, f32 *, 0x6C), M2C_FIELD(temp_v0, f32 *, 0x70));
    M2C_FIELD(*arg0, s16 *, 0x18) = 0x82;
}
