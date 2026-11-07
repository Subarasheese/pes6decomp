/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"


extern char D_00658670[];
extern char D_00658671[];
extern char D_00658684[];
extern char D_00658685[];

void func_00639E20(s32 arg0) {
    s8 temp_a0;
    s8 temp_a0_2;

    temp_a0 = (arg0 / 10) + 0x30;
    (*(s8 *)D_00658684) = temp_a0;
    (*(s8 *)D_00658670) = temp_a0;
    temp_a0_2 = ((s32) arg0 % 10) + 0x30;
    (*(s8 *)D_00658685) = temp_a0_2;
    (*(s8 *)D_00658671) = temp_a0_2;
}
