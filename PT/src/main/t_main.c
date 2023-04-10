//-----------------------------------------------------------------------------
//
// $Id:$
//
// Copyright (C) 2023 by Lich Software.
//
// This source is available for the sole purpose of educating whoever
// might find it useful. Please, do not steal.
//
// All rights reserved.
//
// $Log:$
//
// DESCRIPTION:
//	Main Project Tartarus program.
//
//-----------------------------------------------------------------------------

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#include "../argv/argv.h"

#include "t_main.h"

//-----------------------------------------------------------------------------
// MISC VARIABLES
//-----------------------------------------------------------------------------
FILE* debugfile;

//-----------------------------------------------------------------------------
// FUNCTION DECLARATIONS
//-----------------------------------------------------------------------------

//
// Not a globally visible function.
// Called by T_Main(); never exits.
// Manages timing and IO.
// TODO calls (?)
//
void TartarusLoop(void);

//-----------------------------------------------------------------------------
// FUNCTION DEFINITIONS
//-----------------------------------------------------------------------------

void TartarusLoop(void)
{
    if (CheckParam("-debugfile"))
    {
        char filename[20];
        sprintf(filename, "%s.txt", "debugfile");
        printf("debug output to: %s\n", filename);
        debugfile = fopen(filename, "w");
    }

    while (1)
    {
        // TODO frame IO operations
        // TODO update sounds
        // TODO update display, next frame, with current state
    }
}

void T_Main()
{
    // TODO do a bunch of things

    // Never returns.
    TartarusLoop();
}
