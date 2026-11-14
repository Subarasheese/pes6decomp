/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

s32 func_00B35C60();
void func_00BD3B80(void **, s32);
void func_00BD3BA0(void **, s32, s32);
void func_00BD3CF0(void **, f32, f32);
void func_00BD4040(void **, s32, void *);
extern f32 D_00CBCAD8[];
extern f32 D_00CBCADC[];

void func_00BE3E40(void **arg0) {
    s32 temp_s1;
    void *temp_v0;
    void *temp_a2;

    temp_s1 = ((func_00B35C60() != 0) ^ 1) & 0xFF;
    temp_a2 = *arg0;
    M2C_FIELD(temp_a2, f32 *, 0x6C) = D_00CBCAD8[0];
    M2C_FIELD(*arg0, f32 *, 0x70) = D_00CBCADC[0];
    func_00BD4040(arg0, 3, temp_a2);
    func_00BD3BA0(arg0, 4, 1);
    func_00BD3B80(arg0, temp_s1);
    temp_v0 = *arg0;
    func_00BD3CF0(arg0, M2C_FIELD(temp_v0, f32 *, 0x6C), M2C_FIELD(temp_v0, f32 *, 0x70));
    M2C_FIELD(*arg0, s16 *, 0x18) = 0x82;
}
