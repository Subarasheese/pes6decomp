/* compiler: ee-gcc-2.9-G0 */
/* File I/O RPC, following the PAL sceRead implementation and the sceLseek paths in DW4_Decomp. See
 * THIRD_PARTY.md. */
#define FILEIO_NTGUI
#define FILE_SEEK func_001A0678
#define SEEK_COMMAND 4
#define SEEK_OFFSET int
#define SEEK_LABEL D_006005A0
#include "pes6/fileio_seek.inc"
