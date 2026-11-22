/* compiler: mwcc-3.0.1b210 */
#include "types.h"
typedef struct {
    s32 first, second, third;
} LeagueCommand;
extern s32 func_00B28900(void);
extern void func_001BC300(void), func_001BC3D0(s32, s32, s32, s32);
void func_00B28800(void) {
    LeagueCommand commands[] = {
        {5, 0, 0xb28550}, {6, 0, 0xb28460}, {0, 1, 0xb28340}, {1, 1, 0xb28210}};
    u32 i;
    if (!func_00B28900()) {
        return;
    }
    func_001BC300();
    for (i = 0; i < 4; i++)
        func_001BC3D0(0, commands[i].first, commands[i].second, commands[i].third);
}
