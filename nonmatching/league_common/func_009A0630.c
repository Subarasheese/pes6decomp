/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_0021E000(u32);
M2C_UNK func_001C48E8(void *, M2C_UNK, M2C_UNK);    /* extern */
M2C_UNK func_001D5F80(s32);                         /* extern */
M2C_UNK func_001E75A0(s32, M2C_UNK *);              /* extern */
void *func_0096DB90(M2C_UNK);                       /* extern */
M2C_UNK func_0099FE60();                            /* extern */
extern void *D_003EA994;
extern char D_009C0BF0[];

void func_009A0630(void) {
    s32 temp_a0;
    s32 temp_a0_2;
    u32 temp_a0_3;
    void *temp_s0;
    void *temp_v0;

    if (D_003EA994 == NULL) {
        if (D_003EA994 == NULL) {
            temp_v0 = func_0096DB90(0x4B4);
            D_003EA994 = temp_v0;
            func_001C48E8(temp_v0, 0, 0x4B4);
        }
        temp_s0 = D_003EA994;
        if (temp_s0 != NULL) {
            func_0099FE60();
            temp_a0 = M2C_FIELD(temp_s0, s32 *, 0x88);
            if (temp_a0 != -1) {
                func_001D5F80(temp_a0);
            }
            temp_a0_2 = M2C_FIELD(temp_s0, s32 *, 0x8C);
            if (temp_a0_2 != -1) {
                func_001D5F80(temp_a0_2);
            }
            func_001D5F80(0x1029E);
            temp_a0_3 = M2C_FIELD(temp_s0, u32 *, 0x90);
            if (temp_a0_3 != 0x10B) {
                func_001E75A0(func_0021E000(temp_a0_3), ((void *)D_009C0BF0));
            }
        }
    }
}
