/* compiler: mwcc-3.0.1b151 */
#include "pes6/m2c.h"
extern void *Pes6Ball_Current;
void func_0027D5E0(void) {
    unsigned char index;
    for (index = 0; index < 10; ++index) {
        M2C_FIELD((char *)Pes6Ball_Current + index * 2, unsigned short *, 0xA4) = 0xFF;
    }
}
