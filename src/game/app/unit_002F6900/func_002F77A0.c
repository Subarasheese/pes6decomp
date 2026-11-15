/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"
M2C_UNK func_001A3240();                            /* extern */
extern char Pes6MatchSelect_LoadSequenceState[];

void func_002F77A0(void) {
    func_001A3240();
    (*(s32 *)Pes6MatchSelect_LoadSequenceState) = 0;
}
