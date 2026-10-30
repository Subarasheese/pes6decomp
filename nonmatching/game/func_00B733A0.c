/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_00207D80(void *, s32);
extern s32 func_00208210(s32);
extern s32 func_001A5F20(s32);
M2C_UNK func_002075B0(void *, u16, M2C_UNK, M2C_UNK); /* extern */
void **func_00B2A420(u8);                           /* extern */
M2C_UNK func_00B2ACF0();                            /* extern */
extern char D_00CBBDF3[];
extern char D_00CBBE09[];

void func_00B733A0(void *arg0) {
    u16 temp_a1;
    u16 temp_a1_2;
    u16 temp_a1_3;
    u16 temp_a1_4;
    u16 temp_a1_5;
    u16 temp_a1_6;
    u16 temp_a1_7;
    void **temp_s0;
    void *temp_a0;
    void *temp_a0_10;
    void *temp_a0_2;
    void *temp_a0_3;
    void *temp_a0_4;
    void *temp_a0_5;
    void *temp_a0_6;
    void *temp_a0_7;
    void *temp_a0_8;
    void *temp_a0_9;

    func_00B2ACF0();
    temp_s0 = func_00B2A420((*(u8 *)D_00CBBE09));
    if (func_00208210(func_001A5F20(5)) == 0xB0) {
        temp_a0 = M2C_FIELD(M2C_FIELD(arg0, void **, 0), void **, 4);
        if ((M2C_FIELD(temp_a0, u16 *, 0x30) == 0x59A) && (func_00207D80(temp_a0, 0x21C) != 0)) {
            (*(s8 *)D_00CBBDF3) = 1;
        }
    } else if (func_00208210(func_001A5F20(5)) == 0xB1) {
        temp_a0_2 = M2C_FIELD(M2C_FIELD(arg0, void **, 0), void **, 4);
        if (M2C_FIELD(temp_a0_2, u16 *, 0x30) == 0x59A) {
            if (func_00207D80(temp_a0_2, 0x294) != 0) {
                (*(s8 *)D_00CBBDF3) = 1;
            }
        }
        temp_a0_3 = M2C_FIELD(M2C_FIELD(arg0, void **, 0), void **, 4);
        if (M2C_FIELD(temp_a0_3, u16 *, 0x30) == 0x40B) {
            temp_a1 = M2C_FIELD(M2C_FIELD(arg0, void **, 4), u16 *, 0x3E);
            if ((temp_a1 == 0x59C) && !(M2C_FIELD(M2C_FIELD(*temp_s0, void **, 4), f32 *, 0x38) < 132.0f)) {
                func_002075B0(temp_a0_3, temp_a1, 0, 8);
            }
        }
        temp_a0_4 = M2C_FIELD(M2C_FIELD(arg0, void **, 0), void **, 4);
        if (M2C_FIELD(temp_a0_4, u16 *, 0x30) == 0x40C) {
            temp_a1_2 = M2C_FIELD(M2C_FIELD(arg0, void **, 4), u16 *, 0x3E);
            if ((temp_a1_2 == 0x59D) && !(M2C_FIELD(M2C_FIELD(*temp_s0, void **, 4), f32 *, 0x38) < 196.0f)) {
                func_002075B0(temp_a0_4, temp_a1_2, 0, 8);
            }
        }
        temp_a0_5 = M2C_FIELD(M2C_FIELD(arg0, void **, 0), void **, 4);
        if ((M2C_FIELD(temp_a0_5, u16 *, 0x30) == 0x40B) && (temp_a1_3 = M2C_FIELD(M2C_FIELD(arg0, void **, 4), u16 *, 0x3E), (temp_a1_3 == 0x59E)) && !(M2C_FIELD(M2C_FIELD(*temp_s0, void **, 4), f32 *, 0x38) < 240.0f)) {
            func_002075B0(temp_a0_5, temp_a1_3, 0, 8);
        }
    } else if (func_00208210(func_001A5F20(5)) == 0xB2) {
        temp_a0_6 = M2C_FIELD(M2C_FIELD(arg0, void **, 0), void **, 4);
        if (M2C_FIELD(temp_a0_6, u16 *, 0x30) == 0x59A) {
            if (func_00207D80(temp_a0_6, 0x294) != 0) {
                (*(s8 *)D_00CBBDF3) = 1;
            }
        }
        temp_a0_7 = M2C_FIELD(M2C_FIELD(arg0, void **, 0), void **, 4);
        if (M2C_FIELD(temp_a0_7, u16 *, 0x30) == 0x487) {
            temp_a1_4 = M2C_FIELD(M2C_FIELD(arg0, void **, 4), u16 *, 0x3E);
            if ((temp_a1_4 == 0x59B) && !(M2C_FIELD(M2C_FIELD(*temp_s0, void **, 4), f32 *, 0x38) < 172.0f)) {
                func_002075B0(temp_a0_7, temp_a1_4, 0, 8);
            }
        }
        temp_a0_8 = M2C_FIELD(M2C_FIELD(arg0, void **, 0), void **, 4);
        if (M2C_FIELD(temp_a0_8, u16 *, 0x30) == 0x40B) {
            temp_a1_5 = M2C_FIELD(M2C_FIELD(arg0, void **, 4), u16 *, 0x3E);
            if ((temp_a1_5 == 0x59C) && !(M2C_FIELD(M2C_FIELD(*temp_s0, void **, 4), f32 *, 0x38) < 224.0f)) {
                func_002075B0(temp_a0_8, temp_a1_5, 0, 8);
            }
        }
        temp_a0_9 = M2C_FIELD(M2C_FIELD(arg0, void **, 0), void **, 4);
        if (M2C_FIELD(temp_a0_9, u16 *, 0x30) == 0x40C) {
            temp_a1_6 = M2C_FIELD(M2C_FIELD(arg0, void **, 4), u16 *, 0x3E);
            if ((temp_a1_6 == 0x59D) && !(M2C_FIELD(M2C_FIELD(*temp_s0, void **, 4), f32 *, 0x38) < 276.0f)) {
                func_002075B0(temp_a0_9, temp_a1_6, 0, 8);
            }
        }
        temp_a0_10 = M2C_FIELD(M2C_FIELD(arg0, void **, 0), void **, 4);
        if (M2C_FIELD(temp_a0_10, u16 *, 0x30) == 0x40B) {
            temp_a1_7 = M2C_FIELD(M2C_FIELD(arg0, void **, 4), u16 *, 0x3E);
            if ((temp_a1_7 == 0x59E) && !(M2C_FIELD(M2C_FIELD(*temp_s0, void **, 4), f32 *, 0x38) < 316.0f)) {
                func_002075B0(temp_a0_10, temp_a1_7, 0, 8);
            }
        }
    }
}
