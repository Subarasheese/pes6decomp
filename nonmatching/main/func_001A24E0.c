/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_001453E0(s32);
extern void func_00145380(s32);
extern void func_00153FA0(void *);
s32 func_001454C0(s32);                             /* extern */
M2C_UNK func_00145590(void *);                      /* extern */
M2C_UNK func_00145750(void *);                      /* extern */
void *func_0014AEE0(s32, s32);                      /* extern */
s32 func_0014D720(s32);                             /* extern */
M2C_UNK func_00150DC0(void *, s32);                 /* extern */
extern char D_00520358[];

void func_001A24E0(s32 arg0) {
    s32 temp_s0;
    s32 temp_s1;
    s32 temp_s4;
    s32 temp_v0;
    void **temp_s3;
    void *temp_s2;
    void *temp_v0_2;

    temp_s4 = arg0 + 0x713E;
    temp_s3 = ((void *)D_00520358) + (arg0 * 4);
    temp_s0 = arg0 + 0x4266;
    temp_s2 = *temp_s3;
    temp_s1 = func_001454C0(temp_s4);
    if (temp_s2 != NULL) {
        if (temp_s1 == 0) {
            return;
        }
        temp_v0 = func_0014D720(temp_s1);
        switch (temp_v0) {                          /* irregular */
        case 2:
            func_00150DC0(temp_s2, temp_s1);
            return;
        case 3:
            func_00145590(temp_s2);
            func_00153FA0(temp_s2);
            temp_v0_2 = func_0014AEE0(temp_s4, temp_s0);
            func_00145750(temp_v0_2);
            func_001453E0(temp_s0);
            func_00145380(temp_s0);
            *temp_s3 = temp_v0_2;
            break;
        }
    }
}
