/* compiler: ee-gcc-2.96-G0 */
/* CRI AFS partition loading, adapted from crashbashash/DW4_Decomp src/cri/adxf.c. See
 * THIRD_PARTY.md. */
#include "pes6/cri_afs_partition.h"

int func_0015BC90(int ptid, const char *name, void *directory, int offset, int sectors,
                  AdxfPtInfo *partition, void *buffer, int bufferSize) {
    return func_0015C1D8(ptid, 0, 0, name, directory, offset, sectors, partition, buffer,
                         bufferSize, 0);
}
