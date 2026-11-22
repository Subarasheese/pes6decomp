/* compiler: mwcc-3.0.1b210 */
#include "types.h"

extern void *memset(void *, int, unsigned int);
extern void *memcpy(void *, const void *, unsigned int);
extern char D_00CE4160[];
extern char D_00CE4178[];
extern float D_00CE4170[];
extern float D_00CE4174[];

void func_00BA3620(int arg0, int arg1) {
    if (!((arg0 != 0) && (arg1 != 0))) {
        return;
    }
    memset((int *)D_00CE4160, 0, 0x48);
    memcpy((void *)D_00CE4160, (void *)arg0, 0x10);
    memcpy((void *)D_00CE4178, (void *)arg1, 4);
    D_00CE4170[0] = *(float *)(arg0 + 8) * 0.5f + *(float *)arg0 + 0.0f;
    D_00CE4174[0] = *(float *)(arg0 + 0xc) * 0.5f + *(float *)(arg0 + 4) + 0.0f;
}
