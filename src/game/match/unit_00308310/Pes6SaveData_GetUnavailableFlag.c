/* compiler: mwcc-3.0.1b210 */
extern char Pes6SaveData_Unavailable[];
int Pes6SaveData_GetUnavailableFlag() {
    signed char v2;
    v2 = *( signed char *)(Pes6SaveData_Unavailable);
    return v2;
}
