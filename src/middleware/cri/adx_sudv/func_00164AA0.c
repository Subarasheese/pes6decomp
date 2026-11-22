/* compiler: ee-gcc-2.96-G0 */
/* crashbashash/DW4_Decomp, src/cri/adxdvd.c (ADXF_OpenMfs). See THIRD_PARTY.md. */

extern int sprintf(char *, const char *, ...);
typedef struct AdxfHandle AdxfHandle;
extern AdxfHandle *ADXF_Open(const char *fname, void *dir);

void *func_00164AA0(void *addr, unsigned int size, void *dir) {
    char fname[32];
    sprintf(fname, "%08x.%08x", addr, (size + 2047) / 2048);
    return ADXF_Open(fname, dir);
}
