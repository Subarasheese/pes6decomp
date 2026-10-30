/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern int func_001640A8(int, int, int);
extern void func_0015B478(void *);
extern char D_003C8C80[];

void func_00166CA0(void *arg0) {
    s16 temp_a2;
    s32 temp_f1;
    s32 temp_v1;

    if (arg0 == NULL) {
        func_0015B478(((void *)D_003C8C80));
        return;
    }
    temp_a2 = M2C_FIELD(arg0, s16 *, 0x3C);
    temp_v1 = M2C_FIELD(arg0, s32 *, 8);
    temp_f1 = (s32) ((f32) temp_a2 * 0.84999996f);
    M2C_FIELD(arg0, s16 *, 0x3E) = (s16) temp_f1;
    if (temp_v1 != 0) {
        func_001640A8(temp_v1, (s32) (temp_f1 << 0x10) >> 5, temp_a2 << 0xB);
    }
}
