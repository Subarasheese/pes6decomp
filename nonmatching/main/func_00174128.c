/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern int func_00173E00(int, int, int);
extern void func_0015B478(void *);
extern char D_003CBB50[];
extern char D_003CBB80[];

void func_00174128(void *arg0, s32 arg1, s32 arg2) {
    s32 temp_a0;
    void *temp_s0;

    if (arg0 == NULL) {
        func_0015B478(((void *)D_003CBB50));
        return;
    }
    temp_s0 = M2C_FIELD(M2C_FIELD(arg0, void **, 4), void **, 4);
    temp_a0 = M2C_FIELD(temp_s0, s32 *, 0xE8);
    if ((M2C_FIELD(arg0, s8 *, 3) < 2) || (temp_a0 == 0)) {
        func_0015B478(((void *)D_003CBB80));
        return;
    }
    func_00173E00(temp_a0, arg1, arg2);
    M2C_FIELD(temp_s0, s32 *, 0xF0) = arg2;
    M2C_FIELD(temp_s0, s32 *, 0xEC) = arg1;
}
