/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern int func_003387D0(void *, int);
extern int func_00333600(int);
extern int func_003395B0(void *);
extern s32 func_00338720(void *, s32);
extern s32 func_00338A60(void *, void *);
extern s32 func_003389F0(void *, s32, s32);
M2C_UNK func_00336B80(void *, s32 *, s32 *, void *); /* extern */
void *func_00338AD0(M2C_UNK, M2C_UNK *, s32, M2C_UNK *); /* extern */
extern char D_003E5F18[];
extern M2C_UNK func_00336490;
extern M2C_UNK func_00336E10;
extern M2C_UNK func_003373B0;
extern M2C_UNK func_00337FF0;

s32 func_00337480(void *arg0) {
    s32 sp68;
    s32 sp6C;
    s32 temp_s0;
    s32 temp_s0_2;
    u8 temp_v1;
    u8 temp_v1_2;
    void *temp_s1;
    void *temp_s2;
    void *temp_s3;
    void *temp_v0;
    void *temp_v0_2;
    void *temp_v0_3;
    void *temp_v1_3;

    temp_s3 = M2C_FIELD(arg0, void **, 0x3C);
    temp_s1 = M2C_FIELD(arg0, void **, 0x40);
    temp_s2 = M2C_FIELD(arg0, void **, 0x44);
    temp_s0 = func_00333600(6);
    temp_v1 = M2C_FIELD(temp_s1, u8 *, 8);
    temp_s0_2 = temp_s0 | func_00333600(5);
    if ((temp_v1 | temp_s0_2) == 0) {

    } else {
        if (temp_v1 != 0) {
            if (M2C_FIELD(temp_s1, s32 *, 0x74) != 0xB) {

            } else {
                temp_v1_2 = M2C_FIELD((temp_s1 + 0x74), u8 *, 0x20);
                if ((temp_v1_2 != 2) && (temp_v1_2 != 1)) {

                } else {
                    temp_v1_3 = temp_s3 + (M2C_FIELD(temp_s3, u8 *, 0x36) * 8);
                    M2C_FIELD(temp_v1_3, s32 *, 0x28) = (s32) M2C_FIELD(temp_v1_3, s32 *, 0x24);
                    M2C_FIELD(temp_v1_3, s32 *, 0x24) = func_003395B0(temp_s2);
                    temp_v0 = func_00338AD0(0x32, &func_003373B0, M2C_FIELD(arg0, s32 *, 8), ((void *)D_003E5F18));
                    func_00338A60(temp_v0, arg0);
                    func_00338720(temp_v0, 1);
                }
            }
        }
        temp_v0_2 = func_00338AD0(0x80000003, &func_00336E10, 6, ((void *)D_003E5F18));
        func_00338A60(temp_v0_2, arg0);
        if (temp_s0_2 != 0) {
            func_00338720(temp_v0_2, 0x19);
        }
        if (temp_s0_2 != 0) {
            func_00336B80(temp_s3, &sp6C, &sp68, temp_s1);
            func_003389F0(temp_v0_2, 0, sp6C);
            func_003389F0(temp_v0_2, 1, sp68);
            temp_v0_3 = func_00338AD0(0x80000024, &func_00336490, 3, ((void *)D_003E5F18));
            func_00338720(temp_v0_3, 3);
            func_003389F0(temp_v0_3, 0, sp6C);
            func_003389F0(temp_v0_3, 1, sp68);
            func_003389F0(temp_v0_3, 3, 1);
            func_00338A60(temp_v0_3, arg0);
        }
        func_003387D0(arg0, (s32) &func_00337FF0);
    }
    return 0;
}
