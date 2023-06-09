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
//	Main program.
//
//-----------------------------------------------------------------------------

#include <stdio.h>

#include "../argv/argv.h"

#include "t_main.h"

int main(int argc, char** argv) {
    printf("%s\n\n", "Project Tartarus launched.");

    myargc = argc;
    myargv = argv;

    T_Main();

    return 0;
}
