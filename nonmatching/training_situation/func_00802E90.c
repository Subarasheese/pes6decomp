/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_001B9C60(void *);
extern void func_001BC360(void);
extern void func_001D7F10(void *);
void *func_00CDC590();                              /* extern */
M2C_UNK func_00CE3F00(void *);                      /* extern */
M2C_UNK func_00CEA630(M2C_UNK *);                   /* extern */
extern void *D_003E7E1C;
extern char D_00813CB0[];
extern char D_00813CB4[];
extern char D_00813CB8[];
extern char D_00813CBC[];
extern char D_00813CC0[];
extern char D_00813CC4[];
extern void *D_00CFF000;
extern char D_00CFF014[];
extern char D_00CFF018[];
extern char D_00CFF024[];
extern char D_00CFF030[];
extern char D_00CFF0B0[];
extern void *D_00CFF0C4;
extern void *D_00CFF0C8;

void func_00802E90(void) {
    s32 sp10;
    f32 sp14;
    f32 sp18;
    f32 sp1C;
    f32 sp20;
    f32 sp24;
    s32 *var_a2;
    s32 temp_a1;
    s32 var_a0_2;
    s32 var_v1;
    u32 var_a0;

    if (M2C_FIELD(D_003E7E1C, s32 *, 8) != 0) {
        func_00CE3F00(D_003E7E1C + 8);
        func_00CEA630(((void *)D_00CFF030));
        if ((*(s32 *)D_00CFF024) != 0) {
            (*(s32 *)D_00CFF024) = 0;
        }
        if ((*(s32 *)D_00CFF014) >= 0) {
            func_001BC360();
            (*(s32 *)D_00CFF014) = -1;
        }
        if ((*(s32 *)D_00CFF018) >= 0) {
            func_001BC360();
            (*(s32 *)D_00CFF018) = -1;
        }
        if (D_00CFF000 != NULL) {
            func_001B9C60(D_00CFF000);
            D_00CFF000 = NULL;
        }
        func_001BC360();
        func_001BC360();
        if (D_00CFF0C4 != NULL) {
            func_001D7F10(D_00CFF0C4);
            D_00CFF0C4 = NULL;
        }
        if (D_00CFF0C8 != NULL) {
            func_001D7F10(D_00CFF0C8);
            D_00CFF0C8 = NULL;
        }
        if ((*(s32 *)D_00CFF0B0) < 2) {
            temp_a1 = M2C_FIELD(func_00CDC590(), s32 *, 0xEC);
            var_a2 = &sp10;
            sp10 = (*(s32 *)D_00813CB0);
            sp14 = (*(f32 *)D_00813CB4);
            sp18 = (*(f32 *)D_00813CB8);
            sp1C = (*(f32 *)D_00813CBC);
            var_a0 = 0;
            sp20 = (*(f32 *)D_00813CC0);
            sp24 = (*(f32 *)D_00813CC4);
loop_15:
            if (temp_a1 != *var_a2) {
                var_a0 += 1;
                var_a2 += 4;
                if (var_a0 >= 6U) {
                    var_v1 = 0;
                } else {
                    goto loop_15;
                }
            } else {
                var_v1 = 1;
            }
            if (var_v1 != 0) {
                var_a0_2 = 2;
            } else {
                goto block_23;
            }
        } else {
block_23:
            var_a0_2 = (*(s32 *)D_00CFF0B0) + 1;
        }
        (*(s32 *)D_00CFF0B0) = var_a0_2;
    }
}
