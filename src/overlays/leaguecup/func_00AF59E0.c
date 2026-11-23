/* compiler: mwcc-3.0.1b210 */
#include "pes6/menu_commands.h"
extern s32 func_00AF5920(void);
extern void *func_00AF5740(void);
void func_00AF59E0(void) {
    MenuCommandEntry commands[] = {{5, 0, func_00AF5920}};
    u32 i;
    if (!func_00AF5740())
        return;
    func_001BC300();
    i = 0;
    do {
        func_001BC3D0(0, commands[i].id, commands[i].flags, commands[i].callback);
    } while (++i < sizeof(commands) / sizeof(commands[0]));
}
