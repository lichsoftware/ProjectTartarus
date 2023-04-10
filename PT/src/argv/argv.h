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

#ifndef __ARGV_H__
#define __ARGV_H__

//-----------------------------------------------------------------------------
// MISC VARIABLES
//-----------------------------------------------------------------------------

extern int    myargc;
extern char** myargv;

//-----------------------------------------------------------------------------
// FUNCTION DECLARATIONS
//-----------------------------------------------------------------------------

//
// Returns the position of the given parameter
// in the arg list (0 if not found).
//
int CheckParam(char* check);

#endif
