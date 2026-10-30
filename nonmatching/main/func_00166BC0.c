/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern int func_001640A8(int, int, int);
extern void func_0015B478(void *);
extern char D_003C8C50[];

void func_00166BC0(void *arg0, s32 arg1, s32 arg2, f32 fparg0) {
    s16 temp_a3;
    s32 temp_a3_2;
    s32 temp_a4;
    s32 temp_f1;
    s32 temp_v0;
    s32 temp_v1;

    if (arg0 == NULL) {
        func_0015B478(((void *)D_003C8C50));
        return;
    }
    temp_a3 = M2C_FIELD(arg0, s16 *, 0x3C);
    temp_a4 = M2C_FIELD(arg0, s32 *, 8);
    temp_f1 = (s32) (fparg0 * (f32) arg2);
    temp_v0 = ((s32) ((temp_f1 < 0) ? (temp_f1 + 0x1F) : temp_f1) >> 5) * arg1 * 0x12;
    temp_v1 = (s32) ((temp_v0 < 0) ? (temp_v0 + 0x7FF) : temp_v0) >> 0xB;
    temp_a3_2 = (temp_v1 < temp_a3) ? temp_v1 : (s32) temp_a3;
    M2C_FIELD(arg0, s16 *, 0x3E) = (s16) temp_a3_2;
    if (temp_a4 != 0) {
        func_001640A8(temp_a4, (s32) (temp_a3_2 << 0x10) >> 5, temp_a3 << 0xB);
    }
}
