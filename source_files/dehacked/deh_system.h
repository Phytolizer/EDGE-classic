//------------------------------------------------------------------------
//  SYSTEM : Bridging code
//------------------------------------------------------------------------
// 
//  DEH_EDGE  Copyright (C) 2004-2005  The EDGE Team
// 
//  This program is under the GNU General Public License.
//  It comes WITHOUT ANY WARRANTY of any kind.
//  See COPYING.txt for the full details.
//
//------------------------------------------------------------------------

#ifndef __DEH_SYSTEM_HDR__
#define __DEH_SYSTEM_HDR__

#define F_FIXED(n)  ((float)(n) / 65536.0)

#ifdef __GNUC__
#define GCCATTR(xyz) __attribute__ (xyz)
#else
#define GCCATTR(xyz)
#endif

namespace Deh_Edge
{

extern bool quiet_mode;
extern bool all_mode;

extern const dehconvfuncs_t *cur_funcs;

void System_Startup(void);
void System_Shutdown(void);

// text output functions
void PrintMsg(const char *str,   ...) GCCATTR((format (printf,1,2)));
void PrintWarn(const char *str,  ...) GCCATTR((format (printf,1,2)));
void FatalError(const char *str, ...) GCCATTR((format (printf,1,2)));
void InternalError(const char *str, ...) GCCATTR((format (printf,1,2)));

// error message storage and retrieval
void SetErrorMsg(const char *str, ...) GCCATTR((format (printf,1,2)));
const char *GetErrorMsg(void);

// these are only used for debugging
void Debug_PrintMsg(const char *str, ...) GCCATTR((format (printf,1,2)));

}  // Deh_Edge

#endif /* __DEH_SYSTEM_HDR__ */
