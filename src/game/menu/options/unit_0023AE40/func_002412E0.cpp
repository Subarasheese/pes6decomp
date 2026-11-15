/* compiler: ee-gcc-2.96-G0 */
/* Byte-identical to a GT4 function; source ported from the GT4 decompilation
 * (MIT, see THIRD_PARTY.md). Names here do not identify PES6 behavior. */
extern "C" void func_001FA5A0(void);
extern "C" void func_00244E30(void);
extern "C" void Pes6MatchSetup_BuildLineups(void);
extern "C" void func_002D2FF0(void);

extern "C" void func_002412E0(void) {
    Pes6MatchSetup_BuildLineups();
    func_001FA5A0();
    func_00244E30();
    func_002D2FF0();
}
