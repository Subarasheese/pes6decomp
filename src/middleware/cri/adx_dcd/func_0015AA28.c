/* compiler: ee-gcc-2.96-G0 */
/* crashbashash/DW4_Decomp, src/cri/adxdcd.c (ADX_CalcHdrInfoLen). See THIRD_PARTY.md. */

int func_0015AA28(int type, int len, int ofst, unsigned int blk) {
    if (type == 0) {
        return ((((len + (ofst + blk)) + 33) / blk) * blk) - ofst;
    }
    return ((((len + (ofst + blk)) + 57) / blk) * blk) - ofst;
}
