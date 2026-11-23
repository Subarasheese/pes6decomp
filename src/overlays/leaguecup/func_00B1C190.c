/* compiler: mwcc-3.0.1b210 */
#include "pes6/menu_commands.h"
extern s32 func_00B1C220(void);
extern void *func_00B1AF30(void);
void func_00B1C190(void) {
    MenuCommandEntry commands[] = {{5, 0, func_00B1C220}};
    u32 i;
    if (!func_00B1AF30())
        return;
    func_001BC300();
    i = 0;
    do {
        func_001BC3D0(0, commands[i].id, commands[i].flags, commands[i].callback);
    } while (++i < sizeof(commands) / sizeof(commands[0]));
}
