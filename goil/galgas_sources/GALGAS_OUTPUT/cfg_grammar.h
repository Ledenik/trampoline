//---------------------------------------------------------------------------*
//                                                                           *
//                           File 'cfg_grammar.h'                            *
//                 Generated by version GALGAS_BETA_VERSION                  *
//                      june 10th, 2010, at 19h41'21"                        *
//                                                                           *
//---------------------------------------------------------------------------*

//--- START OF USER ZONE 1


//--- END OF USER ZONE 1

#ifndef GRAMMAR_cfg_5F_grammar_HAS_BEEN_DEFINED
#define GRAMMAR_cfg_5F_grammar_HAS_BEEN_DEFINED

//---------------------------------------------------------------------------*

#include "cfg_syntax.h"

//--- START OF USER ZONE 2


//--- END OF USER ZONE 2

//---------------------------------------------------------------------------*

class cGrammar_cfg_5F_grammar : public cParser_cfg_5F_syntax {
  public : virtual void nt_cfg_5F_attrs_ (GALGASap_cfg_5F_attrs & ioArgument0,
                                          C_Lexique_cfg_5F_lexique * inCompiler) ;

  public : virtual void nt_cfg_5F_start_ (GALGASap_config & outArgument0,
                                          C_Lexique_cfg_5F_lexique * inCompiler) ;

  public : static void _performSourceFileParsing_ (C_Compiler * inCompiler,
                                                   GALGASap_lstring inFileName,
                                                   GALGASap_config & outArgument0
                                                   COMMA_LOCATION_ARGS) ;

  public : static void _performSourceStringParsing_ (C_Compiler * inCompiler,
                                                     GALGASap_string inSourceString,
                                                     GALGASap_config & outArgument0
                                                     COMMA_LOCATION_ARGS) ;

  public : virtual void nt_interrupts_ (GALGASap_basic_5F_type & ioArgument0,
                                        C_Lexique_cfg_5F_lexique * inCompiler) ;


  public : virtual PMSInt32 select_cfg_5F_syntax_0 (C_Lexique_cfg_5F_lexique *) ;

  public : virtual PMSInt32 select_cfg_5F_syntax_1 (C_Lexique_cfg_5F_lexique *) ;

  public : virtual PMSInt32 select_cfg_5F_syntax_2 (C_Lexique_cfg_5F_lexique *) ;
} ;

//---------------------------------------------------------------------------*

#endif
