/* compiler: mwcc-3.0.1b210 */
#include "pes6/menu_commands.h"
extern s32 func_00366700(void);
extern void *func_00B03A80(void);
void func_003667A0(void) {
    MenuCommandEntry commands[] = {{5, 0, func_00366700}};
    u32 i;
    if (!func_00B03A80())
        return;
    func_001BC300();
    i = 0;
    do {
        func_001BC3D0(0, commands[i].id, commands[i].flags, commands[i].callback);
    } while (++i < sizeof(commands) / sizeof(commands[0]));
}
