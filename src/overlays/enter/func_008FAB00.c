/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern int Pes6Job_SendMessage(int, int, int);
extern void Pes6Job_SetDone(int);
s32 func_008FAB00(s32 arg0) {
    Pes6Job_SendMessage(0x76, 0, 1);
    Pes6Job_SetDone(arg0);
    return 1;
}
