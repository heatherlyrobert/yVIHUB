/*============================---beg-of-source---============================*/
/*---(headers)---------------------------*/
#include    "yVIHUB.h"
#include    "yVIHUB_priv.h"



/*> char                                                                                                                                                <* 
 *> yvihub__init_wave_one   (char a_env, char *a_title, char *a_version, char a_mode, void *f_cleanse, void *f_prep, void *f_cursor, void *f_refresh)   <* 
 *> {                                                                                                                                                   <* 
 *>    /+---(locals)-----------+-----+-----+-+/                                                                                                         <* 
 *>    char        rce         =  -10;                                                                                                                  <* 
 *>    char        rc          =    0;                                                                                                                  <* 
 *>    /+---(header)-------------------------+/                                                                                                         <* 
 *>    DEBUG_GRAF   yLOG_enter   (__FUNCTION__);                                                                                                        <* 
 *>    /+----(first)-------------------------+/                                                                                                         <* 
 *>    rc = yMODE_init           (a_mode);                                                                                                              <* 
 *>    DEBUG_GRAF   yLOG_value   ("yMODE"   , rc);                                                                                                      <* 
 *>    --rce;  if (rc < 0) {                                                                                                                            <* 
 *>       DEBUG_GRAF   yLOG_exitr   (__FUNCTION__, rce);                                                                                                <* 
 *>       return rce;                                                                                                                                   <* 
 *>    }                                                                                                                                                <* 
 *>    /+---(TEMP)---------------------------+/                                                                                                         <* 
 *>    rc = yFILE_init           ();                                                                                                                    <* 
 *>    DEBUG_GRAF   yLOG_value   ("yFILE"   , rc);                                                                                                      <* 
 *>    --rce;  if (rc < 0) {                                                                                                                            <* 
 *>       DEBUG_GRAF   yLOG_exitr   (__FUNCTION__, rce);                                                                                                <* 
 *>       return rce;                                                                                                                                   <* 
 *>    }                                                                                                                                                <* 
 *>    rc = yCMD_init            ();                                                                                                                    <* 
 *>    DEBUG_GRAF   yLOG_value   ("yCMD"    , rc);                                                                                                      <* 
 *>    --rce;  if (rc < 0) {                                                                                                                            <* 
 *>       DEBUG_GRAF   yLOG_exitr   (__FUNCTION__, rce);                                                                                                <* 
 *>       return rce;                                                                                                                                   <* 
 *>    }                                                                                                                                                <* 
 *>    /+---(early)-----------------------+/                                                                                                            <* 
 *>    rc = yVIEW_init (a_env, a_title, a_version, f_cleanse, f_prep, f_cursor, f_refresh);                                                             <* 
 *>    DEBUG_GRAF   yLOG_value   ("yVIEW"   , rc);                                                                                                      <* 
 *>    --rce;  if (rc < 0) {                                                                                                                            <* 
 *>       DEBUG_GRAF   yLOG_exitr   (__FUNCTION__, rce);                                                                                                <* 
 *>       return rce;                                                                                                                                   <* 
 *>    }                                                                                                                                                <* 
 *>    /+----(later)-------------------------+/                                                                                                         <* 
 *>    rc = yKEYS_init           ();                                                                                                                    <* 
 *>    DEBUG_GRAF   yLOG_value   ("yKEYS"   , rc);                                                                                                      <* 
 *>    --rce;  if (rc < 0) {                                                                                                                            <* 
 *>       DEBUG_GRAF   yLOG_exitr   (__FUNCTION__, rce);                                                                                                <* 
 *>       return rce;                                                                                                                                   <* 
 *>    }                                                                                                                                                <* 
 *>    rc = yMAP_init            ();                                                                                                                    <* 
 *>    DEBUG_GRAF   yLOG_value   ("yMAP"    , rc);                                                                                                      <* 
 *>    --rce;  if (rc < 0) {                                                                                                                            <* 
 *>       DEBUG_GRAF   yLOG_exitr   (__FUNCTION__, rce);                                                                                                <* 
 *>       return rce;                                                                                                                                   <* 
 *>    }                                                                                                                                                <* 
 *>    rc = ySRC_init            ();                                                                                                                    <* 
 *>    DEBUG_GRAF   yLOG_value   ("ySRC"    , rc);                                                                                                      <* 
 *>    --rce;  if (rc < 0) {                                                                                                                            <* 
 *>       DEBUG_GRAF   yLOG_exitr   (__FUNCTION__, rce);                                                                                                <* 
 *>       return rce;                                                                                                                                   <* 
 *>    }                                                                                                                                                <* 
 *>    rc = yMACRO_init          ();                                                                                                                    <* 
 *>    DEBUG_GRAF   yLOG_value   ("yMACRO"  , rc);                                                                                                      <* 
 *>    --rce;  if (rc < 0) {                                                                                                                            <* 
 *>       DEBUG_GRAF   yLOG_exitr   (__FUNCTION__, rce);                                                                                                <* 
 *>       return rce;                                                                                                                                   <* 
 *>    }                                                                                                                                                <* 
 *>    rc = yMARK_init           ();                                                                                                                    <* 
 *>    DEBUG_GRAF   yLOG_value   ("yMARK"   , rc);                                                                                                      <* 
 *>    --rce;  if (rc < 0) {                                                                                                                            <* 
 *>       DEBUG_GRAF   yLOG_exitr   (__FUNCTION__, rce);                                                                                                <* 
 *>       return rce;                                                                                                                                   <* 
 *>    }                                                                                                                                                <* 
 *>    /+---(complete)-----------------------+/                                                                                                         <* 
 *>    DEBUG_GRAF   yLOG_exit    (__FUNCTION__);                                                                                                        <* 
 *>    return 0;                                                                                                                                        <* 
 *> }                                                                                                                                                   <*/

/*> char                                                                              <* 
 *> yvihub__init_wave_two   (void)                                                    <* 
 *> {  /+---(note)---------------------------+/                                       <* 
 *>    /+                                                                             <* 
 *>     * this wave handles the inter-library calls after all are initialized         <* 
 *>     * and yVIHUB is fully configured.                                             <* 
 *>     *                                                                             <* 
 *>     +/                                                                            <* 
 *>    /+---(locals)-----------+-----+-----+-+/                                       <* 
 *>    char        rce         =  -10;                                                <* 
 *>    char        rc          =    0;                                                <* 
 *>    /+---(header)----------------------+/                                          <* 
 *>    DEBUG_GRAF   yLOG_enter   (__FUNCTION__);                                      <* 
 *>    /+----(first)-------------------------+/                                       <* 
 *>    rc = yMODE_init_after     ();                                                  <* 
 *>    DEBUG_GRAF   yLOG_value   ("yMODE"   , rc);                                    <* 
 *>    rc = yFILE_init_after     ();                                                  <* 
 *>    DEBUG_GRAF   yLOG_value   ("yFILE"   , rc);                                    <* 
 *>    rc = yCMD_init_after      ();                                                  <* 
 *>    DEBUG_GRAF   yLOG_value   ("yCMD"    , rc);                                    <* 
 *>    rc = yVIEW_init_after     ();                                                  <* 
 *>    DEBUG_GRAF   yLOG_value   ("yVIEW"   , rc);                                    <* 
 *>    rc = yKEYS_init_after     ();                                                  <* 
 *>    DEBUG_GRAF   yLOG_value   ("yKEYS"   , rc);                                    <* 
 *>    rc = yMAP_init_after      ();                                                  <* 
 *>    DEBUG_GRAF   yLOG_value   ("yMAP"    , rc);                                    <* 
 *>    rc = ySRC_init_after      ();                                                  <* 
 *>    DEBUG_GRAF   yLOG_value   ("ySRC"    , rc);                                    <* 
 *>    rc = yMACRO_init_after    ();                                                  <* 
 *>    DEBUG_GRAF   yLOG_value   ("yMACRO"  , rc);                                    <* 
 *>    rc = yMARK_init_after     ();                                                  <* 
 *>    DEBUG_GRAF   yLOG_value   ("yMARK"   , rc);                                    <* 
 *>    /+---(complete)-----------------------+/                                       <* 
 *>    DEBUG_GRAF   yLOG_exit    (__FUNCTION__);                                      <* 
 *>    return 0;                                                                      <* 
 *> }                                                                                 <*/

/*> char                                                                                                                                                <* 
 *> yVIHUB_init             (char a_env, char *a_title, char *a_version, char a_mode, void *f_cleanse, void *f_prep, void *f_cursor, void *f_refresh)   <* 
 *> {                                                                                                                                                   <* 
 *>    /+---(locals)-----------+-----+-----+-+/                                                                                                         <* 
 *>    char        rce         =  -10;                                                                                                                  <* 
 *>    char        rc          =    0;                                                                                                                  <* 
 *>    /+---(header)----------------------+/                                                                                                            <* 
 *>    DEBUG_GRAF   yLOG_enter   (__FUNCTION__);                                                                                                        <* 
 *>    /+---(waves)-----------------------+/                                                                                                            <* 
 *>    rc = yvihub__init_wave_one (a_env, a_title, a_version, a_mode, f_cleanse, f_prep, f_cursor, f_refresh);                                          <* 
 *>    DEBUG_GRAF   yLOG_value   ("wave one", rc);                                                                                                      <* 
 *>    --rce;  if (rc < 0) {                                                                                                                            <* 
 *>       DEBUG_GRAF   yLOG_exitr   (__FUNCTION__, rce);                                                                                                <* 
 *>       return rce;                                                                                                                                   <* 
 *>    }                                                                                                                                                <* 
 *>    rc = yvihub__init_wave_two ();                                                                                                                   <* 
 *>    DEBUG_GRAF   yLOG_value   ("wave two", rc);                                                                                                      <* 
 *>    --rce;  if (rc < 0) {                                                                                                                            <* 
 *>       DEBUG_GRAF   yLOG_exitr   (__FUNCTION__, rce);                                                                                                <* 
 *>       return rce;                                                                                                                                   <* 
 *>    }                                                                                                                                                <* 
 *>    yMODE_results ();                                                                                                                                <* 
 *>    /+---(complete)-----------------------+/                                                                                                         <* 
 *>    DEBUG_GRAF   yLOG_exit    (__FUNCTION__);                                                                                                        <* 
 *>    return 0;                                                                                                                                        <* 
 *> }                                                                                                                                                   <*/


