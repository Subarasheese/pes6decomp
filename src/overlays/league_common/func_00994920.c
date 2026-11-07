/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

typedef struct { u8 f : 1; u8 r : 7; } B1;
extern B1 *func_00228A00(void);

void func_00994920(s32 arg0) {
    B1 *p = func_00228A00();
    if (p != NULL) {
        p->f = arg0;
    }
}
