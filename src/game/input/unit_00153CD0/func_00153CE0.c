/* compiler: mwcc-3.0.1b210 */
#include "types.h"
extern void Pes6Task_AddDraw(void (*draw)(void), s32 priority);
extern void func_00153E10(void), func_00153E00(void), func_00153DF0(void), func_00153DE0(void);
void func_00153CE0(void) {
    Pes6Task_AddDraw(func_00153E10, 3);
    Pes6Task_AddDraw(func_00153E10, 25);
    Pes6Task_AddDraw(func_00153E10, 27);
    Pes6Task_AddDraw(func_00153E00, 14);
    Pes6Task_AddDraw(func_00153E00, 18);
    Pes6Task_AddDraw(func_00153DF0, 5);
    Pes6Task_AddDraw(func_00153DF0, 16);
    Pes6Task_AddDraw(func_00153DF0, 20);
    Pes6Task_AddDraw(func_00153DE0, 6);
    Pes6Task_AddDraw(func_00153DE0, 17);
    Pes6Task_AddDraw(func_00153DE0, 22);
    Pes6Task_AddDraw(func_00153DE0, 26);
    Pes6Task_AddDraw(func_00153DE0, 28);
}
