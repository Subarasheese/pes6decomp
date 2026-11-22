/* compiler: mwcc-3.0.1b210 */
#include "types.h"

extern void func_001BC300(void);
extern s32 Pes6PauseEvSet_Start(s32, s32, s32);
extern s32 SD_call(s32);
extern s32 func_008F7AB0(void);
extern void func_008F7AE0(void);

s32 func_008F7B10(void) {
    SD_call(0x84028400);
    func_001BC300();
    Pes6PauseEvSet_Start((s32) func_008F7AE0, (s32) func_008F7AB0, 0);
    return 2;
}
