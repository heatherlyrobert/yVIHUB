/*============================---beg-of-source---============================*/
/*---(headers)---------------------------*/
#include    "yVIHUB.h"
#include    "yVIHUB_priv.h"


static char     (*s_ymode_yvihub)     (char)                           = yvihub_stub;


char
yVIHUB_from_yMODE        (void *f_yvihub)
{
   DEBUG_YVIHUB   yLOG_enter   (__FUNCTION__);
   s_ymode_yvihub     = f_yvihub;
   yVIHUB_yMODE_yvihub_set  (FMOD_MODE);
   DEBUG_YVIHUB   yLOG_exit    (__FUNCTION__);
   return 0;
}

char
yVIHUB_yMODE_yvihub_set     (char a_abbr)
{
   /*---(locals)-----------+-----+-----+-*/
   char        rc          =    0;
   /*---(header)-------------------------*/
   DEBUG_YVIHUB   yLOG_enter   (__FUNCTION__);
   /*---(call)---------------------------*/
   DEBUG_YVIHUB   yLOG_point   ("func"      , s_ymode_yvihub);
   if (s_ymode_yvihub != NULL) {
      DEBUG_YVIHUB   yLOG_note    ("calling");
      rc = s_ymode_yvihub (a_abbr);
      DEBUG_YVIHUB   yLOG_value   ("rc"        , rc);
   } else {
      DEBUG_YVIHUB   yLOG_note    ("never configured");
   }
   /*---(complete)-----------------------*/
   DEBUG_YVIHUB   yLOG_exit    (__FUNCTION__);
   return rc;
}


