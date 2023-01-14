/*============================---beg-of-source---============================*/
/*---(headers)---------------------------*/
#include    "yVIHUB.h"
#include    "yVIHUB_priv.h"



static char     (*s_yfile_dump_add)     (char *a_name, char *a_terse, char *a_desc, void *a_provider) = yvihub_stub;

char
yVIHUB_from_yFILE         (void *f_dump_add)
{
   DEBUG_YVIHUB   yLOG_enter   (__FUNCTION__);
   s_yfile_dump_add    = f_dump_add;
   yVIHUB_yMODE_yvihub_set  (FMOD_FILE);
   DEBUG_YVIHUB   yLOG_exit    (__FUNCTION__);
   return 0;
}

char
yVIHUB_yFILE_dump_add    (char *a_name, char *a_terse, char *a_desc, void *a_provider)
{
   /*---(locals)-----------+-----+-----+-*/
   char        rc          =    0;
   /*---(header)-------------------------*/
   DEBUG_YVIHUB   yLOG_enter   (__FUNCTION__);
   /*---(call)---------------------------*/
   DEBUG_YVIHUB   yLOG_point   ("func"      , s_yfile_dump_add);
   if (s_yfile_dump_add != NULL) {
      DEBUG_YVIHUB   yLOG_note    ("calling");
      rc = s_yfile_dump_add   (a_name, a_terse, a_desc, a_provider);
      DEBUG_YVIHUB   yLOG_value   ("rc"        , rc);
   } else {
      DEBUG_YVIHUB   yLOG_note    ("never configured");
   }
   /*---(complete)-----------------------*/
   DEBUG_YVIHUB   yLOG_exit    (__FUNCTION__);
   return rc;
}
