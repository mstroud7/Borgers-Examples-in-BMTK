#include <stdio.h>
#include "hocdec.h"
#define IMPORT extern __declspec(dllimport)
IMPORT int nrnmpi_myid, nrn_nobanner_;

extern void _a_olm_reg();
extern void _h_olm_reg();
extern void _k_olm_reg();
extern void _k_rtm_reg();
extern void _k_wb_reg();
extern void _leak_reg();
extern void _na_olm_reg();
extern void _na_rtm_reg();
extern void _na_wb_reg();
extern void _vecevent_reg();

void modl_reg(){
	//nrn_mswindll_stdio(stdin, stdout, stderr);
    if (!nrn_nobanner_) if (nrnmpi_myid < 1) {
	fprintf(stderr, "Additional mechanisms from files\n");

fprintf(stderr," a_olm.mod");
fprintf(stderr," h_olm.mod");
fprintf(stderr," k_olm.mod");
fprintf(stderr," k_rtm.mod");
fprintf(stderr," k_wb.mod");
fprintf(stderr," leak.mod");
fprintf(stderr," na_olm.mod");
fprintf(stderr," na_rtm.mod");
fprintf(stderr," na_wb.mod");
fprintf(stderr," vecevent.mod");
fprintf(stderr, "\n");
    }
_a_olm_reg();
_h_olm_reg();
_k_olm_reg();
_k_rtm_reg();
_k_wb_reg();
_leak_reg();
_na_olm_reg();
_na_rtm_reg();
_na_wb_reg();
_vecevent_reg();
}
