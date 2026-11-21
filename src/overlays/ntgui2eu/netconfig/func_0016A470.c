/* compiler: ee-gcc-2.9 */
#include "types.h"

extern void *func_0016AB80(void *, s16);

void func_0016A470(void *arg0, int arg1, int arg2, int arg3, int arg4) {
    void *pvVar1;

    pvVar1 = 0;
    if (((((arg4 & 1U) == 0) || (pvVar1 = func_0016AB80(arg0, 8), pvVar1 != 0)) &&
         (((arg4 & 2U) == 0 || (pvVar1 = func_0016AB80(arg0, 9), pvVar1 != 0)))) &&
        ((((arg4 & 4U) == 0 || (pvVar1 = func_0016AB80(arg0, 10), pvVar1 != 0)) &&
          (pvVar1 != 0)))) {
        *(int *)((int)arg0 + 0xfd4) = arg1;
        *(int *)((int)pvVar1 + 0x14) = arg1;
        *(int *)((int)arg0 + 0xfd8) = arg2;
        *(int *)((int)pvVar1 + 0x18) = arg2;
        *(int *)((int)arg0 + 0xfdc) = arg3;
        *(int *)((int)pvVar1 + 0x1c) = arg3;
        *(int *)((int)pvVar1 + 0x20) = arg4;
        *(u32 *)((int)arg0 + 0xfe0) = *(u32 *)((int)arg0 + 0xfe0) & ~arg4;
    }
}
