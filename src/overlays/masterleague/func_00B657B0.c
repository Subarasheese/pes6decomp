/* compiler: mwcc-3.0.1b210 */
#include "pes6/menu_commands.h"
extern s32 func_00B65B30(void);
extern s32 func_00B65AA0(void);
extern s32 func_00B658F0(void);
extern s32 func_00B658B0(void);
extern s32 *func_00B64F60(void);

void func_00B657B0(void) {
    MenuCommandEntry commands[] = {{6, 0, func_00B65B30},
                                   {11, 0, func_00B65AA0},
                                   {0, 1, func_00B658F0},
                                   {1, 1, func_00B658B0}};
    u32 i;
    s32 *state = func_00B64F60();
    if (!state)
        return;
    *state = 0;
    func_001BC300();
    for (i = 0; i < 4; i++)
        func_001BC3D0(0, commands[i].id, commands[i].flags, commands[i].callback);
}
