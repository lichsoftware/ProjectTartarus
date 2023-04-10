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
//	Misc. program argument control.
//
//-----------------------------------------------------------------------------

#include <string.h>

//-----------------------------------------------------------------------------
// MISC VARIABLES
//-----------------------------------------------------------------------------
int    myargc;
char** myargv;

//-----------------------------------------------------------------------------
// FUNCTION DEFINITIONS
//-----------------------------------------------------------------------------

//
// Checks for the given parameter in the program's
// command line arguments. Returns the argumen number
// (1 to argc-1) or 0 if not present.
//
int CheckParam(char* check)
{
    for (int i = 1; i < myargc; ++i)
    {
        if (!strcasecmp(check, myargv[i]))
        {
            return i;
        }
    }

    return 0;
}
