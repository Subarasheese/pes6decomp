/* compiler: ee-gcc-2.96-G0 */
/* crashbashash/DW4_Decomp, src/cri/ps2rna.c (ps2rna_finish_port). See THIRD_PARTY.md. */

extern int DTX_CallUrpc(int fno, int *send, int nsend, int *recv, int nrecv);
enum {
    PS2RNA_RPC_CREATE = 8,
    PS2RNA_RPC_DESTROY = 9,
    PS2RNA_RPC_OUTMODE = 11,
    PS2RNA_RPC_INIT_PORT = 12,
    PS2RNA_RPC_FINISH_PORT = 13,
    PS2RNA_RPC_START_AUX = 14,
    PS2RNA_RPC_STOP_AUX = 15,
    PS2RNA_RPC_OPEN_PORT = 16,
    PS2RNA_RPC_CLOSE_PORT = 17
};
extern int D_0038DBD0;
extern int D_0038DBD8;
extern int D_0038DC10[2];
int func_00174FB0(void) {
    int ret;
    if ((D_0038DBD8 != 1) || (D_0038DBD0 > 0)) {
        ret = DTX_CallUrpc(PS2RNA_RPC_FINISH_PORT, 0, 0, 0, 0);
        D_0038DC10[0] = 0;
        D_0038DC10[1] = 0;
        return ret;
    }
}
