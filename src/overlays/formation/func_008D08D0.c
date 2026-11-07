/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"
typedef struct { char pad[0x1C8]; void *f; } S;
extern void func_001F1990(void *);
void func_008D08D0(S *arg0) {
    func_001F1990(arg0->f);
    M2C_FIELD(arg0, void **, 0x1C8) = NULL;
}
