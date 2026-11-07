/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"
extern void * func_00228A00(void);
typedef struct { u8 a:4, b:2; } B;
void func_009947B0(s32 arg0) {
    B *temp_v0;

    temp_v0 = func_00228A00();
    if (temp_v0 != NULL) {
        temp_v0->b = arg0;
    }
}
