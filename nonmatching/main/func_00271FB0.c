/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_0017B0F0(void *, s32);
extern void func_0017BF10(void *, s32, s32, f32);
M2C_UNK func_0017BF80(void *, M2C_UNK, s32);        /* extern */
M2C_UNK func_0017C080(void *, M2C_UNK, s32);        /* extern */
M2C_UNK func_0017C3B0(void *);                      /* extern */
void *func_0017C500(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
extern char D_003AB680[];
extern void *Pes6Ball_Current;
extern s32 *D_003E98D4;
extern s32 D_003E9C90;
extern char D_00521D00[];
extern char D_00521D04[];

void func_00271FB0(void) {
    void *temp_a0;
    void *temp_a0_2;
    void *temp_v0;
    void *temp_v0_2;

    temp_a0 = M2C_FIELD(Pes6Ball_Current, void **, 0);
    if (temp_a0 == NULL) {
        if (temp_a0 != NULL) {
            func_0017C3B0(temp_a0);
        }
        temp_v0 = func_0017C500(0, 0, 0, 1, 2);
        M2C_FIELD(Pes6Ball_Current, void **, 0) = temp_v0;
        M2C_FIELD(temp_v0, s8 *, 0xA) = 1;
        if (*D_003E98D4 != 0) {
            M2C_FIELD(temp_v0, s8 *, 8) = 0;
        } else {
            M2C_FIELD(temp_v0, s8 *, 8) = 1;
        }
        func_0017C080(temp_v0, 0, D_003E9C90);
        M2C_FIELD(M2C_FIELD(temp_v0, void **, 0x1C), s32 *, 0) = 1;
        func_0017BF80(temp_v0, 0, D_003E9C90);
        func_0017BF80(temp_v0, 1, (*(s32 *)D_00521D00));
        M2C_FIELD(temp_v0, void **, 0x34) = (void *) M2C_FIELD(temp_v0, void **, 0x20);
        M2C_FIELD(M2C_FIELD(temp_v0, void **, 0x20), s32 *, 4) = (s32) M2C_FIELD(M2C_FIELD(temp_v0, void **, 0x1C), s32 *, 8);
        M2C_FIELD(M2C_FIELD(temp_v0, void **, 0x20), s32 *, 0x18) = (s32) M2C_FIELD(M2C_FIELD(temp_v0, void **, 0x1C), s32 *, 8);
        if ((u32) (*D_003E98D4 - 1) < 2U) {
            func_0017BF10(temp_v0, 0, (s32) ((void *)D_003AB680), 15.0f);
        }
        func_0017B0F0(temp_v0, 1);
        M2C_FIELD(temp_v0, s8 *, 0) = 1;
        temp_a0_2 = M2C_FIELD(Pes6Ball_Current, void **, 8);
        if (temp_a0_2 != NULL) {
            func_0017C3B0(temp_a0_2);
        }
        temp_v0_2 = func_0017C500(0, 0, 0, 1, 0);
        M2C_FIELD(Pes6Ball_Current, void **, 8) = temp_v0_2;
        func_0017C080(temp_v0_2, 0, (*(s32 *)D_00521D04));
        *M2C_FIELD(temp_v0_2, s32 **, 0x1C) = 1;
        func_0017B0F0(temp_v0_2, 0);
        M2C_FIELD(temp_v0_2, s8 *, 0) = 1;
    }
}
