/* compiler: mwcc-3.0.1b210 */
#include "types.h"
typedef struct {
    s32 first, second, third;
} LeagueCommand;
extern s32 func_00AF7970(void);
extern void func_001BC300(void), func_001BC3D0(s32, s32, s32, s32);
void func_00AF1800(void) {
    LeagueCommand commands[] = {
        {5, 0, 0xaf1770}, {6, 0, 0xaf1730}, {3, 1, 0xaf1690}, {2, 1, 0xaf15f0}};
    u32 i;
    if (!func_00AF7970()) {
        return;
    }
    func_001BC300();
    for (i = 0; i < 4; i++)
        func_001BC3D0(0, commands[i].first, commands[i].second, commands[i].third);
}
