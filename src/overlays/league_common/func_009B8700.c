/* compiler: mwcc-3.0.1b210 */
#include "types.h"
typedef struct {
    s32 first, second, third;
} LeagueCommand;
extern s32 func_009B84D0(void);
extern void func_001BC300(void), func_001BC3D0(s32, s32, s32, s32);
void func_009B8700(void) {
    LeagueCommand commands[] = {{6, 0, 0x9b88b0}, {0, 1, 0x9b8840}, {1, 1, 0x9b87d0}};
    u32 i;
    if (!func_009B84D0()) {
        return;
    }
    func_001BC300();
    for (i = 0; i < 3; i++)
        func_001BC3D0(0, commands[i].first, commands[i].second, commands[i].third);
}
