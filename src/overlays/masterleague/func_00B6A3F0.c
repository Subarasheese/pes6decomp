/* compiler: mwcc-3.0.1b210 */
#include "types.h"
typedef struct {
    s32 first, second, third;
} LeagueCommand;
extern s32 func_00B695D0(void);
extern void func_001BC300(void), func_001BC3D0(s32, s32, s32, s32);
void func_00B6A3F0(void) {
    LeagueCommand commands[] = {
        {5, 0, 0xb6a840}, {6, 0, 0xb6a780}, {0, 1, 0xb6a540}, {1, 1, 0xb6a4f0}};
    u32 i;
    if (!func_00B695D0()) {
        return;
    }
    func_001BC300();
    for (i = 0; i < 4; i++)
        func_001BC3D0(0, commands[i].first, commands[i].second, commands[i].third);
}
