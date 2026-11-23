/* compiler: mwcc-3.0.1b210 */
#include "types.h"
typedef struct {
    u8 : 4;
    u8 mode : 2;
} GameFlags;
extern GameFlags D_00CCD074[];
s32 func_00C8B210(void) { return (s32)D_00CCD074[0].mode > 0; }
