/* compiler: mwcc-3.0.1b210 */
#include "pes6/file_workers.h"
void func_0017FE20(void) {
    s32 i;
    s32 j;
    func_001C48E8(D_00519E60, 0, sizeof(D_00519E60));
    func_00181350();
    func_0017FFF0();
    func_00180220();
    for (i = 0; i < FILE_WORKER_COUNT; ++i) {
        D_00519E48[i] = func_0012AF40(1, 0, 0);
    }
    for (j = 0; j < FILE_WORKER_COUNT; ++j) {
        D_00519E60[j].thread = func_0012AE10(D_00519E60[j].entry, D_00519E60[j].stack,
                                             sizeof(D_00519E60[j].stack), j + 28, 0, 0);
    }
    D_003E986C = 1;
}
