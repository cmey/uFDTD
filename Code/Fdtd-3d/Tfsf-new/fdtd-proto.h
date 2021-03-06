#ifndef _FDTD_PROTO_H
#define _FDTD_PROTO_H

#include "fdtd-grid.h"

/* Function prototypes */
void abcInit(Grid *g);
void abc(Grid *g);

void gridInit(Grid *g);
void gridInit1d(Grid *g);

void snapshotInit3d(Grid *g);
void snapshot3d(Grid *g);

void updateE(Grid *g);
void updateH(Grid *g);

void tfsfInit(Grid *g);
void tfsf(Grid *g);

#endif
