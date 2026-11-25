/* compiler: mwcc-3.0.1b210 */
#include "types.h"
typedef struct {
    u8 : 4;
    u8 mode : 2;
} Flag;
extern Flag D_00CCD074[];
void func_00C8B230(void) { D_00CCD074[0].mode = 2; }
