/* compiler: mwcc-3.0.1b151 */
#include "pes6/m2c.h"

extern u8 Pes6Settings_Get_B02_b1_w1(void);
extern u8 Pes6Settings_Get_B03_b3_w1(void);
extern char D_00591BB9[];
extern char D_00591BCB[];
extern char D_00591C09[];

void func_00931D20(void) {
    (*(u8 *)D_00591BCB) = Pes6Settings_Get_B02_b1_w1();
    switch ((*(u8 *)D_00591C09)) {                           /* irregular */
    case 1:
    case 2:
        (*(u8 *)D_00591BB9) = Pes6Settings_Get_B03_b3_w1();
        return;
    case 4:
        (*(u8 *)D_00591BB9) = 1;
        return;
    case 14:
        (*(u8 *)D_00591BB9) = 0;
        return;
    }
}
