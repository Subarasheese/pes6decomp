/* compiler: mwcc-3.0.1b210 */
#include "types.h"
typedef struct {
    s32 first, second, third;
} LeagueCommand;
extern s32 func_009BC8E0(void);
extern void func_001BC300(void), func_001BC3D0(s32, s32, s32, s32);
void func_009BA890(void) {
    LeagueCommand commands[] = {{6, 0, 0x9ba7d0}, {13, 0, 0x9ba770}};
    u32 i;
    if (!func_009BC8E0()) {
        return;
    }
    func_001BC300();
    for (i = 0; i < 2; i++)
        func_001BC3D0(0, commands[i].first, commands[i].second, commands[i].third);
}
