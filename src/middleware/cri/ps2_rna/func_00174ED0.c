/* compiler: ee-gcc-2.96-G0 */
/* crashbashash/DW4_Decomp, src/cri/ps2rna.c (ps2rna_init_port). See THIRD_PARTY.md. */

extern int DTX_CallUrpc(int fno, int *send, int nsend, int *recv, int nrecv);
extern int func_0016A4D0(const char *name, int *value);
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
enum { PS2RNA_PORT_BOTH = 2 };
extern int D_0038DBD0;
extern int D_0038DBD8;
extern int D_0038DC04;
extern int D_0038DC08;
extern int D_0038DC10[2];
extern int D_0038DC18;
extern char D_003CBEB8[];
void func_00174ED0(void) {
    int value;
    int sfreq;
    int reply;
    int mode;
    if ((D_0038DBD8 == 1) && (D_0038DBD0 <= 0)) {
        return;
    }
    if (func_0016A4D0(D_003CBEB8, &value) == 0) {
        sfreq = value;
    } else {
        sfreq = 48000;
    }
    D_0038DC18 = (mode = DTX_CallUrpc(PS2RNA_RPC_INIT_PORT, &sfreq, 1, &reply, 1));
    D_0038DC04 = 0;
    D_0038DC08 = 0;
    if (mode == PS2RNA_PORT_BOTH) {
        D_0038DC10[0] = 1;
        D_0038DC10[1] = 1;
    } else {
        D_0038DC10[mode] = 1;
        D_0038DC10[mode == 0] = 0;
    }
}
