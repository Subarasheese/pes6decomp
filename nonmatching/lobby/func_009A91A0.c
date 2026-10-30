/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_00D0C540(f32 *, f32 *);                /* extern */
M2C_UNK func_00D0C7B0(f32 *, M2C_UNK, f32 *, f32 *); /* extern */
extern char D_009FEE30[];
extern char D_009FEE34[];
extern char D_009FEE38[];
extern char D_009FEE3C[];
extern char D_009FEE40[];
extern char D_009FEE44[];
extern char D_009FEE50[];
extern char D_009FEE54[];
extern char D_009FEE58[];
extern char D_009FEE5C[];

void func_009A91A0(void *arg0, s32 arg1) {
    f32 sp10;
    f32 sp14;
    f32 sp18;
    f32 sp1C;
    f32 sp20;
    f32 sp24;
    f32 sp28;
    f32 sp2C;
    f32 sp30;
    f32 sp34;
    s32 temp_v1_2;
    u8 temp_v1;

    sp20 = (*(f32 *)D_009FEE30);
    sp24 = (*(f32 *)D_009FEE34);
    sp28 = (*(f32 *)D_009FEE38);
    sp2C = (*(f32 *)D_009FEE3C);
    sp30 = (*(f32 *)D_009FEE40);
    sp34 = (*(f32 *)D_009FEE44);
    sp10 = (*(f32 *)D_009FEE50);
    sp14 = (*(f32 *)D_009FEE54);
    sp18 = (*(f32 *)D_009FEE58);
    sp1C = (*(f32 *)D_009FEE5C);
    if (arg0 != NULL) {
        if (arg1 == 1) {
            temp_v1 = M2C_FIELD(arg0, u8 *, 0x378);
            switch (temp_v1) {                      /* irregular */
            case 32:
                temp_v1_2 = M2C_FIELD(arg0, s32 *, 0x398);
                if ((temp_v1_2 != 0xB) && (temp_v1_2 != 9)) {
                    func_00D0C7B0(&sp20, 3, ((void *)D_009FEE58), &sp20);
                    return;
                }
                func_00D0C7B0(&sp10, 2, ((void *)D_009FEE58), &sp20);
                return;
            case 11:
            case 9:
                func_00D0C7B0(&sp10, 2, ((void *)D_009FEE58), &sp20);
                return;
            default:
                func_00D0C7B0(&sp20, 3, ((void *)D_009FEE58), &sp20);
                return;
            }
        } else {
            func_00D0C540(((void *)D_009FEE58), &sp20);
        }
    }
}
