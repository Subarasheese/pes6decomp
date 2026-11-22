/* compiler: mwcc-3.0.1b210 */
#include "types.h"

extern s32 Pes6File_AllChannelsIdle(void);
extern s32 func_001B68B0(void);
extern s32 func_0026DA40(s32);
extern void func_0095A980(void);
extern void func_00974D50(void);
extern void func_009750B0(void);

s32 func_00975A20(void) {
    if (Pes6File_AllChannelsIdle() != 1) {
        return 0;
    }
    if (func_0026DA40(1) != 0) {
        return 0;
    }
    if (func_001B68B0() == 0) {
        return 0;
    }
    func_0095A980();
    func_00974D50();
    func_009750B0();
    return 1;
}
