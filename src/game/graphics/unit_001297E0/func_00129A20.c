/* compiler: mwcc-3.0.1b151 */
#include "types.h"
typedef struct {
    u8 pad00[0x1c];
    u32 : 12;
    u32 heightMinusOne : 11;
} DisplayEnvironment;
typedef struct {
    s16 interlaceMode, outputMode, frameFieldMode;
} VideoSettings;
extern VideoSettings *sceGsGetGParam(void);
u32 func_00129A20(const DisplayEnvironment *display) {
    if (sceGsGetGParam()->interlaceMode == 1 && sceGsGetGParam()->frameFieldMode == 1)
        return (display->heightMinusOne + 1u) >> 1;
    return display->heightMinusOne + 1;
}
