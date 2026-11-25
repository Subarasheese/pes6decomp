/* compiler: mwcc-3.0.1b210 */
#include "pes6/file_workers.h"
void func_0017FD90(void) {
    s32 i;
    s32 j;
    func_0017FFE0();
    for (i = 0; i < FILE_WORKER_COUNT; ++i) {
        func_0012AD80(D_00519E48[i]);
    }
    for (j = 0; j < FILE_WORKER_COUNT; ++j) {
        func_0012AFA0(D_00519E60[j].thread);
    }
    D_003E986C = 0;
    func_001C48E8(D_00519E60, 0, sizeof(D_00519E60));
}
