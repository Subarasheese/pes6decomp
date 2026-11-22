/* compiler: ee-gcc-2.96-G0 */
/* crashbashash/DW4_Decomp, src/cri/adxt.c (ADXT_GetHdrDataId). See THIRD_PARTY.md. */

extern int func_0015A7A8(unsigned char *hdr, int size, int *ainfsiz, char *ainf, short *volume,
                         short *pan);
extern char D_0050E320[];

char *func_001669D0(unsigned char *hdr) {
    short pan[8];
    struct {
        short volume;
        int ainfsiz;
    } ainf;
    func_0015A7A8(hdr, 2048, &ainf.ainfsiz, D_0050E320, &ainf.volume, pan);
    return (ainf.ainfsiz != 0) ? (D_0050E320) : (0);
}
