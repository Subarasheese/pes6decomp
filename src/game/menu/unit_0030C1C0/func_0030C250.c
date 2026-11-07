/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

typedef struct { u8 pad[4]; u8 field4[0x98]; } Elem9C;

Elem9C *func_00223BC0(void);

s32 func_0030C250(s32 arg0) {
    return (s32)func_00223BC0()[arg0].field4;
}
