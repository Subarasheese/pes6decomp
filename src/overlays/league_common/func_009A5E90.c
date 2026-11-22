/* compiler: mwcc-3.0.1b210 */
#include "types.h"
typedef struct {
    s32 first, second, third;
} LeagueCommand;
extern s32 func_009A84E0(void);
extern void func_001BC300(void), func_001BC3D0(s32, s32, s32, s32);
void func_009A5E90(void) {
    LeagueCommand commands[] = {
        {5, 0, 0x9a5bd0}, {6, 0, 0x9a5910}, {0, 1, 0x9a56f0}, {1, 1, 0x9a5800}};
    u32 i;
    if (!func_009A84E0()) {
        return;
    }
    func_001BC300();
    for (i = 0; i < 4; i++)
        func_001BC3D0(0, commands[i].first, commands[i].second, commands[i].third);
}
