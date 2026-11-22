/* compiler: mwcc-3.0.1b210 */
#include "types.h"
typedef struct {
    s32 first, second, third;
} LeagueCommand;
extern s32 func_00B0BEF0(void);
extern void func_001BC300(void), func_001BC3D0(s32, s32, s32, s32);
void func_00B0BC40(void) {
    LeagueCommand commands[] = {{6, 0, 0xb0bb70}, {13, 0, 0xb0bb60}};
    u32 i;
    if (!func_00B0BEF0()) {
        return;
    }
    func_001BC300();
    for (i = 0; i < 2; i++)
        func_001BC3D0(0, commands[i].first, commands[i].second, commands[i].third);
}
